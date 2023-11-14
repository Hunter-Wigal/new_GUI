// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marker_interfacing:msg/GeodeticMarkerList.idl
// generated code does not contain a copyright notice
#include "marker_interfacing/msg/detail/geodetic_marker_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marker_interfacing/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marker_interfacing/msg/detail/geodetic_marker_list__struct.h"
#include "marker_interfacing/msg/detail/geodetic_marker_list__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "marker_interfacing/msg/detail/geodetic_marker__functions.h"  // markers

// forward declare type support functions
size_t get_serialized_size_marker_interfacing__msg__GeodeticMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_marker_interfacing__msg__GeodeticMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, msg, GeodeticMarker)();


using _GeodeticMarkerList__ros_msg_type = marker_interfacing__msg__GeodeticMarkerList;

static bool _GeodeticMarkerList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GeodeticMarkerList__ros_msg_type * ros_message = static_cast<const _GeodeticMarkerList__ros_msg_type *>(untyped_ros_message);
  // Field name: markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, marker_interfacing, msg, GeodeticMarker
      )()->data);
    size_t size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: count
  {
    cdr << ros_message->count;
  }

  return true;
}

static bool _GeodeticMarkerList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GeodeticMarkerList__ros_msg_type * ros_message = static_cast<_GeodeticMarkerList__ros_msg_type *>(untyped_ros_message);
  // Field name: markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, marker_interfacing, msg, GeodeticMarker
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->markers.data) {
      marker_interfacing__msg__GeodeticMarker__Sequence__fini(&ros_message->markers);
    }
    if (!marker_interfacing__msg__GeodeticMarker__Sequence__init(&ros_message->markers, size)) {
      fprintf(stderr, "failed to create array for field 'markers'");
      return false;
    }
    auto array_ptr = ros_message->markers.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: count
  {
    cdr >> ros_message->count;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t get_serialized_size_marker_interfacing__msg__GeodeticMarkerList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GeodeticMarkerList__ros_msg_type * ros_message = static_cast<const _GeodeticMarkerList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name markers
  {
    size_t array_size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_marker_interfacing__msg__GeodeticMarker(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name count
  {
    size_t item_size = sizeof(ros_message->count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GeodeticMarkerList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marker_interfacing__msg__GeodeticMarkerList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t max_serialized_size_marker_interfacing__msg__GeodeticMarkerList(
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

  // member: markers
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
        max_serialized_size_marker_interfacing__msg__GeodeticMarker(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GeodeticMarkerList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marker_interfacing__msg__GeodeticMarkerList(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GeodeticMarkerList = {
  "marker_interfacing::msg",
  "GeodeticMarkerList",
  _GeodeticMarkerList__cdr_serialize,
  _GeodeticMarkerList__cdr_deserialize,
  _GeodeticMarkerList__get_serialized_size,
  _GeodeticMarkerList__max_serialized_size
};

static rosidl_message_type_support_t _GeodeticMarkerList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GeodeticMarkerList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, msg, GeodeticMarkerList)() {
  return &_GeodeticMarkerList__type_support;
}

#if defined(__cplusplus)
}
#endif
