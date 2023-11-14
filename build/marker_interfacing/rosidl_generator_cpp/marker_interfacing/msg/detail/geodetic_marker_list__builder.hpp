// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marker_interfacing:msg/GeodeticMarkerList.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER_LIST__BUILDER_HPP_
#define MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marker_interfacing/msg/detail/geodetic_marker_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marker_interfacing
{

namespace msg
{

namespace builder
{

class Init_GeodeticMarkerList_count
{
public:
  explicit Init_GeodeticMarkerList_count(::marker_interfacing::msg::GeodeticMarkerList & msg)
  : msg_(msg)
  {}
  ::marker_interfacing::msg::GeodeticMarkerList count(::marker_interfacing::msg::GeodeticMarkerList::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marker_interfacing::msg::GeodeticMarkerList msg_;
};

class Init_GeodeticMarkerList_markers
{
public:
  Init_GeodeticMarkerList_markers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeodeticMarkerList_count markers(::marker_interfacing::msg::GeodeticMarkerList::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return Init_GeodeticMarkerList_count(msg_);
  }

private:
  ::marker_interfacing::msg::GeodeticMarkerList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marker_interfacing::msg::GeodeticMarkerList>()
{
  return marker_interfacing::msg::builder::Init_GeodeticMarkerList_markers();
}

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER_LIST__BUILDER_HPP_
