// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marker_interfacing:srv/ClearMarkers.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__CLEAR_MARKERS__BUILDER_HPP_
#define MARKER_INTERFACING__SRV__DETAIL__CLEAR_MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marker_interfacing/srv/detail/clear_markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marker_interfacing
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::srv::ClearMarkers_Request>()
{
  return ::marker_interfacing::srv::ClearMarkers_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace marker_interfacing


namespace marker_interfacing
{

namespace srv
{

namespace builder
{

class Init_ClearMarkers_Response_success
{
public:
  Init_ClearMarkers_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::marker_interfacing::srv::ClearMarkers_Response success(::marker_interfacing::srv::ClearMarkers_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::srv::ClearMarkers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::srv::ClearMarkers_Response>()
{
  return marker_interfacing::srv::builder::Init_ClearMarkers_Response_success();
}

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__SRV__DETAIL__CLEAR_MARKERS__BUILDER_HPP_
