// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from theora_webcams:msg/VideoFormatList.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__STRUCT_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'formats'
#include "theora_webcams/msg/detail/video_format__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__theora_webcams__msg__VideoFormatList __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__msg__VideoFormatList __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VideoFormatList_
{
  using Type = VideoFormatList_<ContainerAllocator>;

  explicit VideoFormatList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit VideoFormatList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _formats_type =
    std::vector<theora_webcams::msg::VideoFormat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<theora_webcams::msg::VideoFormat_<ContainerAllocator>>>;
  _formats_type formats;

  // setters for named parameter idiom
  Type & set__formats(
    const std::vector<theora_webcams::msg::VideoFormat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<theora_webcams::msg::VideoFormat_<ContainerAllocator>>> & _arg)
  {
    this->formats = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    theora_webcams::msg::VideoFormatList_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::msg::VideoFormatList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::msg::VideoFormatList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::msg::VideoFormatList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::msg::VideoFormatList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::msg::VideoFormatList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::msg::VideoFormatList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::msg::VideoFormatList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::msg::VideoFormatList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::msg::VideoFormatList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__msg__VideoFormatList
    std::shared_ptr<theora_webcams::msg::VideoFormatList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__msg__VideoFormatList
    std::shared_ptr<theora_webcams::msg::VideoFormatList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VideoFormatList_ & other) const
  {
    if (this->formats != other.formats) {
      return false;
    }
    return true;
  }
  bool operator!=(const VideoFormatList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VideoFormatList_

// alias to use template instance with default allocator
using VideoFormatList =
  theora_webcams::msg::VideoFormatList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__STRUCT_HPP_
