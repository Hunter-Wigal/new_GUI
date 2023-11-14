// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marker_interfacing:srv/ReorderMarkers.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKERS__BUILDER_HPP_
#define MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marker_interfacing/srv/detail/reorder_markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marker_interfacing
{

namespace srv
{

namespace builder
{

class Init_ReorderMarkers_Request_marker_ids
{
public:
  Init_ReorderMarkers_Request_marker_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::marker_interfacing::srv::ReorderMarkers_Request marker_ids(::marker_interfacing::srv::ReorderMarkers_Request::_marker_ids_type arg)
  {
    msg_.marker_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::srv::ReorderMarkers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::srv::ReorderMarkers_Request>()
{
  return marker_interfacing::srv::builder::Init_ReorderMarkers_Request_marker_ids();
}

}  // namespace marker_interfacing


namespace marker_interfacing
{

namespace srv
{

namespace builder
{

class Init_ReorderMarkers_Response_success
{
public:
  Init_ReorderMarkers_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::marker_interfacing::srv::ReorderMarkers_Response success(::marker_interfacing::srv::ReorderMarkers_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::srv::ReorderMarkers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::srv::ReorderMarkers_Response>()
{
  return marker_interfacing::srv::builder::Init_ReorderMarkers_Response_success();
}

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKERS__BUILDER_HPP_
