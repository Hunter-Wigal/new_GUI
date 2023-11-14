// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_finder:msg/FoundMarkerList.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__STRUCT_HPP_
#define ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'markers'
#include "aruco_finder/msg/detail/found_marker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_finder__msg__FoundMarkerList __attribute__((deprecated))
#else
# define DEPRECATED__aruco_finder__msg__FoundMarkerList __declspec(deprecated)
#endif

namespace aruco_finder
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FoundMarkerList_
{
  using Type = FoundMarkerList_<ContainerAllocator>;

  explicit FoundMarkerList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
    }
  }

  explicit FoundMarkerList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
    }
  }

  // field types and members
  using _markers_type =
    std::vector<aruco_finder::msg::FoundMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_finder::msg::FoundMarker_<ContainerAllocator>>>;
  _markers_type markers;
  using _count_type =
    uint8_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__markers(
    const std::vector<aruco_finder::msg::FoundMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_finder::msg::FoundMarker_<ContainerAllocator>>> & _arg)
  {
    this->markers = _arg;
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
    aruco_finder::msg::FoundMarkerList_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_finder::msg::FoundMarkerList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_finder::msg::FoundMarkerList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_finder::msg::FoundMarkerList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_finder::msg::FoundMarkerList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_finder::msg::FoundMarkerList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_finder::msg::FoundMarkerList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_finder::msg::FoundMarkerList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_finder::msg::FoundMarkerList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_finder::msg::FoundMarkerList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_finder__msg__FoundMarkerList
    std::shared_ptr<aruco_finder::msg::FoundMarkerList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_finder__msg__FoundMarkerList
    std::shared_ptr<aruco_finder::msg::FoundMarkerList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FoundMarkerList_ & other) const
  {
    if (this->markers != other.markers) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const FoundMarkerList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FoundMarkerList_

// alias to use template instance with default allocator
using FoundMarkerList =
  aruco_finder::msg::FoundMarkerList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aruco_finder

#endif  // ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__STRUCT_HPP_
