// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hockey_stick_arm:srv/Calibrate.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_STICK_ARM__SRV__DETAIL__CALIBRATE__BUILDER_HPP_
#define HOCKEY_STICK_ARM__SRV__DETAIL__CALIBRATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hockey_stick_arm/srv/detail/calibrate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hockey_stick_arm
{

namespace srv
{

namespace builder
{

class Init_Calibrate_Request_value2
{
public:
  explicit Init_Calibrate_Request_value2(::hockey_stick_arm::srv::Calibrate_Request & msg)
  : msg_(msg)
  {}
  ::hockey_stick_arm::srv::Calibrate_Request value2(::hockey_stick_arm::srv::Calibrate_Request::_value2_type arg)
  {
    msg_.value2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hockey_stick_arm::srv::Calibrate_Request msg_;
};

class Init_Calibrate_Request_value1
{
public:
  Init_Calibrate_Request_value1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calibrate_Request_value2 value1(::hockey_stick_arm::srv::Calibrate_Request::_value1_type arg)
  {
    msg_.value1 = std::move(arg);
    return Init_Calibrate_Request_value2(msg_);
  }

private:
  ::hockey_stick_arm::srv::Calibrate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hockey_stick_arm::srv::Calibrate_Request>()
{
  return hockey_stick_arm::srv::builder::Init_Calibrate_Request_value1();
}

}  // namespace hockey_stick_arm


namespace hockey_stick_arm
{

namespace srv
{

namespace builder
{

class Init_Calibrate_Response_message
{
public:
  explicit Init_Calibrate_Response_message(::hockey_stick_arm::srv::Calibrate_Response & msg)
  : msg_(msg)
  {}
  ::hockey_stick_arm::srv::Calibrate_Response message(::hockey_stick_arm::srv::Calibrate_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hockey_stick_arm::srv::Calibrate_Response msg_;
};

class Init_Calibrate_Response_success
{
public:
  Init_Calibrate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calibrate_Response_message success(::hockey_stick_arm::srv::Calibrate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Calibrate_Response_message(msg_);
  }

private:
  ::hockey_stick_arm::srv::Calibrate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hockey_stick_arm::srv::Calibrate_Response>()
{
  return hockey_stick_arm::srv::builder::Init_Calibrate_Response_success();
}

}  // namespace hockey_stick_arm

#endif  // HOCKEY_STICK_ARM__SRV__DETAIL__CALIBRATE__BUILDER_HPP_
