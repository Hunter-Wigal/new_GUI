#!/usr/bin/env python3.8

from typing import List

import rclpy
from rclpy.node import Service, Node
from rcl_interfaces.msg import Log
from std_srvs.srv import Trigger
from std_msgs.msg import String
from geometry_msgs.msg import Pose
from geographic_msgs.msg import GeoPoint
from sensor_msgs.msg import Image

from aruco_finder.msg import FoundMarkerList

from marker_interfacing.srv import AddMarker, ClearMarkers, ReorderMarker,\
	ReorderMarkers, EditMarker, RemoveMarker, InsertMarker

from marker_interfacing.msg import GeodeticMarkerList

from PyQt5.QtCore import QObject, pyqtSignal as Signal

from gui_window.urc_gui_common.camera_link import CameraFunnel
from gui_window.urc_gui_common.widgets import MapPoint

class RosLink(QObject):
	"""Supply signals for the Qt app, originating from topic callbacks."""

	pose = Signal(Pose)
	gps = Signal(GeoPoint)
	marker_list = Signal(GeodeticMarkerList)
	state = Signal(String)
	planner_status = Signal(String)
	found_marker_list = Signal(FoundMarkerList)
	current_goal = Signal(MapPoint)
	rosout = Signal(Log)

	# this is where all cameras will send their images and then it gets sent back out appropriately
	camera_funnel_signal = Signal(str, Image)

	def __init__(self):
		"""Initialize the node and all subscriptions."""
		super().__init__()
	# 	rclpy.init()
	# 	self.node = Node("gui_ros_link")
	# 	self.node._allow_undeclared_parameters = True
	# 	# read ros related launch params
	# 	local_position_topic = self.node.get_parameter("local_position_topic")
	# 	global_position_topic = self.node.get_parameter("~global_position_topic")
	# 	global_origin_topic = self.node.get_parameter("~global_origin_topic")
	# 	marker_list_topic = self.node.get_parameter("~marker_list_topic")
	# 	state_topic = self.node.get_parameter("~state_topic")
	# 	planner_status_topic = self.node.get_parameter("~planner_status_topic")
	# 	found_marker_list_topic = self.node.get_parameter("~found_marker_list_topic")
	# 	add_marker_service = self.node.get_parameter("~add_marker_service")
	# 	clear_markers_service = self.node.get_parameter("~clear_markers_service")
	# 	reorder_marker_service = self.node.get_parameter("~reorder_marker_service")
	# 	reorder_markers_service = self.node.get_parameter("~reorder_markers_service")
	# 	edit_marker_service = self.node.get_parameter("~edit_marker_service")
	# 	remove_marker_service = self.node.get_parameter("~remove_marker_service")
	# 	insert_marker_service = self.node.get_parameter("~insert_marker_service")
	# 	clear_found_markers_service = self.node.get_parameter("~clear_found_markers_service")

	# 	# create publishers and subscribers
	# 	self.pose_sub = self.make_subscriber(local_position_topic, Pose, self.pose)
	# 	self.gps_sub = self.make_subscriber(global_position_topic, GeoPoint, self.gps)
	# 	self.global_origin_sub = self.make_subscriber(global_origin_topic, GeoPoint, self.global_origin_callback)
	# 	self.marker_list_sub = self.make_subscriber(marker_list_topic, GeodeticMarkerList, self.marker_list)
	# 	self.state_sub = self.make_subscriber(state_topic, String, self.state)
	# 	self.planner_status_sub = self.make_subscriber(planner_status_topic, String, self.planner_status)
	# 	self.found_marker_sub = self.make_subscriber(found_marker_list_topic, FoundMarkerList, self.found_marker_list)
	# 	self.add_marker_srv = Service(add_marker_service, AddMarker)
	# 	self.clear_markers_srv = Service(clear_markers_service, ClearMarkers)
	# 	self.reorder_marker_srv = Service(reorder_marker_service, ReorderMarker)
	# 	self.reorder_markers_srv = Service(reorder_markers_service, ReorderMarkers)
	# 	self.edit_marker_srv = Service(edit_marker_service, EditMarker)
	# 	self.remove_marker_srv = Service(remove_marker_service, RemoveMarker)
	# 	self.insert_marker_srv = Service(insert_marker_service, InsertMarker)
	# 	self.clear_found_markers_srv = Service(clear_found_markers_service, Trigger)

	# 	# camera funnel
	# 	self.camera_funnel = CameraFunnel(self.camera_funnel_signal)

	# 	# rosout log messages
	# 	self.rosout_sub = self.make_subscriber("rosout_agg", Log, self.rosout)

	# 	# global origin
	# 	self.global_origin = GeoPoint()

	# def add_marker(self, lat: float, lon: float, alt: float, error: float, marker_type: str, aruco_id: int, aruco_id_2: int) -> AddMarker.Response:
	# 	return self.add_marker_srv(AddMarker.Request(lat, lon, alt, error, marker_type, aruco_id, aruco_id_2))

	# def reorder_marker(self, marker_id: int, new_following_marker_id: int) -> ReorderMarker.Response:
	# 	return self.reorder_marker_srv(ReorderMarker.Request(marker_id, new_following_marker_id))
	
	# def reorder_markers(self, marker_ids: List[int]) -> ReorderMarkers.Response:
	# 	return self.reorder_markers_srv(ReorderMarkers.Request(marker_ids))

	# def edit_marker(self, lat: float, lon: float, alt: float, error: float, marker_type: str, aruco_id: int, aruco_id_2: int, marker_id: int) -> EditMarker.Response:
	# 	return self.edit_marker_srv(EditMarker.Request(lat, lon, alt, error, marker_type, aruco_id, aruco_id_2, marker_id))

	# def remove_marker(self, marker_id) -> RemoveMarker.Response:
	# 	return self.remove_marker_srv(RemoveMarker.Request(marker_id))
	
	# def insert_marker(self, lat: float, lon: float, alt: float, error: float, marker_type: str, aruco_id: int, aruco_id_2: int, new_following_marker_id: int) -> InsertMarker.Response:
	# 	return self.insert_marker_srv(InsertMarker.Request(lat, lon, alt, error, marker_type, aruco_id, aruco_id_2, new_following_marker_id))

	# def clear_markers(self) -> ClearMarkers.Response:
	# 	return self.clear_markers_srv(ClearMarkers.Request())

	# def clear_found_markers(self) -> Trigger.Response:
	# 	return self.clear_found_markers_srv(Trigger.Request())

	# def make_subscriber(self, topic_name: str, topic_type: type, signal: Signal):
	# 	return Node.create_subscription(
	# 		topic_name,
	# 		topic_type,
	# 		lambda data: signal.emit(data),
	# 	)
	
	# def global_origin_callback(self, global_origin: GeoPoint):
	# 	self.global_origin = global_origin

if __name__ == "__main__":
	rclpy.loginfo("Starting GUI ROS link")
	roslink = RosLink()
	rclpy.spin()
