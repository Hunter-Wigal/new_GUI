// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from science_servo_control:srv/WriteGPIO.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__WRITE_GPIO__BUILDER_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__WRITE_GPIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "science_servo_control/srv/detail/write_gpio__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace science_servo_control
{

namespace srv
{

namespace builder
{

class Init_WriteGPIO_Request_pin_value
{
public:
  explicit Init_WriteGPIO_Request_pin_value(::science_servo_control::srv::WriteGPIO_Request & msg)
  : msg_(msg)
  {}
  ::science_servo_control::srv::WriteGPIO_Request pin_value(::science_servo_control::srv::WriteGPIO_Request::_pin_value_type arg)
  {
    msg_.pin_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::science_servo_control::srv::WriteGPIO_Request msg_;
};

class Init_WriteGPIO_Request_pin_id
{
public:
  Init_WriteGPIO_Request_pin_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WriteGPIO_Request_pin_value pin_id(::science_servo_control::srv::WriteGPIO_Request::_pin_id_type arg)
  {
    msg_.pin_id = std::move(arg);
    return Init_WriteGPIO_Request_pin_value(msg_);
  }

private:
  ::science_servo_control::srv::WriteGPIO_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::science_servo_control::srv::WriteGPIO_Request>()
{
  return science_servo_control::srv::builder::Init_WriteGPIO_Request_pin_id();
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
auto build<::science_servo_control::srv::WriteGPIO_Response>()
{
  return ::science_servo_control::srv::WriteGPIO_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__WRITE_GPIO__BUILDER_HPP_
