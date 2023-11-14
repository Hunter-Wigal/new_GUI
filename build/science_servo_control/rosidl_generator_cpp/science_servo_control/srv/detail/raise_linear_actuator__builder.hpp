// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from science_servo_control:srv/RaiseLinearActuator.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__RAISE_LINEAR_ACTUATOR__BUILDER_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__RAISE_LINEAR_ACTUATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "science_servo_control/srv/detail/raise_linear_actuator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace science_servo_control
{

namespace srv
{

namespace builder
{

class Init_RaiseLinearActuator_Request_actuator_id
{
public:
  Init_RaiseLinearActuator_Request_actuator_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::science_servo_control::srv::RaiseLinearActuator_Request actuator_id(::science_servo_control::srv::RaiseLinearActuator_Request::_actuator_id_type arg)
  {
    msg_.actuator_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::science_servo_control::srv::RaiseLinearActuator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::science_servo_control::srv::RaiseLinearActuator_Request>()
{
  return science_servo_control::srv::builder::Init_RaiseLinearActuator_Request_actuator_id();
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
auto build<::science_servo_control::srv::RaiseLinearActuator_Response>()
{
  return ::science_servo_control::srv::RaiseLinearActuator_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__RAISE_LINEAR_ACTUATOR__BUILDER_HPP_
