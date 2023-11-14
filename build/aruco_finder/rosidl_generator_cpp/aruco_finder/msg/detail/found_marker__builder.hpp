// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_finder:msg/FoundMarker.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__BUILDER_HPP_
#define ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_finder/msg/detail/found_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_finder
{

namespace msg
{

namespace builder
{

class Init_FoundMarker_aruco_id
{
public:
  explicit Init_FoundMarker_aruco_id(::aruco_finder::msg::FoundMarker & msg)
  : msg_(msg)
  {}
  ::aruco_finder::msg::FoundMarker aruco_id(::aruco_finder::msg::FoundMarker::_aruco_id_type arg)
  {
    msg_.aruco_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_finder::msg::FoundMarker msg_;
};

class Init_FoundMarker_marker_enu
{
public:
  Init_FoundMarker_marker_enu()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FoundMarker_aruco_id marker_enu(::aruco_finder::msg::FoundMarker::_marker_enu_type arg)
  {
    msg_.marker_enu = std::move(arg);
    return Init_FoundMarker_aruco_id(msg_);
  }

private:
  ::aruco_finder::msg::FoundMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_finder::msg::FoundMarker>()
{
  return aruco_finder::msg::builder::Init_FoundMarker_marker_enu();
}

}  // namespace aruco_finder

#endif  // ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__BUILDER_HPP_
