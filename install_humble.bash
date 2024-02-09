#!/bin/bash

# This script installs ROS Humble and some WVU URC stuff that is not handled by rosdep.
# It assumes you are running Ubuntu 22.04.
# The script is based on the ROS Humble isntall guide for Ubuntu:
# https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html

# ROS2 Humble Install

# 1.0 Set locale
apt update && apt install locales
locale-gen en_US en_US.UTF-8
update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8 -y
export LANG=en_US.UTF-8

# 1.1 Configure Ubuntu repositories
apt install software-properties-common -y
add-apt-repository -y universe

# 1.2 Set up your keys
apt update && apt install curl -y
curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

# 1.3 Set up your sources.list
# echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null

# 1.4 Installation
# apt update && apt upgrade -y
# apt install ros-humble-core -y

# 1.5 Environment Setup
# echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc
# source ~/.bashrc

# 1.6 Setup for colcon
apt install python3-colcon-common-extensions -y
echo "source /usr/share/colcon_cd/function/colcon_cd.sh" >> ~/.bashrc
echo "export _colcon_cd_root=/opt/ros/humble/" >> ~/.bashrc
echo "source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash" >> ~/.bashrc

# 1.7 Setup for rosdep
apt-get install python3-rosdep -y
rosdep init
rosdep update

# 2 WVU URC specific stuff

# 2.1 apt packages and library installs 
apt install python3-pip python3-vcstool vim cmake -y
apt-get install ros-humble-camera-info-manager -y
pip install python-can 
apt install can-utils -y
apt-get install ros-humble-mavros -y
ros2 run mavros instal_geographiclib_datasets.sh


echo "#######################################
#######################################
#######################################
ROS HUMBLE INSTALL COMPLETE
VIEW README.md FOR ADDITIONAL SETUP STEPS
#######################################
#######################################
#######################################"
