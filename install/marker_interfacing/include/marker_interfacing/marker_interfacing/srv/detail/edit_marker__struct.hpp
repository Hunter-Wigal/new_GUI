// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marker_interfacing:srv/EditMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__EDIT_MARKER__STRUCT_HPP_
#define MARKER_INTERFACING__SRV__DETAIL__EDIT_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marker_interfacing__srv__EditMarker_Request __attribute__((deprecated))
#else
# define DEPRECATED__marker_interfacing__srv__EditMarker_Request __declspec(deprecated)
#endif

namespace marker_interfacing
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EditMarker_Request_
{
  using Type = EditMarker_Request_<ContainerAllocator>;

  explicit EditMarker_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0;
      this->waypoint_error = 0.0f;
      this->marker_type = "";
      this->aruco_id = 0;
      this->aruco_id_2 = 0;
      this->marker_id = 0;
    }
  }

  explicit EditMarker_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : marker_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0;
      this->waypoint_error = 0.0f;
      this->marker_type = "";
      this->aruco_id = 0;
      this->aruco_id_2 = 0;
      this->marker_id = 0;
    }
  }

  // field types and members
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    double;
  _alt_type alt;
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
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__alt(
    const double & _arg)
  {
    this->alt = _arg;
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
    marker_interfacing::srv::EditMarker_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const marker_interfacing::srv::EditMarker_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marker_interfacing::srv::EditMarker_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marker_interfacing::srv::EditMarker_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::srv::EditMarker_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::srv::EditMarker_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::srv::EditMarker_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::srv::EditMarker_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marker_interfacing::srv::EditMarker_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marker_interfacing::srv::EditMarker_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marker_interfacing__srv__EditMarker_Request
    std::shared_ptr<marker_interfacing::srv::EditMarker_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marker_interfacing__srv__EditMarker_Request
    std::shared_ptr<marker_interfacing::srv::EditMarker_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EditMarker_Request_ & other) const
  {
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->alt != other.alt) {
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
  bool operator!=(const EditMarker_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EditMarker_Request_

// alias to use template instance with default allocator
using EditMarker_Request =
  marker_interfacing::srv::EditMarker_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marker_interfacing


#ifndef _WIN32
# define DEPRECATED__marker_interfacing__srv__EditMarker_Response __attribute__((deprecated))
#else
# define DEPRECATED__marker_interfacing__srv__EditMarker_Response __declspec(deprecated)
#endif

namespace marker_interfacing
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EditMarker_Response_
{
  using Type = EditMarker_Response_<ContainerAllocator>;

  explicit EditMarker_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit EditMarker_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marker_interfacing::srv::EditMarker_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const marker_interfacing::srv::EditMarker_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marker_interfacing::srv::EditMarker_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marker_interfacing::srv::EditMarker_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::srv::EditMarker_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::srv::EditMarker_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::srv::EditMarker_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::srv::EditMarker_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marker_interfacing::srv::EditMarker_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marker_interfacing::srv::EditMarker_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marker_interfacing__srv__EditMarker_Response
    std::shared_ptr<marker_interfacing::srv::EditMarker_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marker_interfacing__srv__EditMarker_Response
    std::shared_ptr<marker_interfacing::srv::EditMarker_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EditMarker_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const EditMarker_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EditMarker_Response_

// alias to use template instance with default allocator
using EditMarker_Response =
  marker_interfacing::srv::EditMarker_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marker_interfacing

namespace marker_interfacing
{

namespace srv
{

struct EditMarker
{
  using Request = marker_interfacing::srv::EditMarker_Request;
  using Response = marker_interfacing::srv::EditMarker_Response;
};

}  // namespace srv

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__SRV__DETAIL__EDIT_MARKER__STRUCT_HPP_
