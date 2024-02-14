from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    ld = LaunchDescription()

    config = os.path.join(
        get_package_share_directory('new_gui'),
        'config',
        'params.yaml'
    )

    
    gui = Node(
            package='new_gui',
            executable='gui',
            # Creates an issue where it names every subsequent node the same name
            # name='roslink_node',
            parameters = [config],
    )

    add_Service = Node(
            package='marker_manager',
            executable='markermnger',
            # Creates an issue where it names every subsequent node the same name
            # name='roslink_node',
    )
    
    ld.add_action(gui)
    ld.add_action(add_Service)
    return ld