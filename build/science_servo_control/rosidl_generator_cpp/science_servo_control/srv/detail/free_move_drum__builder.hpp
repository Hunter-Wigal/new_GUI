// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from science_servo_control:srv/FreeMoveDrum.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__FREE_MOVE_DRUM__BUILDER_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__FREE_MOVE_DRUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "science_servo_control/srv/detail/free_move_drum__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace science_servo_control
{

namespace srv
{

namespace builder
{

class Init_FreeMoveDrum_Request_drum_pos
{
public:
  explicit Init_FreeMoveDrum_Request_drum_pos(::science_servo_control::srv::FreeMoveDrum_Request & msg)
  : msg_(msg)
  {}
  ::science_servo_control::srv::FreeMoveDrum_Request drum_pos(::science_servo_control::srv::FreeMoveDrum_Request::_drum_pos_type arg)
  {
    msg_.drum_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::science_servo_control::srv::FreeMoveDrum_Request msg_;
};

class Init_FreeMoveDrum_Request_drum_id
{
public:
  Init_FreeMoveDrum_Request_drum_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FreeMoveDrum_Request_drum_pos drum_id(::science_servo_control::srv::FreeMoveDrum_Request::_drum_id_type arg)
  {
    msg_.drum_id = std::move(arg);
    return Init_FreeMoveDrum_Request_drum_pos(msg_);
  }

private:
  ::science_servo_control::srv::FreeMoveDrum_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::science_servo_control::srv::FreeMoveDrum_Request>()
{
  return science_servo_control::srv::builder::Init_FreeMoveDrum_Request_drum_id();
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
auto build<::science_servo_control::srv::FreeMoveDrum_Response>()
{
  return ::science_servo_control::srv::FreeMoveDrum_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__FREE_MOVE_DRUM__BUILDER_HPP_
