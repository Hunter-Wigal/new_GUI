// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from science_servo_control:srv/RaiseLinearActuator.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__RAISE_LINEAR_ACTUATOR__STRUCT_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__RAISE_LINEAR_ACTUATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__science_servo_control__srv__RaiseLinearActuator_Request __attribute__((deprecated))
#else
# define DEPRECATED__science_servo_control__srv__RaiseLinearActuator_Request __declspec(deprecated)
#endif

namespace science_servo_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RaiseLinearActuator_Request_
{
  using Type = RaiseLinearActuator_Request_<ContainerAllocator>;

  explicit RaiseLinearActuator_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_id = 0l;
    }
  }

  explicit RaiseLinearActuator_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_id = 0l;
    }
  }

  // field types and members
  using _actuator_id_type =
    int32_t;
  _actuator_id_type actuator_id;

  // setters for named parameter idiom
  Type & set__actuator_id(
    const int32_t & _arg)
  {
    this->actuator_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__science_servo_control__srv__RaiseLinearActuator_Request
    std::shared_ptr<science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__science_servo_control__srv__RaiseLinearActuator_Request
    std::shared_ptr<science_servo_control::srv::RaiseLinearActuator_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RaiseLinearActuator_Request_ & other) const
  {
    if (this->actuator_id != other.actuator_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RaiseLinearActuator_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RaiseLinearActuator_Request_

// alias to use template instance with default allocator
using RaiseLinearActuator_Request =
  science_servo_control::srv::RaiseLinearActuator_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace science_servo_control


#ifndef _WIN32
# define DEPRECATED__science_servo_control__srv__RaiseLinearActuator_Response __attribute__((deprecated))
#else
# define DEPRECATED__science_servo_control__srv__RaiseLinearActuator_Response __declspec(deprecated)
#endif

namespace science_servo_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RaiseLinearActuator_Response_
{
  using Type = RaiseLinearActuator_Response_<ContainerAllocator>;

  explicit RaiseLinearActuator_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RaiseLinearActuator_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__science_servo_control__srv__RaiseLinearActuator_Response
    std::shared_ptr<science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__science_servo_control__srv__RaiseLinearActuator_Response
    std::shared_ptr<science_servo_control::srv::RaiseLinearActuator_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RaiseLinearActuator_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RaiseLinearActuator_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RaiseLinearActuator_Response_

// alias to use template instance with default allocator
using RaiseLinearActuator_Response =
  science_servo_control::srv::RaiseLinearActuator_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace science_servo_control

namespace science_servo_control
{

namespace srv
{

struct RaiseLinearActuator
{
  using Request = science_servo_control::srv::RaiseLinearActuator_Request;
  using Response = science_servo_control::srv::RaiseLinearActuator_Response;
};

}  // namespace srv

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__RAISE_LINEAR_ACTUATOR__STRUCT_HPP_
