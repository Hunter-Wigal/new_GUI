// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marker_interfacing:msg/ENUMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__STRUCT_HPP_
#define MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoint_enu'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marker_interfacing__msg__ENUMarker __attribute__((deprecated))
#else
# define DEPRECATED__marker_interfacing__msg__ENUMarker __declspec(deprecated)
#endif

namespace marker_interfacing
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ENUMarker_
{
  using Type = ENUMarker_<ContainerAllocator>;

  explicit ENUMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_enu(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_error = 0.0f;
      this->marker_type = "";
      this->aruco_id = 0;
      this->aruco_id_2 = 0;
      this->marker_id = 0;
    }
  }

  explicit ENUMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_enu(_alloc, _init),
    marker_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_error = 0.0f;
      this->marker_type = "";
      this->aruco_id = 0;
      this->aruco_id_2 = 0;
      this->marker_id = 0;
    }
  }

  // field types and members
  using _waypoint_enu_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _waypoint_enu_type waypoint_enu;
  using _waypoint_error_type =
    float;
  _waypoint_error_type waypoint_error;
  using _marker_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _marker_type_type marker_type;
  using _aruco_id_type =
    uint8_t;
  _aruco_id_type aruco_id;
  using _aruco_id_2_type =
    uint8_t;
  _aruco_id_2_type aruco_id_2;
  using _marker_id_type =
    uint8_t;
  _marker_id_type marker_id;

  // setters for named parameter idiom
  Type & set__waypoint_enu(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->waypoint_enu = _arg;
    return *this;
  }
  Type & set__waypoint_error(
    const float & _arg)
  {
    this->waypoint_error = _arg;
    return *this;
  }
  Type & set__marker_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->marker_type = _arg;
    return *this;
  }
  Type & set__aruco_id(
    const uint8_t & _arg)
  {
    this->aruco_id = _arg;
    return *this;
  }
  Type & set__aruco_id_2(
    const uint8_t & _arg)
  {
    this->aruco_id_2 = _arg;
    return *this;
  }
  Type & set__marker_id(
    const uint8_t & _arg)
  {
    this->marker_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marker_interfacing::msg::ENUMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const marker_interfacing::msg::ENUMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marker_interfacing::msg::ENUMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marker_interfacing::msg::ENUMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::msg::ENUMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::msg::ENUMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::msg::ENUMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::msg::ENUMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marker_interfacing::msg::ENUMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marker_interfacing::msg::ENUMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marker_interfacing__msg__ENUMarker
    std::shared_ptr<marker_interfacing::msg::ENUMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marker_interfacing__msg__ENUMarker
    std::shared_ptr<marker_interfacing::msg::ENUMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ENUMarker_ & other) const
  {
    if (this->waypoint_enu != other.waypoint_enu) {
      return false;
    }
    if (this->waypoint_error != other.waypoint_error) {
      return false;
    }
    if (this->marker_type != other.marker_type) {
      return false;
    }
    if (this->aruco_id != other.aruco_id) {
      return false;
    }
    if (this->aruco_id_2 != other.aruco_id_2) {
      return false;
    }
    if (this->marker_id != other.marker_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ENUMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ENUMarker_

// alias to use template instance with default allocator
using ENUMarker =
  marker_interfacing::msg::ENUMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__STRUCT_HPP_
