#!/usr/bin/env python3
from .urc_gui_common import AppRunner, Window, CameraTab, ToolsTab , SixCameraTab, \
FourCameraTab, SettingsTab, ToolsTab, VLine
from new_gui.rover_gui_common import RoverMapTab

from new_gui.current_display_widget import CurrentDisplayWidget
from new_gui.science import ScienceTab
from new_gui.wanderer_controls import WandererControlsTab
from new_gui.wanderer_ros_link import WandererRosLink

from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

# Runs the Ros link nodes
class RunLink(QObject):		
	def setup(self, roslink: WandererRosLink):
		self.__init__()
		self.roslink = roslink
		# self.timer = QTimer()
		# self.timer.moveToThread(self)
		# self.timer.timeout.connect(lambda: self.roslink.timer_callback())
		
	def run(self):
		# self.timer.start(20) # Tick every 500 ms
		while True:
			self.roslink.timer_callback()


class RoverWindow(Window):
	def __init__(self, *args, **kwargs):
		super().__init__('WVU URC Wanderer GUI', *args, **kwargs)

		roslink = WandererRosLink()


		# Run roslink node in new thread to not stop GUI execution
		self.workerthread = QThread()
		self.link = RunLink()
		self.link.setup(roslink)
		self.link.moveToThread(self.workerthread)

		self.workerthread.started.connect(self.link.run)


		single_camera_tab = CameraTab(roslink)
		six_camera_tab = SixCameraTab(roslink)
		four_camera_tab_1 = FourCameraTab(roslink)
		four_camera_tab_2 = FourCameraTab(roslink)
		science_tab = ScienceTab(roslink)

		super_camera_widgets = [
			single_camera_tab.camera_widget,
			six_camera_tab.main_cam,
			six_camera_tab.right_top_cam,
			six_camera_tab.right_mid_cam,
			six_camera_tab.bot_left_cam,
			six_camera_tab.bot_mid_cam,
			six_camera_tab.bot_right_cam,
			four_camera_tab_1.top_left_cam,
			four_camera_tab_1.top_right_cam,
			four_camera_tab_1.bot_left_cam,
			four_camera_tab_1.bot_right_cam,
			four_camera_tab_2.top_left_cam,
			four_camera_tab_2.top_right_cam,
			four_camera_tab_2.bot_left_cam,
			four_camera_tab_2.bot_right_cam,
			science_tab.ui.camera1,
			science_tab.ui.camera2,
			science_tab.ui.camera3,
		]

		settings_tab = SettingsTab(roslink, super_camera_widgets)
		tools_tab = ToolsTab(roslink)

		self.tabs.addTab(single_camera_tab,				'Camera')
		self.tabs.addTab(six_camera_tab,				'Six Camera')
		self.tabs.addTab(four_camera_tab_1,				'Four Camera 1')
		self.tabs.addTab(four_camera_tab_2,				'Four Camera 2')
		self.tabs.addTab(RoverMapTab(roslink),			'Map')
		self.tabs.addTab(science_tab,					'Science')
		self.tabs.addTab(WandererControlsTab(roslink),	'Controls')
		self.tabs.addTab(tools_tab,						'Tools')
		self.tabs.addTab(settings_tab,					'Settings')

		self.current_display = CurrentDisplayWidget(roslink)
		self.current_display_minimum_width = self.current_display.minimumSizeHint().width()

		self.splitter: QSplitter
		self.splitter.addWidget(self.current_display)
		self.splitter.setStretchFactor(0, 1)
		self.splitter.setOpaqueResize(False)
		self.splitter.setSizes((0, self.current_display_minimum_width))
		self.splitter.splitterMoved.connect(self.resize_splitter)

		self.status_bar.connect_roslink(roslink)
		self.status_bar.connect_timer(tools_tab.timer)

		# Start roslink
		self.workerthread.start()

		self.pid_planner_status_label = QLabel("PID Planner Status:")
		self.pid_planner_status_display_label = QLabel("-")
		self.status_bar.layout.addWidget(self.pid_planner_status_label, 1, alignment=Qt.AlignLeft)
		self.status_bar.layout.addWidget(self.pid_planner_status_display_label, 3, alignment=Qt.AlignLeft)
		self.status_bar.layout.addWidget(VLine(), 1)
		roslink.pid_planner_status.connect(lambda status: self.pid_planner_status_display_label.setText(status.data))

		self.dwa_planner_status_label = QLabel("DWA Planner Status:")
		self.dwa_planner_status_display_label = QLabel("-")
		self.status_bar.layout.addWidget(self.dwa_planner_status_label, 1, alignment=Qt.AlignLeft)
		self.status_bar.layout.addWidget(self.dwa_planner_status_display_label, 3, alignment=Qt.AlignLeft)
		self.status_bar.layout.addWidget(VLine(), 1)
		roslink.dwa_planner_status.connect(lambda status: self.dwa_planner_status_display_label.setText(status.data))

		


	def resize_splitter(self):
		tabs_width, current_display_width = self.splitter.sizes()
		total_width = tabs_width + current_display_width
		if current_display_width > self.current_display_minimum_width:
			self.splitter.setSizes((total_width - self.current_display_minimum_width, self.current_display_minimum_width))

def main():
	rclpy.init()
	# node = Node("Main_Window")
	app = AppRunner(RoverWindow)

	# node.declare_parameter("local_position_topic", rclpy.Parameter.Type.STRING)
	# local_position_topic = node.get_parameter("local_position_topic").value
	# print(local_position_topic)
	app.start()

if __name__ == '__main__':
	main()
