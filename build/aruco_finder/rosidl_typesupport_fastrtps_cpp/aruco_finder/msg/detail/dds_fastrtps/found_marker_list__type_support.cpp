// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aruco_finder:msg/FoundMarkerList.idl
// generated code does not contain a copyright notice
#include "aruco_finder/msg/detail/found_marker_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aruco_finder/msg/detail/found_marker_list__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace aruco_finder
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const aruco_finder::msg::FoundMarker &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  aruco_finder::msg::FoundMarker &);
size_t get_serialized_size(
  const aruco_finder::msg::FoundMarker &,
  size_t current_alignment);
size_t
max_serialized_size_FoundMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace aruco_finder


namespace aruco_finder
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_finder
cdr_serialize(
  const aruco_finder::msg::FoundMarkerList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: markers
  {
    size_t size = ros_message.markers.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      aruco_finder::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.markers[i],
        cdr);
    }
  }
  // Member: count
  cdr << ros_message.count;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_finder
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aruco_finder::msg::FoundMarkerList & ros_message)
{
  // Member: markers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.markers.resize(size);
    for (size_t i = 0; i < size; i++) {
      aruco_finder::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.markers[i]);
    }
  }

  // Member: count
  cdr >> ros_message.count;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_finder
get_serialized_size(
  const aruco_finder::msg::FoundMarkerList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: markers
  {
    size_t array_size = ros_message.markers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        aruco_finder::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.markers[index], current_alignment);
    }
  }
  // Member: count
  {
    size_t item_size = sizeof(ros_message.count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_finder
max_serialized_size_FoundMarkerList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: markers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        aruco_finder::msg::typesupport_fastrtps_cpp::max_serialized_size_FoundMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _FoundMarkerList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const aruco_finder::msg::FoundMarkerList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FoundMarkerList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aruco_finder::msg::FoundMarkerList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FoundMarkerList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aruco_finder::msg::FoundMarkerList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FoundMarkerList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FoundMarkerList(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FoundMarkerList__callbacks = {
  "aruco_finder::msg",
  "FoundMarkerList",
  _FoundMarkerList__cdr_serialize,
  _FoundMarkerList__cdr_deserialize,
  _FoundMarkerList__get_serialized_size,
  _FoundMarkerList__max_serialized_size
};

static rosidl_message_type_support_t _FoundMarkerList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FoundMarkerList__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aruco_finder

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_aruco_finder
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_finder::msg::FoundMarkerList>()
{
  return &aruco_finder::msg::typesupport_fastrtps_cpp::_FoundMarkerList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aruco_finder, msg, FoundMarkerList)() {
  return &aruco_finder::msg::typesupport_fastrtps_cpp::_FoundMarkerList__handle;
}

#ifdef __cplusplus
}
#endif
