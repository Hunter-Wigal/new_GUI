#!/usr/bin/env python3

import subprocess
import signal
from typing import Dict, Tuple, List, Callable

import prctl

import re

from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.QtCore import pyqtSignal as Signal

import rclpy
from rclpy.node import Node, Subscription, Service
from theora_webcams.msg import Status
# from theora_webcams.srv import GetExposureBounds
# from theora_webcams.srv import SetExposure
from sensor_msgs.msg import Image
from theora_image_transport.msg import Packet

from rcl_interfaces.srv import SetParameters
from rcl_interfaces.msg import Parameter

class ParamServiceClient(Node):
    def __init__(self, name, topic, type):
        super().__init__(name)
        self.cli = self.create_client(type, topic)

        self.req = type.Request()

    def send_request(self, **kwargs):
        for key, value in kwargs.items():
            setattr(self.req, key, value)

        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


# Duplicated from roslink, just for adding camera subscribers
class NewSubscriber(Node):
    def __init__(self, name, topic, type, callback):
        super().__init__(name)

        self.subscription = self.create_subscription(
            type,
            topic,
            callback,
            20)
        self.subscription  # prevent unused variable warning

class CameraSubscriber(QObject):
	def __init__(self, cam_name: str, change_video_handler: Service, exposure_signal: Signal, image_signal: Signal(str, Image), roslink):
		super().__init__()
		self.topic_node = Node("topic_getter")

		self.raw_topic = f"{cam_name}"
		# self.republished_topic = f"{cam_name}/republished"
		# self.decompressed_topic = f"{cam_name}/image/decompressed"
		self.status_topic = f"{cam_name}/status"

		self.cam_name = cam_name
		self.change_video_handler = change_video_handler
		self.exposure_signal = exposure_signal
		self.image_signal = image_signal

		#self.republisher_cmd = f'ros2 run image_transport republish theora --ros-args --remap in:={self.raw_topic} --ros-args --remap out:={self.republished_topic}'
		self.republisher_process = None

		self.decompressed_sub: Subscription = None
		#self.decompression_cmd = 'ros2 run image_transport republish theora --ros-args --remap in:={compressed_topic} --ros-args --remap out:={decompressed_topic}'
		self.decompression_process = None

		# initialize image metrics
		self.subscribed = False
		self.height = '?'
		self.width = '?'
		self.framerate_num = 5
		self.framerate_den = 1
		self.image_source = None
		self.last_timestamp = None

		self.roslink = roslink

		# if status topic exists
		#   we know it is being run by theora_webcams
		#   we will get the status from the topic instead of calculating
		self.theora_webcam = False
		topics, types = zip(*self.topic_node.get_topic_names_and_types())
		if self.status_topic in topics:
			self.theora_webcam = True
			self.status_node = Node(f"{self.status_topic}_node")
			self.status_sub = self.status_node.create_subscription(self.status_topic, Status, self.status_callback)
			self.roslink.add_subscriber(self.status_node)

		# if get_exposure_bounds and set_exposure exist, we may be able to set the exposure manually
		# self.could_support_manual_exposure = False
		self.supports_manual_exposure = True
		# get_exposure_bounds_service_exists = False
		# set_exposure_service_exists = False
		# for service in ros2service.api.get_service_names(node=self.topic_node):
		# 	if self.get_exposure_bounds_service == service:
		# 		get_exposure_bounds_service_exists = True
		# 	if self.set_exposure_service == service:
		# 		set_exposure_service_exists = True
		# 	if get_exposure_bounds_service_exists and set_exposure_service_exists:
		# 		self.could_support_manual_exposure = True
		# 		break
		# if self.could_support_manual_exposure:
			# self.get_exposure_bounds_srv = node.Service(self.get_exposure_bounds_service, GetExposureBounds)
		node_name_re = r"(camera_node_*[1-9]*)"
		self.serv_topic = ""
		topics = self.roslink.ROSnode.get_node_names()
		
		for topic in topics:
			if match := re.match(node_name_re, topic):
				name = match.group(1)
				self.serv_topic = "/" + name + "/set_parameters"
				self.set_parameters_srv= self.roslink.make_service(self.serv_topic, SetParameters, "parameters_client")
		self.supports_manual_exposure, self.exposure_bounds = self.get_exposure_bounds()

		
		# self.roslink.get_logger().info(self.serv_topic)

	### callbacks ############################################################

	def status_callback(self, status: Status):
		self.height = status.height
		self.width = status.width
		self.framerate_num = status.framerate_numerator
		self.framerate_den = status.framerate_denominator
		self.exposure_signal.emit(self.cam_name, status.exposure)

	def image_callback(self, image: Image):
		current_timestamp = image.header.stamp.sec

		# calculate framerate for cameras that don't provide it
		if not self.theora_webcam:
			self.height = image.height
			self.width = image.width
		
			if self.last_timestamp:
				duration = current_timestamp - self.last_timestamp
				secs = duration.to_sec()
				freq = 1 / secs
				self.framerate_num = round(freq)
				self.framerate_den = 1

		self.last_timestamp = current_timestamp
		self.image_signal.emit(self.cam_name, image)

	### republisher ##########################################################

	# first gui will republish video feeds, so other guis don't have to subscribe
	# to robot video

	# TODO Figure out if this is still needed
	# def start_republisher(self):
		
	# 	if not self.republisher_process:
	# 		try:
	# 			# check if anyone else is republishing already
	# 			node_list = self.topic_node.get_node_names()
	# 			# rclpy.wait_for_message(f'{self.republished_topic}/theora', Packet, 2/5)  # allow time for 2 frames at 5 Hz
	# 			if not(f'{self.republished_topic}/theora' in node_list):
	# 				raise Exception

	# 			self.image_source = 'Republisher'
	# 		except Exception:
				
	# 			self.republisher_process = subprocess.Popen(self.republisher_cmd.split(' '), preexec_fn=lambda: prctl.set_pdeathsig(signal.SIGKILL))
	# 			self.image_source = 'Original Publisher'

	# def stop_republisher(self):
	# 	if self.republisher_process:
	# 		self.republisher_process.kill()
	# 		self.republisher_process = None
	# 	self.image_source = None

	### theora ###############################################################

	# decompress republished video

	# TODO Figure out if this is still needed if the republishers / compressed images aren't used
	# def start_theora(self):
	# 	if not self.decompression_process:
	# 		compressed_topic = self.republished_topic if self.image_source == 'Original Publisher' else self.raw_topic
	# 		decompression_cmd = self.decompression_cmd.format(compressed_topic=compressed_topic, decompressed_topic=self.decompressed_topic)
	# 		self.decompression_process = subprocess.Popen(decompression_cmd.split(' '), preexec_fn=lambda: prctl.set_pdeathsig(signal.SIGKILL))

	# def stop_theora(self):
	# 	if self.decompression_process:
	# 		self.decompression_process.kill()
	# 		self.decompression_process = None

	### decompressed #########################################################

	# display decompressed video

	def start_decompressed_sub(self):
		self.image_source = 'Original Publisher'
		# if not self.decompressed_sub:
		node_name = self.raw_topic + "_sub"
		node_names = self.topic_node.get_node_names()
		if node_name in node_names:
			return
		node_name = node_name.replace("/", "_")
		self.decomp_node = NewSubscriber(node_name, self.raw_topic, Image, self.image_callback)
		self.roslink.add_subscriber(self.decomp_node)

	

	def stop_decompressed_sub(self):
		if self.decompressed_sub:
			self.decompressed_sub.destroy()
			del self.decompressed_sub
			self.decompressed_sub = None

	### controls #############################################################

	def start(self):
		self.subscribed = True
		# self.start_republisher()		# raw -> republished
		# self.start_theora()				# republished -> decompressed

		# Currently just a raw subscriber
		self.start_decompressed_sub()	# decompressed -> gui

	def stop(self):
		self.subscribed = False
		self.stop_decompressed_sub()	# stop displaying in gui
		# self.stop_theora()				# stop decompressing
		# self.stop_republisher()			# stop republishing

		if not self.theora_webcam:
			self.height = '?'
			self.width = '?'
			self.framerate_num = '?'
			self.framerate_den = 1

	# TODO Figure out how these would work with node parameters?
	def restart(self):
		return
		# if self.width and self.height and self.framerate_num and self.framerate_den:
		# 	try:
		# 		self.change_video_handler(self.width, self.height, self.framerate_num, self.framerate_den, True, True)
		# 	except rclpy.service.ServiceException:
		# 		QMessageBox(
		# 			QMessageBox.Critical,
		# 			"Failed to restart camera",
		# 			f"Could not restart camera at {self.width}x{self.height} @ {self.framerate_num}/{self.framerate_den} fps",
		# 			QMessageBox.Ok,
		# 		).exec()

	def get_exposure_bounds(self) -> Tuple[bool, Tuple[float]]:
		return False, (-1, -1)
		# if self.could_support_manual_exposure:
		# 	response: GetExposureBounds.Response = self.get_exposure_bounds_srv(GetExposureBounds.Request())
		# 	return response.supports_manual_exposure, response.exposure_bounds
		# return False, (-1, -1)

	def set_exposure(self, exposure: float):
		parameter = Parameter()
		parameter.name = "contrast"
		parameter.value.type = 3 # bool = 1, int = 2, float = 3, string = 4
		parameter.value.double_value = exposure

		parameter_list = [parameter]

		# if self.supports_manual_exposure:
		response: SetParameters.Response = self.set_parameters_srv.send_request(parameters = parameter_list)
		return response.results[0].successful
	
	def set_resolution(self, height, width):		
		parameter = Parameter()
		parameter.name = "img_height"
		parameter.value.type = 2 # bool = 1, int = 2, float = 3, string = 4
		parameter.value.integer_value = height

		parameter2 = Parameter()
		parameter2.name = "img_width"
		parameter2.value.type = 2 # bool = 1, int = 2, float = 3, string = 4
		parameter2.value.integer_value = width
		

		parameter_list = [parameter, parameter2]

		# if self.supports_manual_exposure:
		response: SetParameters.Response = self.set_parameters_srv.send_request(parameters = parameter_list)
		return response.results[0].successful


