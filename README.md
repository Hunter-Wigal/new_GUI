# Heimdall GUI
Code from wanderer_gui partially translated to ROS2


Requires pip packages such as:
    pyqt5,
    qtpy,
    prctl,
    pyqtlet2 (version 0.8.0),
    pyqtgraph,
    pymap3d,
    possibly others


Run "colcon build" to build all required packages

Source the setup file with "source install/setup.bash"

Run "ros2 launch new_gui gui_bringup.launch.py" to launch the GUI

## To Launch from a shortcut
With the GUI folder in the home directory, add the gui_launcher.desktop file into the Desktop directory

Right click and press " Allow Launching" if necessary

Double click to run
