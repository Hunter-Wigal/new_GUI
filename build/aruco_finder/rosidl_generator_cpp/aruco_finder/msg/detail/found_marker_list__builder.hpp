// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_finder:msg/FoundMarkerList.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__BUILDER_HPP_
#define ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_finder/msg/detail/found_marker_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_finder
{

namespace msg
{

namespace builder
{

class Init_FoundMarkerList_count
{
public:
  explicit Init_FoundMarkerList_count(::aruco_finder::msg::FoundMarkerList & msg)
  : msg_(msg)
  {}
  ::aruco_finder::msg::FoundMarkerList count(::aruco_finder::msg::FoundMarkerList::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_finder::msg::FoundMarkerList msg_;
};

class Init_FoundMarkerList_markers
{
public:
  Init_FoundMarkerList_markers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FoundMarkerList_count markers(::aruco_finder::msg::FoundMarkerList::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return Init_FoundMarkerList_count(msg_);
  }

private:
  ::aruco_finder::msg::FoundMarkerList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_finder::msg::FoundMarkerList>()
{
  return aruco_finder::msg::builder::Init_FoundMarkerList_markers();
}

}  // namespace aruco_finder

#endif  // ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__BUILDER_HPP_
