// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from science_servo_control:srv/MovePump.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_PUMP__STRUCT_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_PUMP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__science_servo_control__srv__MovePump_Request __attribute__((deprecated))
#else
# define DEPRECATED__science_servo_control__srv__MovePump_Request __declspec(deprecated)
#endif

namespace science_servo_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MovePump_Request_
{
  using Type = MovePump_Request_<ContainerAllocator>;

  explicit MovePump_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump_id = 0l;
      this->ppm_speed = 0l;
      this->duration = 0l;
    }
  }

  explicit MovePump_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump_id = 0l;
      this->ppm_speed = 0l;
      this->duration = 0l;
    }
  }

  // field types and members
  using _pump_id_type =
    int32_t;
  _pump_id_type pump_id;
  using _ppm_speed_type =
    int32_t;
  _ppm_speed_type ppm_speed;
  using _duration_type =
    int32_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__pump_id(
    const int32_t & _arg)
  {
    this->pump_id = _arg;
    return *this;
  }
  Type & set__ppm_speed(
    const int32_t & _arg)
  {
    this->ppm_speed = _arg;
    return *this;
  }
  Type & set__duration(
    const int32_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    science_servo_control::srv::MovePump_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const science_servo_control::srv::MovePump_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<science_servo_control::srv::MovePump_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<science_servo_control::srv::MovePump_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::MovePump_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::MovePump_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::MovePump_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::MovePump_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<science_servo_control::srv::MovePump_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<science_servo_control::srv::MovePump_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__science_servo_control__srv__MovePump_Request
    std::shared_ptr<science_servo_control::srv::MovePump_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__science_servo_control__srv__MovePump_Request
    std::shared_ptr<science_servo_control::srv::MovePump_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovePump_Request_ & other) const
  {
    if (this->pump_id != other.pump_id) {
      return false;
    }
    if (this->ppm_speed != other.ppm_speed) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovePump_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovePump_Request_

// alias to use template instance with default allocator
using MovePump_Request =
  science_servo_control::srv::MovePump_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace science_servo_control


#ifndef _WIN32
# define DEPRECATED__science_servo_control__srv__MovePump_Response __attribute__((deprecated))
#else
# define DEPRECATED__science_servo_control__srv__MovePump_Response __declspec(deprecated)
#endif

namespace science_servo_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MovePump_Response_
{
  using Type = MovePump_Response_<ContainerAllocator>;

  explicit MovePump_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MovePump_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    science_servo_control::srv::MovePump_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const science_servo_control::srv::MovePump_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<science_servo_control::srv::MovePump_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<science_servo_control::srv::MovePump_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::MovePump_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::MovePump_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::MovePump_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::MovePump_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<science_servo_control::srv::MovePump_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<science_servo_control::srv::MovePump_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__science_servo_control__srv__MovePump_Response
    std::shared_ptr<science_servo_control::srv::MovePump_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__science_servo_control__srv__MovePump_Response
    std::shared_ptr<science_servo_control::srv::MovePump_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovePump_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovePump_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovePump_Response_

// alias to use template instance with default allocator
using MovePump_Response =
  science_servo_control::srv::MovePump_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace science_servo_control

namespace science_servo_control
{

namespace srv
{

struct MovePump
{
  using Request = science_servo_control::srv::MovePump_Request;
  using Response = science_servo_control::srv::MovePump_Response;
};

}  // namespace srv

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__MOVE_PUMP__STRUCT_HPP_
