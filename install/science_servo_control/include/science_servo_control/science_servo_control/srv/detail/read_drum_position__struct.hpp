// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from science_servo_control:srv/ReadDrumPosition.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__STRUCT_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__science_servo_control__srv__ReadDrumPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__science_servo_control__srv__ReadDrumPosition_Request __declspec(deprecated)
#endif

namespace science_servo_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadDrumPosition_Request_
{
  using Type = ReadDrumPosition_Request_<ContainerAllocator>;

  explicit ReadDrumPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drum_id = 0l;
    }
  }

  explicit ReadDrumPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drum_id = 0l;
    }
  }

  // field types and members
  using _drum_id_type =
    int32_t;
  _drum_id_type drum_id;

  // setters for named parameter idiom
  Type & set__drum_id(
    const int32_t & _arg)
  {
    this->drum_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__science_servo_control__srv__ReadDrumPosition_Request
    std::shared_ptr<science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__science_servo_control__srv__ReadDrumPosition_Request
    std::shared_ptr<science_servo_control::srv::ReadDrumPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadDrumPosition_Request_ & other) const
  {
    if (this->drum_id != other.drum_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadDrumPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadDrumPosition_Request_

// alias to use template instance with default allocator
using ReadDrumPosition_Request =
  science_servo_control::srv::ReadDrumPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace science_servo_control


#ifndef _WIN32
# define DEPRECATED__science_servo_control__srv__ReadDrumPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__science_servo_control__srv__ReadDrumPosition_Response __declspec(deprecated)
#endif

namespace science_servo_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadDrumPosition_Response_
{
  using Type = ReadDrumPosition_Response_<ContainerAllocator>;

  explicit ReadDrumPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drum_pos = 0l;
    }
  }

  explicit ReadDrumPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drum_pos = 0l;
    }
  }

  // field types and members
  using _drum_pos_type =
    int32_t;
  _drum_pos_type drum_pos;

  // setters for named parameter idiom
  Type & set__drum_pos(
    const int32_t & _arg)
  {
    this->drum_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__science_servo_control__srv__ReadDrumPosition_Response
    std::shared_ptr<science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__science_servo_control__srv__ReadDrumPosition_Response
    std::shared_ptr<science_servo_control::srv::ReadDrumPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadDrumPosition_Response_ & other) const
  {
    if (this->drum_pos != other.drum_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadDrumPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadDrumPosition_Response_

// alias to use template instance with default allocator
using ReadDrumPosition_Response =
  science_servo_control::srv::ReadDrumPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace science_servo_control

namespace science_servo_control
{

namespace srv
{

struct ReadDrumPosition
{
  using Request = science_servo_control::srv::ReadDrumPosition_Request;
  using Response = science_servo_control::srv::ReadDrumPosition_Response;
};

}  // namespace srv

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__STRUCT_HPP_