class CameraFunnel(QObject):
	camera_list = Signal(dict)
	funnel_exposure_signal = Signal(str, float)

	def __init__(self, images_signal: Signal(str, Image), roslink):
		super().__init__()

		self.funnel_images_signal = images_signal
		self.funnel_images_signal.connect(self.handle_incoming_images)
		self.funnel_exposure_signal.connect(self.handle_incoming_exposures)
		self.image_slots: Dict[str, List[Callable]] = {}
		self.exposure_slots: Dict[str, List[Callable]] = {}
		self.subscribers: Dict[str, CameraSubscriber] = {}
		self.flip: Dict[str, bool] = {}

		self.flip_transform = QTransform()
		self.flip_transform.rotate(180)

		self.empty_image = QPixmap(1, 1)
		self.empty_image.fill()

		self.logger = Node(f"camera_logger").get_logger()

		self.roslink = roslink

	def set_cameras(self, camera_names: List[str], aliases: List[str], change_video_handlers: List[Node]):
		for camera_name, change_video_handler in zip(camera_names, change_video_handlers):
			if camera_name in self.image_slots:
				continue

			self.image_slots[camera_name] = []
			self.exposure_slots[camera_name] = []
			self.flip[camera_name] = False
			self.subscribers[camera_name] = CameraSubscriber(camera_name, change_video_handler, self.funnel_exposure_signal, self.funnel_images_signal, self.roslink)

		self.camera_list.emit(dict(zip(aliases, camera_names)))

	def subscribe(self, image_slot: Callable, exposure_slot: Callable, camera_name: str) -> Tuple[bool, bool, Tuple[float]]:
		"""
		Subscribes you to a camera feed, you must unsubscribe from previous feeds
		Returns: from a theora webcam, exposure bounds
		"""
		if camera_name in self.image_slots:
			self.image_slots[camera_name].append(image_slot)
		if camera_name in self.exposure_slots:
			self.exposure_slots[camera_name].append(exposure_slot)
		if camera_name in self.subscribers:
			subscriber = self.subscribers[camera_name]
			subscriber.start()
			
			return subscriber.theora_webcam, subscriber.supports_manual_exposure, subscriber.exposure_bounds
		return False, False, (-1, -1)

	def unsubscribe(self, image_slot: Callable, exposure_slot: Callable, camera_name: str):
		"""Unsubscribes you from a camera feed"""
		if camera_name in self.image_slots and image_slot in self.image_slots[camera_name]:
			self.image_slots[camera_name].remove(image_slot)
		if camera_name in self.exposure_slots and exposure_slot in self.exposure_slots[camera_name]:
			self.exposure_slots[camera_name].remove(exposure_slot)
		if camera_name in self.subscribers and camera_name in self.image_slots and not self.image_slots[camera_name]:
			self.subscribers[camera_name].stop()
		image_slot(self.empty_image)  # clear image

	def restart(self, camera_name: str):
		"""Restarts your camera feed"""
		if self.image_slots[camera_name] and camera_name in self.subscribers:
			self.subscribers[camera_name].restart()

	def set_exposure(self, exposure: float, camera_name: str):
		"""
		Sets the exposure of your camera feed. Note that this sets the camera to
		manual exposure, and it must be restarted to resume auto exposure.
		"""
		if self.image_slots[camera_name] and camera_name in self.subscribers:
			return self.subscribers[camera_name].set_exposure(exposure)

	def set_resolution(self, camera_name: str, height, width):
		if self.image_slots[camera_name] and camera_name in self.subscribers:
			return self.subscribers[camera_name].set_resolution(height, width)


	def handle_incoming_images(self, camera_name: str, raw_image: Image):
		# If no one is subscribed to this camera, don't do anything
		if not self.image_slots[camera_name]:
			return
		format = None
		if raw_image.encoding == "mono8":
			format = QImage.Format_Grayscale8
		elif raw_image.encoding == "bgr8" or raw_image.encoding == "rgb8":
			format = QImage.Format_RGB888
		else:
			self.logger.error(f"Failed to decode image, encoding {raw_image.encoding} is not recognized")
			return

		image = QImage(raw_image.data, raw_image.width, raw_image.height, format)
		if raw_image.encoding == "bgr8":
			image = image.rgbSwapped()
		if image.isNull():
			self.logger.error("Failed to decode image")
			return

		if self.flip[camera_name]:
			image = image.transformed(self.flip_transform)

		pixmap = QPixmap.fromImage(image)
		
		for func in self.image_slots[camera_name]:
			func(pixmap)



	def handle_incoming_exposures(self, camera_name: str, exposure: float):
		# If no one is subscribed to this camera, don't do anything
		if not self.image_slots[camera_name]:
			return

		for func in self.exposure_slots[camera_name]:
			func(exposure)

