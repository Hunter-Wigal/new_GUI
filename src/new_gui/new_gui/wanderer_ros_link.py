#!/usr/bin/env python3.8

from new_gui.rover_gui_common import RoverRosLink

import rclpy
from rclpy.node import Node

from std_msgs.msg import Float32MultiArray, String
from std_srvs.srv import SetBool

from hockey_stick_arm.srv import SetFloat
from ocean_optics_spectrometer.srv import CaptureSpectrometer
from science_servo_control.srv import FreeMoveDrum, LowerLinearActuator, MixSample, MoveCuvette, \
									  MoveLinearActuator, MovePump, PreMixDrum, PreSealDrum, \
									  RaiseLinearActuator, ReadDrumPosition, RebootDrum, \
                                      ScoopSample, SealDrum, SpinCentrifuge, WriteGPIO

from planner_multiplexer.srv import SetPlanner

from PyQt5.QtCore import pyqtSignal as Signal


class WandererRosLink(RoverRosLink):
	"""Supply signals for the Qt app, originating from topic callbacks."""

	arm_currents = Signal(Float32MultiArray)
	drivetrain_currents = Signal(Float32MultiArray)

	pid_planner_status = Signal(String)
	dwa_planner_status = Signal(String)

	def __init__(self, executor):
		super().__init__(executor)
		

		### autonomy #########################################################

		self.pid_planner_name = self.ROSnode.get_parameter("pid_planner_name").value
		self.dwa_planner_name = self.ROSnode.get_parameter("dwa_planner_name").value

		pid_planner_status_topic = self.ROSnode.get_parameter("pid_planner_status_topic").value
		dwa_planner_status_topic = self.ROSnode.get_parameter("dwa_planner_status_topic").value

		select_planner_service = self.ROSnode.get_parameter("select_planner_service").value
		pid_planner_enabled_service = self.ROSnode.get_parameter("pid_planner_enabled_service").value
		dwa_planner_enabled_service = self.ROSnode.get_parameter("dwa_planner_enabled_service").value

		self.pid_planner_status_sub = self.make_subscriber(pid_planner_status_topic, String, self.pid_planner_status)
		self.dwa_planner_status_sub = self.make_subscriber(dwa_planner_status_topic, String, self.dwa_planner_status)

		self.select_planner_serv = self.make_service(select_planner_service, SetPlanner, "select_planner_service_client")
		self.enable_pid_planner_serv = self.make_service(pid_planner_enabled_service, SetBool, "pid_planner_enabled_service_client")
		self.enable_dwa_planner_serv = self.make_service(dwa_planner_enabled_service, SetBool, "dwa_planner_enabled_service_client")

		### drivetrain #######################################################

		drivetrain_currents_topic = "drivetrain_current_data"

		self.drivetrain_currents_sub = self.make_subscriber(drivetrain_currents_topic, Float32MultiArray, self.drivetrain_currents)

		### arm ##############################################################

		arm_currents_topic = "arm_current"
		arm_control_service = "UseVeloControl"
		arm_speed_multipler_service = "SetSpeedMultiplier"
		arm_safety_check_service = "UseArmSafetyCheck"

		self.arms_currents_sub = self.make_subscriber(arm_currents_topic, Float32MultiArray, self.arm_currents)
		self.arm_control_serv = self.make_service(arm_control_service, SetBool)
		self.arm_speed_multiplier_serv = self.make_service(arm_speed_multipler_service, SetFloat)
		self.arm_safety_check_serv = self.make_service(arm_safety_check_service, SetBool)

		### science ##########################################################
		self.linear_act_serv = self.make_service("move_linear_actuator", MoveLinearActuator)
		self.pump_serv = self.make_service("move_pump", MovePump)
		self.scoop_sample_serv = self.make_service("scoop_sample", ScoopSample)
		self.pre_mix_drum_serv = self.make_service("pre_mix_drum", PreMixDrum)
		self.mix_sample_serv = self.make_service("mix_sample", MixSample)
		self.pre_seal_drum_serv = self.make_service("pre_seal_drum", PreSealDrum)
		self.seal_drum_serv = self.make_service("seal_drum", SealDrum)
		self.free_move_drum_serv = self.make_service("free_move_drum", FreeMoveDrum)
		self.move_cuvette_serv = self.make_service("move_cuvette", MoveCuvette)
		self.spin_centrifuge_serv = self.make_service("spin_centrifuge", SpinCentrifuge)
		self.gpio_serv = self.make_service("gpio", WriteGPIO)
		self.raise_linear_actuator_serv = self.make_service("raise_linear_actuator", RaiseLinearActuator)
		self.lower_linear_actuator_serv = self.make_service("lower_linear_actuator", LowerLinearActuator)
		self.read_drum_position_serv = self.make_service("read_drum_position", ReadDrumPosition)
		self.spectrometer_serv = self.make_service("spectrometer", CaptureSpectrometer)
		self.reboot_drum_serv = self.make_service("reboot_drum", RebootDrum)

	### autonomy #############################################################

	def set_planner(self, planner: str) -> SetPlanner.Response:
		return self.select_planner_serv.send_request(planner = planner)

	def enable_pid_planner(self, enable: bool) -> SetBool.Response:
		return self.enable_pid_planner_serv.send_request(data = enable)

	def enable_dwa_planner(self, enable: bool) -> SetBool.Response:
		return self.enable_dwa_planner_serv.send_request(data = enable)

	### arm ##################################################################

	def change_arm_control(self, velocity: bool) -> SetBool.Response:
		return self.arm_control_serv.send_request(data=velocity)

	def change_arm_speed_multiplier(self, multipler: bool) -> SetFloat.Response:
		return self.arm_speed_multiplier_serv.send_request(value=multipler)

	def change_arm_safety_features(self, enable_arm_safety: bool) -> SetBool.Response:
		return self.arm_safety_check_serv.send_request(data=enable_arm_safety)

	### science ##############################################################

	def linear_act(self, actuator_id: int, pwm_pos: int) -> MoveLinearActuator.Response:
		return self.linear_act_serv.send_request(actuator_id = actuator_id, pwm_pos = pwm_pos)

	def pump(self, pump_id: int, ppm_speed: int, duration: int) -> MovePump.Response:
		return self.pump_serv.send_request(pump_id = pump_id, ppm_speed = ppm_speed, duration = duration)

	def scoop_sample(self, drum_id: int) -> ScoopSample.Response:
		return self.scoop_sample_serv.send_request(drum_id = drum_id)

	def pre_mix_drum(self, drum_id: int) -> PreMixDrum.Response:
		return self.pre_mix_drum_serv.send_request(drum_id = drum_id)

	def mix_sample(self, drum_id: int) -> MixSample.Response:
		return self.mix_sample_serv.send_request(drum_id = drum_id)
	
	def pre_seal_drum(self, drum_id: int) -> PreSealDrum.Response:
		return self.pre_seal_drum_serv.send_request(drum_id = drum_id)

	def seal_drum(self, drum_id: int) -> SealDrum.Response:
		return self.seal_drum_serv.send_request(drum_id = drum_id)

	def free_move_drum(self, drum_id: int, drum_pos: int) -> FreeMoveDrum.Response:
		return self.free_move_drum_serv.send_request(drum_id = drum_id, drum_pos = drum_pos)

	def move_cuvette(self, cuvette_num: int) -> MoveCuvette.Response:
		return self.move_cuvette_serv.send_request(cuvette_num = cuvette_num)

	def spin_centrifuge(self) -> SpinCentrifuge.Response:
		return self.spin_centrifuge_serv.send_request()

	def gpio(self, id: int, value: int) -> WriteGPIO.Response:
		return self.gpio_serv.send_request(id = id, value = value)

	def raise_linear_actuator(self, lin_act_id: int) -> RaiseLinearActuator.Response:
		return self.raise_linear_actuator_serv.send_request(lin_act_id = lin_act_id)

	def lower_linear_actuator(self, lin_act_id: int) -> LowerLinearActuator.Response:
		return self.lower_linear_actuator_serv.send_request(lin_act_id = lin_act_id)

	def read_drum_position(self, id: int) -> ReadDrumPosition.Response:
		return self.read_drum_position_serv.send_request(id = id)

	def capture_spectrometer(self, integration_time: int) -> CaptureSpectrometer.Response:
		return self.spectrometer_serv.send_request(integration_time=integration_time)
	
	def reboot_drum(self, drum_id: int) -> RebootDrum.Response:
		return self.reboot_drum_serv.send_request(drum_id = drum_id)

if __name__ == "__main__":
	rclpy.Node.get_logger().debug("Starting GUI Wanderer ROS link")
	roslink = WandererRosLink()
	rclpy.spin()
