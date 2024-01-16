#!/bin/bash

cd ~

source /opt/ros/humble/setup.bash

cd new_GUI
source install/setup.bash

ros2 launch new_gui gui_bringup.launch.py 
