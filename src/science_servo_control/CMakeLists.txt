cmake_minimum_required(VERSION 3.8)
project(science_servo_control)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp)
find_package(std_msgs)
find_package(rclpy)
# find_package(dynamixel_controller)
# find_package(fiducial_msgs)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/LowerLinearActuator.srv"
  "srv/FreeMoveDrum.srv"
  "srv/MixSample.srv"
  "srv/MoveCuvette.srv"
  "srv/MoveLinearActuator.srv"
  "srv/MovePump.srv"
  "srv/PreMixDrum.srv"
  "srv/PreSealDrum.srv"
  "srv/RaiseLinearActuator.srv"
  "srv/ReadDrumPosition.srv"
  "srv/RebootDrum.srv"
  "srv/ScoopSample.srv"
  "srv/SealDrum.srv"
  "srv/SpinCentrifuge.srv"
  "srv/WriteGPIO.srv"

  DEPENDENCIES # Add packages that above messages depend on
  rclcpp
  std_msgs
  rclpy
  # dynamixel_controller
) 

ament_package()