#!/usr/bin/env python3

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

from new_gui.urc_gui_common.camera_link import CameraFunnel
from new_gui.urc_gui_common.widgets import MapPoint

from .service_clients import *

from std_msgs.msg import String
class NewSubscriber(Node):
    def __init__(self, name, topic, type, callback):
        super().__init__(name)

        self.subscription = self.create_subscription(
            type,
            topic,
            callback,
            20)
        self.subscription  # prevent unused variable warning

class NewService(Node):
	def __init__(self, name, topic, type):
		super().__init__(name)
		self.cli = self.create_client(type, topic)
		self.req = type.Request()

	def send_request(self):
		self.future = self.cli.call_async(self.req)
		rclpy.spin_until_future_complete(self, self.future)
		return self.future.result()

class RosNode(Node):
    def __init__(self, name):
        super().__init__(name)
        self.subscribers = []
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        for subscriber in self.subscribers:
            rclpy.spin_once(subscriber, 0.5)

class RosLink(QObject):
    pose = Signal(Pose)
    gps = Signal(GeoPoint)
    marker_list = Signal(GeodeticMarkerList)
    state = Signal(String)
    planner_status = Signal(String)
    found_marker_list = Signal(FoundMarkerList)
    current_goal = Signal(MapPoint)
    rosout = Signal(Log)
    

    camera_funnel_signal = Signal(str, Image)

    def __init__(self):
        super().__init__()
        self.ROSnode = RosNode("roslink_node")
        
        # List of subscribers for RosLink to iterate through
        self.subscribers:List[NewSubscriber] = []

        # Has to be declared or the rosnode won't recognize them
        self.ROSnode.declare_parameter("local_position_topic", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("global_position_topic", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("global_origin_topic", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("marker_list_topic", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("state_topic", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("planner_status_topic", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("select_planner_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("pid_planner_name", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("dwa_planner_name", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("pid_planner_enabled_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("dwa_planner_enabled_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("pid_planner_status_topic", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("dwa_planner_status_topic", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("found_marker_list_topic", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("add_marker_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("clear_markers_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("reorder_marker_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("reorder_markers_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("edit_marker_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("remove_marker_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("insert_marker_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("clear_found_markers_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("drive_forward_service", rclpy.Parameter.Type.STRING)
        self.ROSnode.declare_parameter("car_style_turning_service", rclpy.Parameter.Type.STRING)



        # Get topic names from passed parameters
        local_position_topic = self.ROSnode.get_parameter("local_position_topic").value
        global_position_topic = self.ROSnode.get_parameter("global_position_topic").value
        global_origin_topic = self.ROSnode.get_parameter("global_origin_topic").value
        marker_list_topic = self.ROSnode.get_parameter("marker_list_topic").value
        state_topic = self.ROSnode.get_parameter("state_topic").value
        planner_status_topic = self.ROSnode.get_parameter("planner_status_topic").value
        found_marker_list_topic = self.ROSnode.get_parameter("found_marker_list_topic").value

        self.global_position_topic = global_position_topic


        add_marker_service = self.ROSnode.get_parameter("add_marker_service").value
        clear_markers_service = self.ROSnode.get_parameter("clear_markers_service").value
        reorder_marker_service = self.ROSnode.get_parameter("reorder_marker_service").value
        reorder_markers_service = self.ROSnode.get_parameter("reorder_markers_service").value
        edit_marker_service = self.ROSnode.get_parameter("edit_marker_service").value
        remove_marker_service = self.ROSnode.get_parameter("remove_marker_service").value
        insert_marker_service = self.ROSnode.get_parameter("insert_marker_service").value
        clear_found_markers_service = self.ROSnode.get_parameter("clear_found_markers_service").value

    	# create services and subscribers
        self.pose_sub = self.make_subscriber(local_position_topic, Pose, self.pose)
        self.gps_sub = self.make_subscriber(global_position_topic, GeoPoint, self.gps)
        self.global_origin_sub = self.make_subscriber(global_origin_topic, GeoPoint, self.global_origin_callback)
        self.marker_list_sub = self.make_subscriber(marker_list_topic, GeodeticMarkerList, self.marker_list)
        self.state_sub = self.make_subscriber(state_topic, String, self.state)
        self.planner_status_sub = self.make_subscriber(planner_status_topic, String, self.planner_status)
        self.found_marker_sub = self.make_subscriber(found_marker_list_topic, FoundMarkerList, self.found_marker_list)
        
        self.add_marker_srv = AddMarkerServiceClient("add_marker_client", add_marker_service, AddMarker)
        self.clear_markers_srv = ClearMarkerServiceClient("clear_marker_client",clear_markers_service, ClearMarkers)
        self.reorder_marker_srv = ReorderMarkerServiceClient("reorder_marker_client",reorder_marker_service, ReorderMarker)
        self.reorder_markers_srv = ReorderMarkersServiceClient("reorder_markers_client",reorder_markers_service, ReorderMarkers)
        self.edit_marker_srv = EditMarkerServiceClient("edit_marker_client",edit_marker_service, EditMarker)
        self.remove_marker_srv = RemoveMarkerServiceClient("remove_marker_client",remove_marker_service, RemoveMarker)
        self.insert_marker_srv = InsertMarkerServiceClient("insert_marker_client",insert_marker_service, InsertMarker)
        self.clear_found_markers_srv = ClearMarkerServiceClient("clear_found_marker_client",clear_found_markers_service, Trigger)

        # camera funnel
        self.camera_funnel = CameraFunnel(self.camera_funnel_signal)

    def add_marker(self, lat: float, lon: float, alt: float, error: float, marker_type: str, aruco_id: int, aruco_id_2: int) -> AddMarker.Response:
        value = self.add_marker_srv.send_request(lat, lon, alt, error, marker_type, aruco_id, aruco_id_2)
        return value
        
    def reorder_marker(self, marker_id: int, new_following_marker_id: int) -> ReorderMarker.Response:
        return self.reorder_marker_srv.send_request(marker_id, new_following_marker_id).value
	    
    def reorder_markers(self, marker_ids: List[int]) -> ReorderMarkers.Response:
        return self.reorder_markers_srv.send_request(marker_ids).value

    def edit_marker(self, lat: float, lon: float, alt: float, error: float, marker_type: str, aruco_id: int, aruco_id_2: int, marker_id: int) -> EditMarker.Response:
        return self.edit_marker_srv.send_request(lat, lon, alt, error, marker_type, aruco_id, aruco_id_2, marker_id).value

    def remove_marker(self, marker_id) -> RemoveMarker.Response:
        return self.remove_marker_srv.send_request(marker_id).value

    def insert_marker(self, lat: float, lon: float, alt: float, error: float, marker_type: str, aruco_id: int, aruco_id_2: int, new_following_marker_id: int) -> InsertMarker.Response:
        return self.insert_marker_srv.send_request(lat, lon, alt, error, marker_type, aruco_id, aruco_id_2, new_following_marker_id).value
    
    def clear_markers(self) -> ClearMarkers.Response:
        return self.clear_markers_srv.send_request().value
    
    def clear_found_markers(self) -> Trigger.Response:
        return self.clear_found_markers_srv.send_request().value

    def global_origin_callback(self, global_origin: GeoPoint):
        self.global_origin = global_origin
        self.get_logger().info(self.global_origin)

    def get_logger(self):
        return self.ROSnode.get_logger()
    
    def make_subscriber(self, topic: String, type, callBack: Signal):
        name = topic + "_node"
        newSub = NewSubscriber(
            name,
            topic,
            type,
            lambda data: callBack.emit(data)
        )
        self.subscribers.append(newSub)

    def get_topics(self):
        return self.ROSnode.get_topic_names_and_types()
