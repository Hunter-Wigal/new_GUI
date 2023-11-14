// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from theora_webcams:srv/GetExposureBounds.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__GET_EXPOSURE_BOUNDS__BUILDER_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__GET_EXPOSURE_BOUNDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "theora_webcams/srv/detail/get_exposure_bounds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace theora_webcams
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::srv::GetExposureBounds_Request>()
{
  return ::theora_webcams::srv::GetExposureBounds_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace theora_webcams


namespace theora_webcams
{

namespace srv
{

namespace builder
{

class Init_GetExposureBounds_Response_supports_manual_exposure
{
public:
  explicit Init_GetExposureBounds_Response_supports_manual_exposure(::theora_webcams::srv::GetExposureBounds_Response & msg)
  : msg_(msg)
  {}
  ::theora_webcams::srv::GetExposureBounds_Response supports_manual_exposure(::theora_webcams::srv::GetExposureBounds_Response::_supports_manual_exposure_type arg)
  {
    msg_.supports_manual_exposure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::srv::GetExposureBounds_Response msg_;
};

class Init_GetExposureBounds_Response_exposure_bounds
{
public:
  Init_GetExposureBounds_Response_exposure_bounds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetExposureBounds_Response_supports_manual_exposure exposure_bounds(::theora_webcams::srv::GetExposureBounds_Response::_exposure_bounds_type arg)
  {
    msg_.exposure_bounds = std::move(arg);
    return Init_GetExposureBounds_Response_supports_manual_exposure(msg_);
  }

private:
  ::theora_webcams::srv::GetExposureBounds_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::srv::GetExposureBounds_Response>()
{
  return theora_webcams::srv::builder::Init_GetExposureBounds_Response_exposure_bounds();
}

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__SRV__DETAIL__GET_EXPOSURE_BOUNDS__BUILDER_HPP_
