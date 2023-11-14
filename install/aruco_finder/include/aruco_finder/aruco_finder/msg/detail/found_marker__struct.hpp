// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_finder:msg/FoundMarker.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__STRUCT_HPP_
#define ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'marker_enu'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_finder__msg__FoundMarker __attribute__((deprecated))
#else
# define DEPRECATED__aruco_finder__msg__FoundMarker __declspec(deprecated)
#endif

namespace aruco_finder
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FoundMarker_
{
  using Type = FoundMarker_<ContainerAllocator>;

  explicit FoundMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : marker_enu(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aruco_id = 0;
    }
  }

  explicit FoundMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : marker_enu(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aruco_id = 0;
    }
  }

  // field types and members
  using _marker_enu_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _marker_enu_type marker_enu;
  using _aruco_id_type =
    uint8_t;
  _aruco_id_type aruco_id;

  // setters for named parameter idiom
  Type & set__marker_enu(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->marker_enu = _arg;
    return *this;
  }
  Type & set__aruco_id(
    const uint8_t & _arg)
  {
    this->aruco_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_finder::msg::FoundMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_finder::msg::FoundMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_finder::msg::FoundMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_finder::msg::FoundMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_finder::msg::FoundMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_finder::msg::FoundMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_finder::msg::FoundMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_finder::msg::FoundMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_finder::msg::FoundMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_finder::msg::FoundMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_finder__msg__FoundMarker
    std::shared_ptr<aruco_finder::msg::FoundMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_finder__msg__FoundMarker
    std::shared_ptr<aruco_finder::msg::FoundMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FoundMarker_ & other) const
  {
    if (this->marker_enu != other.marker_enu) {
      return false;
    }
    if (this->aruco_id != other.aruco_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FoundMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FoundMarker_

// alias to use template instance with default allocator
using FoundMarker =
  aruco_finder::msg::FoundMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aruco_finder

#endif  // ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__STRUCT_HPP_
