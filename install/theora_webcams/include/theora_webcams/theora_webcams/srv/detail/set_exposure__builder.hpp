// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from theora_webcams:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "theora_webcams/srv/detail/set_exposure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace theora_webcams
{

namespace srv
{

namespace builder
{

class Init_SetExposure_Request_exposure
{
public:
  Init_SetExposure_Request_exposure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::theora_webcams::srv::SetExposure_Request exposure(::theora_webcams::srv::SetExposure_Request::_exposure_type arg)
  {
    msg_.exposure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::srv::SetExposure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::srv::SetExposure_Request>()
{
  return theora_webcams::srv::builder::Init_SetExposure_Request_exposure();
}

}  // namespace theora_webcams


namespace theora_webcams
{

namespace srv
{

namespace builder
{

class Init_SetExposure_Response_success
{
public:
  Init_SetExposure_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::theora_webcams::srv::SetExposure_Response success(::theora_webcams::srv::SetExposure_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::srv::SetExposure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::srv::SetExposure_Response>()
{
  return theora_webcams::srv::builder::Init_SetExposure_Response_success();
}

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_
