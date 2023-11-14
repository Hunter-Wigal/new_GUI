from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    ld = LaunchDescription()

    config = os.path.join(
        get_package_share_directory('gui_window'),
        'config',
        'params.yaml'
    )

    
    node = Node(
            package='gui_window',
            # namespace='turtle1',
            executable='gui',
            name='gui',
            parameters = [config]
        )
    
    ld.add_action(node)
    return ld