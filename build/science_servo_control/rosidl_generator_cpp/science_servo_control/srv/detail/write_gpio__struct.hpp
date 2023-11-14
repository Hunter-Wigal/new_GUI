// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from science_servo_control:srv/WriteGPIO.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__WRITE_GPIO__STRUCT_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__WRITE_GPIO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__science_servo_control__srv__WriteGPIO_Request __attribute__((deprecated))
#else
# define DEPRECATED__science_servo_control__srv__WriteGPIO_Request __declspec(deprecated)
#endif

namespace science_servo_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WriteGPIO_Request_
{
  using Type = WriteGPIO_Request_<ContainerAllocator>;

  explicit WriteGPIO_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_id = 0l;
      this->pin_value = 0l;
    }
  }

  explicit WriteGPIO_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_id = 0l;
      this->pin_value = 0l;
    }
  }

  // field types and members
  using _pin_id_type =
    int32_t;
  _pin_id_type pin_id;
  using _pin_value_type =
    int32_t;
  _pin_value_type pin_value;

  // setters for named parameter idiom
  Type & set__pin_id(
    const int32_t & _arg)
  {
    this->pin_id = _arg;
    return *this;
  }
  Type & set__pin_value(
    const int32_t & _arg)
  {
    this->pin_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__science_servo_control__srv__WriteGPIO_Request
    std::shared_ptr<science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__science_servo_control__srv__WriteGPIO_Request
    std::shared_ptr<science_servo_control::srv::WriteGPIO_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WriteGPIO_Request_ & other) const
  {
    if (this->pin_id != other.pin_id) {
      return false;
    }
    if (this->pin_value != other.pin_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const WriteGPIO_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WriteGPIO_Request_

// alias to use template instance with default allocator
using WriteGPIO_Request =
  science_servo_control::srv::WriteGPIO_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace science_servo_control


#ifndef _WIN32
# define DEPRECATED__science_servo_control__srv__WriteGPIO_Response __attribute__((deprecated))
#else
# define DEPRECATED__science_servo_control__srv__WriteGPIO_Response __declspec(deprecated)
#endif

namespace science_servo_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WriteGPIO_Response_
{
  using Type = WriteGPIO_Response_<ContainerAllocator>;

  explicit WriteGPIO_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit WriteGPIO_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__science_servo_control__srv__WriteGPIO_Response
    std::shared_ptr<science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__science_servo_control__srv__WriteGPIO_Response
    std::shared_ptr<science_servo_control::srv::WriteGPIO_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WriteGPIO_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const WriteGPIO_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WriteGPIO_Response_

// alias to use template instance with default allocator
using WriteGPIO_Response =
  science_servo_control::srv::WriteGPIO_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace science_servo_control

namespace science_servo_control
{

namespace srv
{

struct WriteGPIO
{
  using Request = science_servo_control::srv::WriteGPIO_Request;
  using Response = science_servo_control::srv::WriteGPIO_Response;
};

}  // namespace srv

}  // namespace science_servo_control

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__WRITE_GPIO__STRUCT_HPP_
