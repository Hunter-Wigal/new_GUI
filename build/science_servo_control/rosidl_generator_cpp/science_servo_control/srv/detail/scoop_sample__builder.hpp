// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from science_servo_control:srv/ScoopSample.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__SCOOP_SAMPLE__BUILDER_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__SCOOP_SAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "science_servo_control/srv/detail/scoop_sample__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace science_servo_control
{

namespace srv
{

namespace builder
{

class Init_ScoopSample_Request_drum_id
{
public:
  Init_ScoopSample_Request_drum_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::science_servo_control::srv::ScoopSample_Request drum_id(::science_servo_control::srv::ScoopSample_Request::_drum_id_type arg)
  {
    msg_.drum_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::science_servo_control::srv::ScoopSample_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::science_servo_control::srv::ScoopSample_Request>()
{
  return science_servo_control::srv::builder::Init_ScoopSample_Request_drum_id();
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
auto build<::science_servo_control::srv::ScoopSample_Response>()
{
  return ::science_servo_control::srv::ScoopSample_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__SCOOP_SAMPLE__BUILDER_HPP_
