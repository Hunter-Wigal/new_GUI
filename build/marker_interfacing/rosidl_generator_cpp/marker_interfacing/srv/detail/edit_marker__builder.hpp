// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marker_interfacing:srv/EditMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__EDIT_MARKER__BUILDER_HPP_
#define MARKER_INTERFACING__SRV__DETAIL__EDIT_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marker_interfacing/srv/detail/edit_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marker_interfacing
{

namespace srv
{

namespace builder
{

class Init_EditMarker_Request_marker_id
{
public:
  explicit Init_EditMarker_Request_marker_id(::marker_interfacing::srv::EditMarker_Request & msg)
  : msg_(msg)
  {}
  ::marker_interfacing::srv::EditMarker_Request marker_id(::marker_interfacing::srv::EditMarker_Request::_marker_id_type arg)
  {
    msg_.marker_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::srv::EditMarker_Request msg_;
};

class Init_EditMarker_Request_aruco_id_2
{
public:
  explicit Init_EditMarker_Request_aruco_id_2(::marker_interfacing::srv::EditMarker_Request & msg)
  : msg_(msg)
  {}
  Init_EditMarker_Request_marker_id aruco_id_2(::marker_interfacing::srv::EditMarker_Request::_aruco_id_2_type arg)
  {
    msg_.aruco_id_2 = std::move(arg);
    return Init_EditMarker_Request_marker_id(msg_);
  }

private:
  ::marker_interfacing::srv::EditMarker_Request msg_;
};

class Init_EditMarker_Request_aruco_id
{
public:
  explicit Init_EditMarker_Request_aruco_id(::marker_interfacing::srv::EditMarker_Request & msg)
  : msg_(msg)
  {}
  Init_EditMarker_Request_aruco_id_2 aruco_id(::marker_interfacing::srv::EditMarker_Request::_aruco_id_type arg)
  {
    msg_.aruco_id = std::move(arg);
    return Init_EditMarker_Request_aruco_id_2(msg_);
  }

private:
  ::marker_interfacing::srv::EditMarker_Request msg_;
};

class Init_EditMarker_Request_marker_type
{
public:
  explicit Init_EditMarker_Request_marker_type(::marker_interfacing::srv::EditMarker_Request & msg)
  : msg_(msg)
  {}
  Init_EditMarker_Request_aruco_id marker_type(::marker_interfacing::srv::EditMarker_Request::_marker_type_type arg)
  {
    msg_.marker_type = std::move(arg);
    return Init_EditMarker_Request_aruco_id(msg_);
  }

private:
  ::marker_interfacing::srv::EditMarker_Request msg_;
};

class Init_EditMarker_Request_waypoint_error
{
public:
  explicit Init_EditMarker_Request_waypoint_error(::marker_interfacing::srv::EditMarker_Request & msg)
  : msg_(msg)
  {}
  Init_EditMarker_Request_marker_type waypoint_error(::marker_interfacing::srv::EditMarker_Request::_waypoint_error_type arg)
  {
    msg_.waypoint_error = std::move(arg);
    return Init_EditMarker_Request_marker_type(msg_);
  }

private:
  ::marker_interfacing::srv::EditMarker_Request msg_;
};

class Init_EditMarker_Request_alt
{
public:
  explicit Init_EditMarker_Request_alt(::marker_interfacing::srv::EditMarker_Request & msg)
  : msg_(msg)
  {}
  Init_EditMarker_Request_waypoint_error alt(::marker_interfacing::srv::EditMarker_Request::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_EditMarker_Request_waypoint_error(msg_);
  }

private:
  ::marker_interfacing::srv::EditMarker_Request msg_;
};

class Init_EditMarker_Request_lon
{
public:
  explicit Init_EditMarker_Request_lon(::marker_interfacing::srv::EditMarker_Request & msg)
  : msg_(msg)
  {}
  Init_EditMarker_Request_alt lon(::marker_interfacing::srv::EditMarker_Request::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_EditMarker_Request_alt(msg_);
  }

private:
  ::marker_interfacing::srv::EditMarker_Request msg_;
};

class Init_EditMarker_Request_lat
{
public:
  Init_EditMarker_Request_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EditMarker_Request_lon lat(::marker_interfacing::srv::EditMarker_Request::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_EditMarker_Request_lon(msg_);
  }

private:
  ::marker_interfacing::srv::EditMarker_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::srv::EditMarker_Request>()
{
  return marker_interfacing::srv::builder::Init_EditMarker_Request_lat();
}

}  // namespace marker_interfacing


namespace marker_interfacing
{

namespace srv
{

namespace builder
{

class Init_EditMarker_Response_success
{
public:
  Init_EditMarker_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::marker_interfacing::srv::EditMarker_Response success(::marker_interfacing::srv::EditMarker_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::srv::EditMarker_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::srv::EditMarker_Response>()
{
  return marker_interfacing::srv::builder::Init_EditMarker_Response_success();
}

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__SRV__DETAIL__EDIT_MARKER__BUILDER_HPP_
