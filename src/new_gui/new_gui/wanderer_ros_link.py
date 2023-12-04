#!/usr/bin/env python3.8

from new_gui.rover_gui_common import RoverRosLink

import rclpy

from std_msgs.msg import Float32MultiArray, String
from std_srvs.srv import SetBool

# from hockey_stick_arm.srv import SetFloat
# from ocean_optics_spectrometer.srv import CaptureSpectrometer
# from science_servo_control.srv import FreeMoveDrum, LowerLinearActuator, MixSample, MoveCuvette, \
# 									  MoveLinearActuator, MovePump, PreMixDrum, PreSealDrum, \
# 									  RaiseLinearActuator, ReadDrumPosition, RebootDrum, RebootDrumResponse, \
#                                       ScoopSample, SealDrum, SpinCentrifuge, WriteGPIO

# from planner_multiplexer.srv import SetPlanner

from PyQt5.QtCore import pyqtSignal as Signal

class WandererRosLink(RoverRosLink):
	"""Supply signals for the Qt app, originating from topic callbacks."""

	arm_currents = Signal(Float32MultiArray)
	drivetrain_currents = Signal(Float32MultiArray)

	pid_planner_status = Signal(String)
	dwa_planner_status = Signal(String)

	def __init__(self):
		super().__init__()
		

		### autonomy #########################################################

		# self.pid_planner_name = rclpy.get_param("~pid_planner_name")
		# self.dwa_planner_name = rclpy.get_param("~dwa_planner_name")

		# pid_planner_status_topic = rclpy.get_param("~pid_planner_status_topic")
		# dwa_planner_status_topic = rclpy.get_param("~dwa_planner_status_topic")

		# select_planner_service = rclpy.get_param("~select_planner_service")
		# pid_planner_enabled_service = rclpy.get_param("~pid_planner_enabled_service")
		# dwa_planner_enabled_service = rclpy.get_param("~dwa_planner_enabled_service")

		# self.pid_planner_status_sub = self.make_subscriber(pid_planner_status_topic, String, self.pid_planner_status)
		# self.dwa_planner_status_sub = self.make_subscriber(dwa_planner_status_topic, String, self.dwa_planner_status)

		# # self.select_planner_serv = rclpy.ServiceProxy(select_planner_service, SetPlanner)
		# self.enable_pid_planner_serv = rclpy.ServiceProxy(pid_planner_enabled_service, SetBool)
		# self.enable_dwa_planner_serv = rclpy.ServiceProxy(dwa_planner_enabled_service, SetBool)

		### drivetrain #######################################################

		drivetrain_currents_topic = "drivetrain_current_data"

		# self.drivetrain_currents_sub = self.make_subscriber(drivetrain_currents_topic, Float32MultiArray, self.drivetrain_currents)

		### arm ##############################################################

		arm_currents_topic = "arm_current"
		arm_control_service = "UseVeloControl"
		arm_speed_multipler_service = "SetSpeedMultiplier"
		arm_safety_check_service = "UseArmSafetyCheck"

		# self.arms_currents_sub = self.ROSnode.make_subscriber(arm_currents_topic, Float32MultiArray, self.arm_currents)
		# self.arm_control_serv = rclpy.ServiceProxy(arm_control_service, SetBool)
		# # self.arm_speed_multiplier_serv = rclpy.ServiceProxy(arm_speed_multipler_service, SetFloat)
		# self.arm_safety_check_serv = rclpy.ServiceProxy(arm_safety_check_service, SetBool)

		### science ##########################################################
		# self.linear_act_serv = rclpy.ServiceProxy("/move_linear_actuator", MoveLinearActuator)
		# self.pump_serv = rclpy.ServiceProxy("/move_pump", MovePump)
		# self.scoop_sample_serv = rclpy.ServiceProxy("/scoop_sample", ScoopSample)
		# self.pre_mix_drum_serv = rclpy.ServiceProxy("/pre_mix_drum", PreMixDrum)
		# self.mix_sample_serv = rclpy.ServiceProxy("/mix_sample", MixSample)
		# self.pre_seal_drum_serv = rclpy.ServiceProxy("/pre_seal_drum", PreSealDrum)
		# self.seal_drum_serv = rclpy.ServiceProxy("/seal_drum", SealDrum)
		# self.free_move_drum_serv = rclpy.ServiceProxy("/free_move_drum", FreeMoveDrum)
		# self.move_cuvette_serv = rclpy.ServiceProxy("/move_cuvette", MoveCuvette)
		# self.spin_centrifuge_serv = rclpy.ServiceProxy("/spin_centrifuge", SpinCentrifuge)
		# self.gpio_serv = rclpy.ServiceProxy("/gpio", WriteGPIO)
		# self.raise_linear_actuator_serv = rclpy.ServiceProxy("/raise_linear_actuator", RaiseLinearActuator)
		# self.lower_linear_actuator_serv = rclpy.ServiceProxy("/lower_linear_actuator", LowerLinearActuator)
		# self.read_drum_position_serv = rclpy.ServiceProxy("/read_drum_position", ReadDrumPosition)
		# self.spectrometer_serv = rclpy.ServiceProxy("/spectrometer", CaptureSpectrometer)
		# self.reboot_drum_serv = rclpy.ServiceProxy("/reboot_drum", RebootDrum)

	### autonomy #############################################################

	# def set_planner(self, planner: str) -> SetPlanner.Response:
	# 	return self.select_planner_serv(SetPlanner.Request(planner))

	def enable_pid_planner(self, enable: bool) -> SetBool.Response:
		return self.enable_pid_planner_serv(SetBool.Request(enable))

	def enable_dwa_planner(self, enable: bool) -> SetBool.Response:
		return self.enable_dwa_planner_serv(SetBool.Request(enable))

	### arm ##################################################################

	def change_arm_control(self, velocity: bool) -> SetBool.Response:
		return self.arm_control_serv(SetBool.Request(data=velocity))

	# def change_arm_speed_multiplier(self, multipler: bool) -> SetFloat.Response:
	# 	return self.arm_speed_multiplier_serv(SetFloat.Request(value=multipler))

	def change_arm_safety_features(self, enable_arm_safety: bool) -> SetBool.Response:
		return self.arm_safety_check_serv(SetBool.Request(data=enable_arm_safety))

	### science ##############################################################

	# def linear_act(self, actuator_id: int, pwm_pos: int) -> MoveLinearActuator.Response:
	# 	return self.linear_act_serv(MoveLinearActuator.Request(actuator_id, pwm_pos))

	# def pump(self, pump_id: int, ppm_speed: int, duration: int) -> MovePump.Response:
	# 	return self.pump_serv(MovePump.Request(pump_id, ppm_speed, duration))

	# def scoop_sample(self, drum_id: int) -> ScoopSample.Response:
	# 	return self.scoop_sample_serv(ScoopSample.Request(drum_id))

	# def pre_mix_drum(self, drum_id: int) -> PreMixDrum.Response:
	# 	return self.pre_mix_drum_serv(PreMixDrum.Request(drum_id))

	# def mix_sample(self, drum_id: int) -> MixSample.Response:
	# 	return self.mix_sample_serv(MixSample.Request(drum_id))
	
	# def pre_seal_drum(self, drum_id: int) -> PreSealDrum.Response:
	# 	return self.pre_seal_drum_serv(PreSealDrum.Request(drum_id))

	# def seal_drum(self, drum_id: int) -> SealDrum.Response:
	# 	return self.seal_drum_serv(SealDrum.Request(drum_id))

	# def free_move_drum(self, drum_id: int, drum_pos: int) -> FreeMoveDrum.Response:
	# 	return self.free_move_drum_serv(FreeMoveDrum.Request(drum_id, drum_pos))

	# def move_cuvette(self, cuvette_num: int) -> MoveCuvette.Response:
	# 	return self.move_cuvette_serv(MoveCuvette.Request(cuvette_num))

	# def spin_centrifuge(self) -> SpinCentrifuge.Response:
	# 	return self.spin_centrifuge_serv(SpinCentrifuge.Request())

	# def gpio(self, id: int, value: int) -> WriteGPIO.Response:
	# 	return self.gpio_serv(WriteGPIO.Request(id, value))

	# def raise_linear_actuator(self, lin_act_id: int) -> RaiseLinearActuator.Response:
	# 	return self.raise_linear_actuator_serv(RaiseLinearActuator.Request(lin_act_id))

	# def lower_linear_actuator(self, lin_act_id: int) -> LowerLinearActuator.Response:
	# 	return self.lower_linear_actuator_serv(LowerLinearActuator.Request(lin_act_id))

	# def read_drum_position(self, id: int) -> ReadDrumPosition.Response:
	# 	return self.read_drum_position_serv(ReadDrumPosition.Request(id))

	# def capture_spectrometer(self, integration_time: int) -> CaptureSpectrometer.Response:
	# 	return self.spectrometer_serv(CaptureSpectrometer.Request(integration_time=integration_time))
	
	# def reboot_drum(self, drum_id: int) -> RebootDrumResponse:
	# 	return self.reboot_drum_serv(RebootDrum.Request(drum_id))

if __name__ == "__main__":
	rclpy.Node.get_logger().debug("Starting GUI Wanderer ROS link")
	roslink = WandererRosLink()
	rclpy.spin()
