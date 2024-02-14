FROM ros:humble-ros-core
RUN apt update
RUN apt upgrade -y

COPY src ./newGUI/src
COPY launch.bash ./newGUI

COPY install_humble.sh /newGUI
RUN chmod a+rwx newGUI/install_humble.sh

RUN apt install sudo

RUN sudo /newGUI/install_humble.sh

WORKDIR /newGUI

RUN rosdep install --from-paths src --ignore-src -r -y

RUN pip install pyqtlet2==0.8.0 urllib3 pymap3d pyqtgraph
RUN apt install python3-prctl

RUN useradd -m hunter && echo "hunter:hunter" | chpasswd && adduser hunter sudo

RUN chown hunter /newGUI/

USER hunter

CMD ["colcon", "build"]