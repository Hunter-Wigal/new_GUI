// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rover_gui_lib:msg/EDWaypointList.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__BUILDER_HPP_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rover_gui_lib/msg/detail/ed_waypoint_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rover_gui_lib
{

namespace msg
{

namespace builder
{

class Init_EDWaypointList_count
{
public:
  explicit Init_EDWaypointList_count(::rover_gui_lib::msg::EDWaypointList & msg)
  : msg_(msg)
  {}
  ::rover_gui_lib::msg::EDWaypointList count(::rover_gui_lib::msg::EDWaypointList::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_gui_lib::msg::EDWaypointList msg_;
};

class Init_EDWaypointList_waypoints
{
public:
  Init_EDWaypointList_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EDWaypointList_count waypoints(::rover_gui_lib::msg::EDWaypointList::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_EDWaypointList_count(msg_);
  }

private:
  ::rover_gui_lib::msg::EDWaypointList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_gui_lib::msg::EDWaypointList>()
{
  return rover_gui_lib::msg::builder::Init_EDWaypointList_waypoints();
}

}  // namespace rover_gui_lib

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__BUILDER_HPP_
