// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from science_servo_control:srv/MovePump.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_PUMP__BUILDER_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_PUMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "science_servo_control/srv/detail/move_pump__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace science_servo_control
{

namespace srv
{

namespace builder
{

class Init_MovePump_Request_duration
{
public:
  explicit Init_MovePump_Request_duration(::science_servo_control::srv::MovePump_Request & msg)
  : msg_(msg)
  {}
  ::science_servo_control::srv::MovePump_Request duration(::science_servo_control::srv::MovePump_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::science_servo_control::srv::MovePump_Request msg_;
};

class Init_MovePump_Request_ppm_speed
{
public:
  explicit Init_MovePump_Request_ppm_speed(::science_servo_control::srv::MovePump_Request & msg)
  : msg_(msg)
  {}
  Init_MovePump_Request_duration ppm_speed(::science_servo_control::srv::MovePump_Request::_ppm_speed_type arg)
  {
    msg_.ppm_speed = std::move(arg);
    return Init_MovePump_Request_duration(msg_);
  }

private:
  ::science_servo_control::srv::MovePump_Request msg_;
};

class Init_MovePump_Request_pump_id
{
public:
  Init_MovePump_Request_pump_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovePump_Request_ppm_speed pump_id(::science_servo_control::srv::MovePump_Request::_pump_id_type arg)
  {
    msg_.pump_id = std::move(arg);
    return Init_MovePump_Request_ppm_speed(msg_);
  }

private:
  ::science_servo_control::srv::MovePump_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::science_servo_control::srv::MovePump_Request>()
{
  return science_servo_control::srv::builder::Init_MovePump_Request_pump_id();
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
auto build<::science_servo_control::srv::MovePump_Response>()
{
  return ::science_servo_control::srv::MovePump_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_PUMP__BUILDER_HPP_
