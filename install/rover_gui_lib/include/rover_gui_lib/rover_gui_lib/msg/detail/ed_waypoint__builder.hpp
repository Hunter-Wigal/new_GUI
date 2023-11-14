// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rover_gui_lib:msg/EDWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__BUILDER_HPP_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rover_gui_lib/msg/detail/ed_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rover_gui_lib
{

namespace msg
{

namespace builder
{

class Init_EDWaypoint_name
{
public:
  explicit Init_EDWaypoint_name(::rover_gui_lib::msg::EDWaypoint & msg)
  : msg_(msg)
  {}
  ::rover_gui_lib::msg::EDWaypoint name(::rover_gui_lib::msg::EDWaypoint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_gui_lib::msg::EDWaypoint msg_;
};

class Init_EDWaypoint_radius
{
public:
  explicit Init_EDWaypoint_radius(::rover_gui_lib::msg::EDWaypoint & msg)
  : msg_(msg)
  {}
  Init_EDWaypoint_name radius(::rover_gui_lib::msg::EDWaypoint::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_EDWaypoint_name(msg_);
  }

private:
  ::rover_gui_lib::msg::EDWaypoint msg_;
};

class Init_EDWaypoint_longitude
{
public:
  explicit Init_EDWaypoint_longitude(::rover_gui_lib::msg::EDWaypoint & msg)
  : msg_(msg)
  {}
  Init_EDWaypoint_radius longitude(::rover_gui_lib::msg::EDWaypoint::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_EDWaypoint_radius(msg_);
  }

private:
  ::rover_gui_lib::msg::EDWaypoint msg_;
};

class Init_EDWaypoint_latitude
{
public:
  Init_EDWaypoint_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EDWaypoint_longitude latitude(::rover_gui_lib::msg::EDWaypoint::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_EDWaypoint_longitude(msg_);
  }

private:
  ::rover_gui_lib::msg::EDWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_gui_lib::msg::EDWaypoint>()
{
  return rover_gui_lib::msg::builder::Init_EDWaypoint_latitude();
}

}  // namespace rover_gui_lib

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__BUILDER_HPP_
