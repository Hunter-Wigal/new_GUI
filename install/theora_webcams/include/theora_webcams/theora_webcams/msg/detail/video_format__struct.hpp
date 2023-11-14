// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from theora_webcams:msg/VideoFormat.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__STRUCT_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'resolutions'
#include "theora_webcams/msg/detail/resolution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__theora_webcams__msg__VideoFormat __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__msg__VideoFormat __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VideoFormat_
{
  using Type = VideoFormat_<ContainerAllocator>;

  explicit VideoFormat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->format = "";
    }
  }

  explicit VideoFormat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : format(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->format = "";
    }
  }

  // field types and members
  using _format_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _format_type format;
  using _resolutions_type =
    std::vector<theora_webcams::msg::Resolution_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<theora_webcams::msg::Resolution_<ContainerAllocator>>>;
  _resolutions_type resolutions;

  // setters for named parameter idiom
  Type & set__format(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->format = _arg;
    return *this;
  }
  Type & set__resolutions(
    const std::vector<theora_webcams::msg::Resolution_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<theora_webcams::msg::Resolution_<ContainerAllocator>>> & _arg)
  {
    this->resolutions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    theora_webcams::msg::VideoFormat_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::msg::VideoFormat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::msg::VideoFormat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::msg::VideoFormat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::msg::VideoFormat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::msg::VideoFormat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::msg::VideoFormat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::msg::VideoFormat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::msg::VideoFormat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::msg::VideoFormat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__msg__VideoFormat
    std::shared_ptr<theora_webcams::msg::VideoFormat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__msg__VideoFormat
    std::shared_ptr<theora_webcams::msg::VideoFormat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VideoFormat_ & other) const
  {
    if (this->format != other.format) {
      return false;
    }
    if (this->resolutions != other.resolutions) {
      return false;
    }
    return true;
  }
  bool operator!=(const VideoFormat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VideoFormat_

// alias to use template instance with default allocator
using VideoFormat =
  theora_webcams::msg::VideoFormat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__STRUCT_HPP_
