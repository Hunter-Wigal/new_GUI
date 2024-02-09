FROM ros:humble-ros-core
RUN apt update
RUN apt upgrade -y

COPY install_humble.bash .
RUN chmod a+rwx ./install_humble.bash
RUN ./install_humble.bash

COPY src ./newGUI/src
COPY launch.sh ./newGUI

WORKDIR /newGUI

RUN rosdep install --from-paths src --ignore-src -r -y 
# RUN colcon build

RUN pip install pyqtlet2==0.8.0 urllib3 pymap3d pyqtgraph
RUN apt install python3-prctl



