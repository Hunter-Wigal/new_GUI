// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from theora_webcams:msg/Framerate.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__STRUCT_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__theora_webcams__msg__Framerate __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__msg__Framerate __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Framerate_
{
  using Type = Framerate_<ContainerAllocator>;

  explicit Framerate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->numerator = 0l;
      this->denominator = 0l;
    }
  }

  explicit Framerate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->numerator = 0l;
      this->denominator = 0l;
    }
  }

  // field types and members
  using _numerator_type =
    int32_t;
  _numerator_type numerator;
  using _denominator_type =
    int32_t;
  _denominator_type denominator;

  // setters for named parameter idiom
  Type & set__numerator(
    const int32_t & _arg)
  {
    this->numerator = _arg;
    return *this;
  }
  Type & set__denominator(
    const int32_t & _arg)
  {
    this->denominator = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    theora_webcams::msg::Framerate_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::msg::Framerate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::msg::Framerate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::msg::Framerate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::msg::Framerate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::msg::Framerate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::msg::Framerate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::msg::Framerate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::msg::Framerate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::msg::Framerate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__msg__Framerate
    std::shared_ptr<theora_webcams::msg::Framerate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__msg__Framerate
    std::shared_ptr<theora_webcams::msg::Framerate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Framerate_ & other) const
  {
    if (this->numerator != other.numerator) {
      return false;
    }
    if (this->denominator != other.denominator) {
      return false;
    }
    return true;
  }
  bool operator!=(const Framerate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Framerate_

// alias to use template instance with default allocator
using Framerate =
  theora_webcams::msg::Framerate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__STRUCT_HPP_
