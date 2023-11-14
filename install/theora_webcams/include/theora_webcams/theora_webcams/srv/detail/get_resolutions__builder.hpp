// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from theora_webcams:srv/GetResolutions.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__BUILDER_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "theora_webcams/srv/detail/get_resolutions__struct.hpp"
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
auto build<::theora_webcams::srv::GetResolutions_Request>()
{
  return ::theora_webcams::srv::GetResolutions_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace theora_webcams


namespace theora_webcams
{

namespace srv
{

namespace builder
{

class Init_GetResolutions_Response_resolutions
{
public:
  Init_GetResolutions_Response_resolutions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::theora_webcams::srv::GetResolutions_Response resolutions(::theora_webcams::srv::GetResolutions_Response::_resolutions_type arg)
  {
    msg_.resolutions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::srv::GetResolutions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::srv::GetResolutions_Response>()
{
  return theora_webcams::srv::builder::Init_GetResolutions_Response_resolutions();
}

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__BUILDER_HPP_
