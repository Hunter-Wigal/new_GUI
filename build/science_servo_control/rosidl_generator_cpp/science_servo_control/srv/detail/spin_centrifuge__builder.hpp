// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from science_servo_control:srv/SpinCentrifuge.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__SPIN_CENTRIFUGE__BUILDER_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__SPIN_CENTRIFUGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "science_servo_control/srv/detail/spin_centrifuge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace science_servo_control
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::science_servo_control::srv::SpinCentrifuge_Request>()
{
  return ::science_servo_control::srv::SpinCentrifuge_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
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
auto build<::science_servo_control::srv::SpinCentrifuge_Response>()
{
  return ::science_servo_control::srv::SpinCentrifuge_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__SPIN_CENTRIFUGE__BUILDER_HPP_
