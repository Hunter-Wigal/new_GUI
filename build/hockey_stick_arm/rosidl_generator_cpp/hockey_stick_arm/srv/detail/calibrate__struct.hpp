// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hockey_stick_arm:srv/Calibrate.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_STICK_ARM__SRV__DETAIL__CALIBRATE__STRUCT_HPP_
#define HOCKEY_STICK_ARM__SRV__DETAIL__CALIBRATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hockey_stick_arm__srv__Calibrate_Request __attribute__((deprecated))
#else
# define DEPRECATED__hockey_stick_arm__srv__Calibrate_Request __declspec(deprecated)
#endif

namespace hockey_stick_arm
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calibrate_Request_
{
  using Type = Calibrate_Request_<ContainerAllocator>;

  explicit Calibrate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value1 = 0.0f;
      this->value2 = 0.0f;
    }
  }

  explicit Calibrate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value1 = 0.0f;
      this->value2 = 0.0f;
    }
  }

  // field types and members
  using _value1_type =
    float;
  _value1_type value1;
  using _value2_type =
    float;
  _value2_type value2;

  // setters for named parameter idiom
  Type & set__value1(
    const float & _arg)
  {
    this->value1 = _arg;
    return *this;
  }
  Type & set__value2(
    const float & _arg)
  {
    this->value2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hockey_stick_arm__srv__Calibrate_Request
    std::shared_ptr<hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hockey_stick_arm__srv__Calibrate_Request
    std::shared_ptr<hockey_stick_arm::srv::Calibrate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calibrate_Request_ & other) const
  {
    if (this->value1 != other.value1) {
      return false;
    }
    if (this->value2 != other.value2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calibrate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calibrate_Request_

// alias to use template instance with default allocator
using Calibrate_Request =
  hockey_stick_arm::srv::Calibrate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hockey_stick_arm


#ifndef _WIN32
# define DEPRECATED__hockey_stick_arm__srv__Calibrate_Response __attribute__((deprecated))
#else
# define DEPRECATED__hockey_stick_arm__srv__Calibrate_Response __declspec(deprecated)
#endif

namespace hockey_stick_arm
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calibrate_Response_
{
  using Type = Calibrate_Response_<ContainerAllocator>;

  explicit Calibrate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Calibrate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hockey_stick_arm__srv__Calibrate_Response
    std::shared_ptr<hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hockey_stick_arm__srv__Calibrate_Response
    std::shared_ptr<hockey_stick_arm::srv::Calibrate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calibrate_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calibrate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calibrate_Response_

// alias to use template instance with default allocator
using Calibrate_Response =
  hockey_stick_arm::srv::Calibrate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hockey_stick_arm

namespace hockey_stick_arm
{

namespace srv
{

struct Calibrate
{
  using Request = hockey_stick_arm::srv::Calibrate_Request;
  using Response = hockey_stick_arm::srv::Calibrate_Response;
};

}  // namespace srv

}  // namespace hockey_stick_arm

#endif  // HOCKEY_STICK_ARM__SRV__DETAIL__CALIBRATE__STRUCT_HPP_
