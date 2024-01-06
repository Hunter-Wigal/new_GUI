import rclpy
from rclpy.node import Service, Node


class AddMarkerServiceClient(Node):       
    def __init__(self, name, topic, type):
        super().__init__(name)
        
        self.cli = self.create_client(type, topic)
        self.req = type.Request()
        
            
    def send_request(self, lat, lon, alt, error, marker_type, aruco_id, aruco_id_2):
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available')

        self.req.lat = lat
        self.req.lon = lon
        self.req.alt = alt
        self.req.waypoint_error = error
        self.req.marker_type = marker_type
        self.req.aruco_id = aruco_id
        self.req.aruco_id_2 = aruco_id_2

        self.future = self.cli.call_async(self.req)

        
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
class ClearMarkerServiceClient(Node):       
    def __init__(self, name, topic, type):
        super().__init__(name)
        
        self.cli = self.create_client(type, topic)
        self.req = type.Request()
        
            
    def send_request(self):
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available')


        self.future = self.cli.call_async(self.req)

        
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
class ReorderMarkerServiceClient(Node):       
    def __init__(self, name, topic, type):
        super().__init__(name)
        self.cli = self.create_client(type, topic)
        self.req = type.Request()
        
            
    def send_request(self, marker_id, new_following_marker_id):

        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available')

        self.req.marker_id = marker_id
        self.req.new_following_marker_id = new_following_marker_id
        self.future = self.cli.call_async(self.req)

        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    

class ReorderMarkersServiceClient(Node):       
    def __init__(self, name, topic, type):
        super().__init__(name)
        self.cli = self.create_client(type, topic)
        self.req = type.Request()
        
            
    def send_request(self, marker_ids):

        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available')

        self.req.marker_id = marker_ids
        self.future = self.cli.call_async(self.req)

        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
class EditMarkerServiceClient(Node):       
    def __init__(self, name, topic, type):
        super().__init__(name)
        
        self.cli = self.create_client(type, topic)
        self.req = type.Request()
        
            
    def send_request(self, lat, lon, alt, error, marker_type, aruco_id, aruco_id_2, marker_id):
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available')

        self.req.lat = lat
        self.req.lon = lon
        self.req.alt = alt
        self.req.waypoint_error = error
        self.req.marker_type = marker_type
        self.req.aruco_id = aruco_id
        self.req.aruco_id_2 = aruco_id_2
        self.req.marker_id = marker_id

        self.future = self.cli.call_async(self.req)

        
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
class RemoveMarkerServiceClient(Node):       
    def __init__(self, name, topic, type):
        super().__init__(name)
        self.cli = self.create_client(type, topic)
        self.req = type.Request()
        
            
    def send_request(self, marker_id):

        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available')

        self.req.marker_id = marker_id
        self.future = self.cli.call_async(self.req)

        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    

class InsertMarkerServiceClient(Node):       
    def __init__(self, name, topic, type):
        super().__init__(name)
        
        self.cli = self.create_client(type, topic)
        self.req = type.Request()
        
            
    def send_request(self, lat, lon, alt, error, marker_type, aruco_id, aruco_id_2, new_following_marker_id):
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available')

        self.req.lat = lat
        self.req.lon = lon
        self.req.alt = alt
        self.req.waypoint_error = error
        self.req.marker_type = marker_type
        self.req.aruco_id = aruco_id
        self.req.aruco_id_2 = aruco_id_2
        self.req.new_following_marker_id = new_following_marker_id

        self.future = self.cli.call_async(self.req)

        
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()