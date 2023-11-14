// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rover_gui_lib:msg/EDWaypointList.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__STRUCT_HPP_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
#include "rover_gui_lib/msg/detail/ed_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rover_gui_lib__msg__EDWaypointList __attribute__((deprecated))
#else
# define DEPRECATED__rover_gui_lib__msg__EDWaypointList __declspec(deprecated)
#endif

namespace rover_gui_lib
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EDWaypointList_
{
  using Type = EDWaypointList_<ContainerAllocator>;

  explicit EDWaypointList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
    }
  }

  explicit EDWaypointList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
    }
  }

  // field types and members
  using _waypoints_type =
    std::vector<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _count_type =
    uint8_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__waypoints(
    const std::vector<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__count(
    const uint8_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rover_gui_lib::msg::EDWaypointList_<ContainerAllocator> *;
  using ConstRawPtr =
    const rover_gui_lib::msg::EDWaypointList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rover_gui_lib::msg::EDWaypointList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rover_gui_lib::msg::EDWaypointList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rover_gui_lib::msg::EDWaypointList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rover_gui_lib::msg::EDWaypointList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rover_gui_lib::msg::EDWaypointList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rover_gui_lib::msg::EDWaypointList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rover_gui_lib::msg::EDWaypointList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rover_gui_lib::msg::EDWaypointList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rover_gui_lib__msg__EDWaypointList
    std::shared_ptr<rover_gui_lib::msg::EDWaypointList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rover_gui_lib__msg__EDWaypointList
    std::shared_ptr<rover_gui_lib::msg::EDWaypointList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EDWaypointList_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const EDWaypointList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EDWaypointList_

// alias to use template instance with default allocator
using EDWaypointList =
  rover_gui_lib::msg::EDWaypointList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rover_gui_lib

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__STRUCT_HPP_
