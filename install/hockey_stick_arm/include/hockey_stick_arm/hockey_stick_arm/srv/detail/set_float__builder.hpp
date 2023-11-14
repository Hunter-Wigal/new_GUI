// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hockey_stick_arm:srv/SetFloat.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_STICK_ARM__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_
#define HOCKEY_STICK_ARM__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hockey_stick_arm/srv/detail/set_float__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hockey_stick_arm
{

namespace srv
{

namespace builder
{

class Init_SetFloat_Request_value
{
public:
  Init_SetFloat_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hockey_stick_arm::srv::SetFloat_Request value(::hockey_stick_arm::srv::SetFloat_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hockey_stick_arm::srv::SetFloat_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hockey_stick_arm::srv::SetFloat_Request>()
{
  return hockey_stick_arm::srv::builder::Init_SetFloat_Request_value();
}

}  // namespace hockey_stick_arm


namespace hockey_stick_arm
{

namespace srv
{

namespace builder
{

class Init_SetFloat_Response_message
{
public:
  explicit Init_SetFloat_Response_message(::hockey_stick_arm::srv::SetFloat_Response & msg)
  : msg_(msg)
  {}
  ::hockey_stick_arm::srv::SetFloat_Response message(::hockey_stick_arm::srv::SetFloat_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hockey_stick_arm::srv::SetFloat_Response msg_;
};

class Init_SetFloat_Response_success
{
public:
  Init_SetFloat_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFloat_Response_message success(::hockey_stick_arm::srv::SetFloat_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetFloat_Response_message(msg_);
  }

private:
  ::hockey_stick_arm::srv::SetFloat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hockey_stick_arm::srv::SetFloat_Response>()
{
  return hockey_stick_arm::srv::builder::Init_SetFloat_Response_success();
}

}  // namespace hockey_stick_arm

#endif  // HOCKEY_STICK_ARM__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_
