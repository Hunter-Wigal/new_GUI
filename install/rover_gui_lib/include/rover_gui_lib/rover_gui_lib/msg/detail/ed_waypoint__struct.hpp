// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rover_gui_lib:msg/EDWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__STRUCT_HPP_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rover_gui_lib__msg__EDWaypoint __attribute__((deprecated))
#else
# define DEPRECATED__rover_gui_lib__msg__EDWaypoint __declspec(deprecated)
#endif

namespace rover_gui_lib
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EDWaypoint_
{
  using Type = EDWaypoint_<ContainerAllocator>;

  explicit EDWaypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->radius = 0.0;
      this->name = "";
    }
  }

  explicit EDWaypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->radius = 0.0;
      this->name = "";
    }
  }

  // field types and members
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _radius_type =
    double;
  _radius_type radius;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rover_gui_lib::msg::EDWaypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const rover_gui_lib::msg::EDWaypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rover_gui_lib__msg__EDWaypoint
    std::shared_ptr<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rover_gui_lib__msg__EDWaypoint
    std::shared_ptr<rover_gui_lib::msg::EDWaypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EDWaypoint_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const EDWaypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EDWaypoint_

// alias to use template instance with default allocator
using EDWaypoint =
  rover_gui_lib::msg::EDWaypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rover_gui_lib

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__STRUCT_HPP_
