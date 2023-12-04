import rclpy
from rclpy.node import Node
from marker_interfacing.srv import AddMarker
from marker_interfacing.msg import GeodeticMarker, GeodeticMarkerList
from geographic_msgs.msg import GeoPoint
from threading import Lock

class Publisher(Node):
	def __init__(self, name, topic, type):
		super().__init__(name)
		self.publisher = self.create_publisher(type, topic, 1)

	def publish(self, data):
		self.publisher.publish(data)

class MarkerManager(Node):
	def __init__(self, name, topic, type):
		super().__init__(name)
		self.global_origin = None
		self.global_origin_lock = Lock()

		self.marker_list = GeodeticMarkerList()
		self.marker_list_lock = Lock()

		self.next_marker_id = 0
		self.next_marker_id_lock = Lock()

		self.marker_list_pub = Publisher("maker_list_publisher", "marker_list", GeodeticMarkerList)

		self.srv = self.create_service(type, topic, self.add_marker_callback)



	def make_marker(self, lat, lon, h, error, marker_type, aruco_id, aruco_id_2) -> GeodeticMarker:

		# get/update next marker id
		with self.next_marker_id_lock:
			next_marker_id = self.next_marker_id
			self.next_marker_id += 1

		gps = GeoPoint()
		gps.latitude = lat
		gps.longitude = lon
		gps.altitude = h

		marker = GeodeticMarker()
		marker.gps = gps
		marker.waypoint_error = error
		marker.marker_type = marker_type
		marker.aruco_id = aruco_id
		marker.aruco_id_2 = aruco_id_2
		marker.marker_id = next_marker_id

		return marker

	def add_marker(self, marker: GeodeticMarker):

		# update marker list
		with self.marker_list_lock:
			self.marker_list.markers.append(marker)
			self.marker_list.count += 1

			# publish updated marker list
			self.marker_list_pub.publish(self.marker_list)


	def add_marker_callback(self, request, response) -> AddMarker.Response:
		response.success = True
		self.add_marker(
			self.make_marker(
				request.lat,
				request.lon,
				request.alt,
				request.waypoint_error,
				request.marker_type,
				request.aruco_id,
				request.aruco_id_2,
			)
		)
		self.get_logger().info("Added marker")
		return response
	
def main():
	rclpy.init()
	
	node = MarkerManager("add_marker_srv","add_marker", AddMarker)
	rclpy.spin(node)
	
	rclpy.shutdown()