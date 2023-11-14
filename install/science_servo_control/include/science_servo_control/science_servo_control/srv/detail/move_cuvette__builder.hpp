// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from science_servo_control:srv/MoveCuvette.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_CUVETTE__BUILDER_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_CUVETTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "science_servo_control/srv/detail/move_cuvette__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace science_servo_control
{

namespace srv
{

namespace builder
{

class Init_MoveCuvette_Request_cuvette_num
{
public:
  Init_MoveCuvette_Request_cuvette_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::science_servo_control::srv::MoveCuvette_Request cuvette_num(::science_servo_control::srv::MoveCuvette_Request::_cuvette_num_type arg)
  {
    msg_.cuvette_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::science_servo_control::srv::MoveCuvette_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::science_servo_control::srv::MoveCuvette_Request>()
{
  return science_servo_control::srv::builder::Init_MoveCuvette_Request_cuvette_num();
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
auto build<::science_servo_control::srv::MoveCuvette_Response>()
{
  return ::science_servo_control::srv::MoveCuvette_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_CUVETTE__BUILDER_HPP_
