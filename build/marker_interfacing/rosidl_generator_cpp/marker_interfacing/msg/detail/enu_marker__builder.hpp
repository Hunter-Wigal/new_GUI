// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marker_interfacing:msg/ENUMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__BUILDER_HPP_
#define MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marker_interfacing/msg/detail/enu_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marker_interfacing
{

namespace msg
{

namespace builder
{

class Init_ENUMarker_marker_id
{
public:
  explicit Init_ENUMarker_marker_id(::marker_interfacing::msg::ENUMarker & msg)
  : msg_(msg)
  {}
  ::marker_interfacing::msg::ENUMarker marker_id(::marker_interfacing::msg::ENUMarker::_marker_id_type arg)
  {
    msg_.marker_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::msg::ENUMarker msg_;
};

class Init_ENUMarker_aruco_id_2
{
public:
  explicit Init_ENUMarker_aruco_id_2(::marker_interfacing::msg::ENUMarker & msg)
  : msg_(msg)
  {}
  Init_ENUMarker_marker_id aruco_id_2(::marker_interfacing::msg::ENUMarker::_aruco_id_2_type arg)
  {
    msg_.aruco_id_2 = std::move(arg);
    return Init_ENUMarker_marker_id(msg_);
  }

private:
  ::marker_interfacing::msg::ENUMarker msg_;
};

class Init_ENUMarker_aruco_id
{
public:
  explicit Init_ENUMarker_aruco_id(::marker_interfacing::msg::ENUMarker & msg)
  : msg_(msg)
  {}
  Init_ENUMarker_aruco_id_2 aruco_id(::marker_interfacing::msg::ENUMarker::_aruco_id_type arg)
  {
    msg_.aruco_id = std::move(arg);
    return Init_ENUMarker_aruco_id_2(msg_);
  }

private:
  ::marker_interfacing::msg::ENUMarker msg_;
};

class Init_ENUMarker_marker_type
{
public:
  explicit Init_ENUMarker_marker_type(::marker_interfacing::msg::ENUMarker & msg)
  : msg_(msg)
  {}
  Init_ENUMarker_aruco_id marker_type(::marker_interfacing::msg::ENUMarker::_marker_type_type arg)
  {
    msg_.marker_type = std::move(arg);
    return Init_ENUMarker_aruco_id(msg_);
  }

private:
  ::marker_interfacing::msg::ENUMarker msg_;
};

class Init_ENUMarker_waypoint_error
{
public:
  explicit Init_ENUMarker_waypoint_error(::marker_interfacing::msg::ENUMarker & msg)
  : msg_(msg)
  {}
  Init_ENUMarker_marker_type waypoint_error(::marker_interfacing::msg::ENUMarker::_waypoint_error_type arg)
  {
    msg_.waypoint_error = std::move(arg);
    return Init_ENUMarker_marker_type(msg_);
  }

private:
  ::marker_interfacing::msg::ENUMarker msg_;
};

class Init_ENUMarker_waypoint_enu
{
public:
  Init_ENUMarker_waypoint_enu()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ENUMarker_waypoint_error waypoint_enu(::marker_interfacing::msg::ENUMarker::_waypoint_enu_type arg)
  {
    msg_.waypoint_enu = std::move(arg);
    return Init_ENUMarker_waypoint_error(msg_);
  }

private:
  ::marker_interfacing::msg::ENUMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::msg::ENUMarker>()
{
  return marker_interfacing::msg::builder::Init_ENUMarker_waypoint_enu();
}

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__BUILDER_HPP_
