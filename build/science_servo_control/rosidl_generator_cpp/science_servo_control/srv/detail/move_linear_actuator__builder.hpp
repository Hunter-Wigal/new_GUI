// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from science_servo_control:srv/MoveLinearActuator.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_LINEAR_ACTUATOR__BUILDER_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_LINEAR_ACTUATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "science_servo_control/srv/detail/move_linear_actuator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace science_servo_control
{

namespace srv
{

namespace builder
{

class Init_MoveLinearActuator_Request_pwm_pos
{
public:
  explicit Init_MoveLinearActuator_Request_pwm_pos(::science_servo_control::srv::MoveLinearActuator_Request & msg)
  : msg_(msg)
  {}
  ::science_servo_control::srv::MoveLinearActuator_Request pwm_pos(::science_servo_control::srv::MoveLinearActuator_Request::_pwm_pos_type arg)
  {
    msg_.pwm_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::science_servo_control::srv::MoveLinearActuator_Request msg_;
};

class Init_MoveLinearActuator_Request_actuator_id
{
public:
  Init_MoveLinearActuator_Request_actuator_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLinearActuator_Request_pwm_pos actuator_id(::science_servo_control::srv::MoveLinearActuator_Request::_actuator_id_type arg)
  {
    msg_.actuator_id = std::move(arg);
    return Init_MoveLinearActuator_Request_pwm_pos(msg_);
  }

private:
  ::science_servo_control::srv::MoveLinearActuator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::science_servo_control::srv::MoveLinearActuator_Request>()
{
  return science_servo_control::srv::builder::Init_MoveLinearActuator_Request_actuator_id();
}

}  // namespace science_servo_control


namespace science_servo_control
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::science_servo_control::srv::MoveLinearActuator_Response>()
{
  return ::science_servo_control::srv::MoveLinearActuator_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_LINEAR_ACTUATOR__BUILDER_HPP_
