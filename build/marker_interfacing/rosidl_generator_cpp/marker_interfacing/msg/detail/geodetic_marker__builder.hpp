// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marker_interfacing:msg/GeodeticMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER__BUILDER_HPP_
#define MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marker_interfacing/msg/detail/geodetic_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marker_interfacing
{

namespace msg
{

namespace builder
{

class Init_GeodeticMarker_marker_id
{
public:
  explicit Init_GeodeticMarker_marker_id(::marker_interfacing::msg::GeodeticMarker & msg)
  : msg_(msg)
  {}
  ::marker_interfacing::msg::GeodeticMarker marker_id(::marker_interfacing::msg::GeodeticMarker::_marker_id_type arg)
  {
    msg_.marker_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::msg::GeodeticMarker msg_;
};

class Init_GeodeticMarker_aruco_id_2
{
public:
  explicit Init_GeodeticMarker_aruco_id_2(::marker_interfacing::msg::GeodeticMarker & msg)
  : msg_(msg)
  {}
  Init_GeodeticMarker_marker_id aruco_id_2(::marker_interfacing::msg::GeodeticMarker::_aruco_id_2_type arg)
  {
    msg_.aruco_id_2 = std::move(arg);
    return Init_GeodeticMarker_marker_id(msg_);
  }

private:
  ::marker_interfacing::msg::GeodeticMarker msg_;
};

class Init_GeodeticMarker_aruco_id
{
public:
  explicit Init_GeodeticMarker_aruco_id(::marker_interfacing::msg::GeodeticMarker & msg)
  : msg_(msg)
  {}
  Init_GeodeticMarker_aruco_id_2 aruco_id(::marker_interfacing::msg::GeodeticMarker::_aruco_id_type arg)
  {
    msg_.aruco_id = std::move(arg);
    return Init_GeodeticMarker_aruco_id_2(msg_);
  }

private:
  ::marker_interfacing::msg::GeodeticMarker msg_;
};

class Init_GeodeticMarker_marker_type
{
public:
  explicit Init_GeodeticMarker_marker_type(::marker_interfacing::msg::GeodeticMarker & msg)
  : msg_(msg)
  {}
  Init_GeodeticMarker_aruco_id marker_type(::marker_interfacing::msg::GeodeticMarker::_marker_type_type arg)
  {
    msg_.marker_type = std::move(arg);
    return Init_GeodeticMarker_aruco_id(msg_);
  }

private:
  ::marker_interfacing::msg::GeodeticMarker msg_;
};

class Init_GeodeticMarker_waypoint_error
{
public:
  explicit Init_GeodeticMarker_waypoint_error(::marker_interfacing::msg::GeodeticMarker & msg)
  : msg_(msg)
  {}
  Init_GeodeticMarker_marker_type waypoint_error(::marker_interfacing::msg::GeodeticMarker::_waypoint_error_type arg)
  {
    msg_.waypoint_error = std::move(arg);
    return Init_GeodeticMarker_marker_type(msg_);
  }

private:
  ::marker_interfacing::msg::GeodeticMarker msg_;
};

class Init_GeodeticMarker_gps
{
public:
  Init_GeodeticMarker_gps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeodeticMarker_waypoint_error gps(::marker_interfacing::msg::GeodeticMarker::_gps_type arg)
  {
    msg_.gps = std::move(arg);
    return Init_GeodeticMarker_waypoint_error(msg_);
  }

private:
  ::marker_interfacing::msg::GeodeticMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::msg::GeodeticMarker>()
{
  return marker_interfacing::msg::builder::Init_GeodeticMarker_gps();
}

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER__BUILDER_HPP_
