// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marker_interfacing:srv/RemoveMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__REMOVE_MARKER__STRUCT_HPP_
#define MARKER_INTERFACING__SRV__DETAIL__REMOVE_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marker_interfacing__srv__RemoveMarker_Request __attribute__((deprecated))
#else
# define DEPRECATED__marker_interfacing__srv__RemoveMarker_Request __declspec(deprecated)
#endif

namespace marker_interfacing
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RemoveMarker_Request_
{
  using Type = RemoveMarker_Request_<ContainerAllocator>;

  explicit RemoveMarker_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_id = 0;
    }
  }

  explicit RemoveMarker_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_id = 0;
    }
  }

  // field types and members
  using _marker_id_type =
    uint8_t;
  _marker_id_type marker_id;

  // setters for named parameter idiom
  Type & set__marker_id(
    const uint8_t & _arg)
  {
    this->marker_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marker_interfacing__srv__RemoveMarker_Request
    std::shared_ptr<marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marker_interfacing__srv__RemoveMarker_Request
    std::shared_ptr<marker_interfacing::srv::RemoveMarker_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoveMarker_Request_ & other) const
  {
    if (this->marker_id != other.marker_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoveMarker_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoveMarker_Request_

// alias to use template instance with default allocator
using RemoveMarker_Request =
  marker_interfacing::srv::RemoveMarker_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marker_interfacing


#ifndef _WIN32
# define DEPRECATED__marker_interfacing__srv__RemoveMarker_Response __attribute__((deprecated))
#else
# define DEPRECATED__marker_interfacing__srv__RemoveMarker_Response __declspec(deprecated)
#endif

namespace marker_interfacing
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RemoveMarker_Response_
{
  using Type = RemoveMarker_Response_<ContainerAllocator>;

  explicit RemoveMarker_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit RemoveMarker_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marker_interfacing__srv__RemoveMarker_Response
    std::shared_ptr<marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marker_interfacing__srv__RemoveMarker_Response
    std::shared_ptr<marker_interfacing::srv::RemoveMarker_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoveMarker_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoveMarker_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoveMarker_Response_

// alias to use template instance with default allocator
using RemoveMarker_Response =
  marker_interfacing::srv::RemoveMarker_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace marker_interfacing

namespace marker_interfacing
{

namespace srv
{

struct RemoveMarker
{
  using Request = marker_interfacing::srv::RemoveMarker_Request;
  using Response = marker_interfacing::srv::RemoveMarker_Response;
};

}  // namespace srv

}  // namespace marker_interfacing

#endif  // MARKER_INTERFACING__SRV__DETAIL__REMOVE_MARKER__STRUCT_HPP_