// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marker_interfacing:srv/ReorderMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKER__BUILDER_HPP_
#define MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marker_interfacing/srv/detail/reorder_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marker_interfacing
{

namespace srv
{

namespace builder
{

class Init_ReorderMarker_Request_new_following_marker_id
{
public:
  explicit Init_ReorderMarker_Request_new_following_marker_id(::marker_interfacing::srv::ReorderMarker_Request & msg)
  : msg_(msg)
  {}
  ::marker_interfacing::srv::ReorderMarker_Request new_following_marker_id(::marker_interfacing::srv::ReorderMarker_Request::_new_following_marker_id_type arg)
  {
    msg_.new_following_marker_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::srv::ReorderMarker_Request msg_;
};

class Init_ReorderMarker_Request_marker_id
{
public:
  Init_ReorderMarker_Request_marker_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReorderMarker_Request_new_following_marker_id marker_id(::marker_interfacing::srv::ReorderMarker_Request::_marker_id_type arg)
  {
    msg_.marker_id = std::move(arg);
    return Init_ReorderMarker_Request_new_following_marker_id(msg_);
  }

private:
  ::marker_interfacing::srv::ReorderMarker_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::srv::ReorderMarker_Request>()
{
  return marker_interfacing::srv::builder::Init_ReorderMarker_Request_marker_id();
}

}  // namespace marker_interfacing


namespace marker_interfacing
{

namespace srv
{

namespace builder
{

class Init_ReorderMarker_Response_success
{
public:
  Init_ReorderMarker_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::marker_interfacing::srv::ReorderMarker_Response success(::marker_interfacing::srv::ReorderMarker_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::srv::ReorderMarker_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::srv::ReorderMarker_Response>()
{
  return marker_interfacing::srv::builder::Init_ReorderMarker_Response_success();
}

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKER__BUILDER_HPP_
