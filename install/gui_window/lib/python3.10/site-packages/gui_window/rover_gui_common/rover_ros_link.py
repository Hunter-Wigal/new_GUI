#!/usr/bin/env python3.8

from gui_window.urc_gui_common import RosLink

from PyQt5.QtCore import pyqtSignal as Signal

import rclpy
from rclpy.node import Node, Service, get_logger

from std_srvs.srv import SetBool

from rover_gui_lib.msg import EDWaypointList

class RoverRosLink(RosLink):
	"""Supply signals for the Qt app, originating from topic callbacks."""

	ed_waypoint_list = Signal(EDWaypointList)

	def __init__(self):
		super().__init__()

		### ed ###############################################################

		# ed_waypoint_list_topic = Node.get_parameter("~ed_waypoint_list_topic")
		# self.ed_waypoint_list_sub = self.make_subscriber(ed_waypoint_list_topic, EDWaypointList, self.ed_waypoint_list)
		# self.ed_waypoint_list_pub = Node.create_publisher(ed_waypoint_list_topic, EDWaypointList, queue_size=1)

		### drivetrain #######################################################

		# drive_forward_service = Node.get_parameter("~drive_forward_service")
		# car_style_turning_service = Node.get_parameter("~car_style_turning_service")

		# self.drive_forward_serv = Service(drive_forward_service, SetBool)
		# self.car_style_turning_serv = Service(car_style_turning_service, SetBool)

	### ed ###################################################################

	# def publish_ed_waypoints(self, ed_waypoint_list: EDWaypointList):
	# 	self.ed_waypoint_list_pub.publish(ed_waypoint_list)

	# ### drivetrain ###########################################################

	# def change_drive_direction(self, forward: bool) -> SetBool.Response:
	# 	return self.drive_forward_serv(SetBool.Request(data=forward))

	# def change_car_turning_style(self, car: bool) -> SetBool.Response:
	# 	return self.car_style_turning_serv(SetBool.Request(data=car))
	
if __name__ == "__main__":
	logger = get_logger()
	logger.info("Starting GUI Rover ROS link")
	roslink = RoverRosLink()
	rclpy.spin()
