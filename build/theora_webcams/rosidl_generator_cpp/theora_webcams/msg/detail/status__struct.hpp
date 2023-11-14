// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from theora_webcams:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__theora_webcams__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__msg__Status __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->framerate_numerator = 0l;
      this->framerate_denominator = 0l;
      this->exposure = 0.0f;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->framerate_numerator = 0l;
      this->framerate_denominator = 0l;
      this->exposure = 0.0f;
    }
  }

  // field types and members
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
  using _framerate_numerator_type =
    int32_t;
  _framerate_numerator_type framerate_numerator;
  using _framerate_denominator_type =
    int32_t;
  _framerate_denominator_type framerate_denominator;
  using _exposure_type =
    float;
  _exposure_type exposure;

  // setters for named parameter idiom
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__framerate_numerator(
    const int32_t & _arg)
  {
    this->framerate_numerator = _arg;
    return *this;
  }
  Type & set__framerate_denominator(
    const int32_t & _arg)
  {
    this->framerate_denominator = _arg;
    return *this;
  }
  Type & set__exposure(
    const float & _arg)
  {
    this->exposure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    theora_webcams::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__msg__Status
    std::shared_ptr<theora_webcams::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__msg__Status
    std::shared_ptr<theora_webcams::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->framerate_numerator != other.framerate_numerator) {
      return false;
    }
    if (this->framerate_denominator != other.framerate_denominator) {
      return false;
    }
    if (this->exposure != other.exposure) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  theora_webcams::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__MSG__DETAIL__STATUS__STRUCT_HPP_
