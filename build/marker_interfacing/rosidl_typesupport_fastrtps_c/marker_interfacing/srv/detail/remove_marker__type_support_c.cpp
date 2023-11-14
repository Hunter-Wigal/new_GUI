// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marker_interfacing:srv/RemoveMarker.idl
// generated code does not contain a copyright notice
#include "marker_interfacing/srv/detail/remove_marker__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marker_interfacing/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marker_interfacing/srv/detail/remove_marker__struct.h"
#include "marker_interfacing/srv/detail/remove_marker__functions.h"
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


// forward declare type support functions


using _RemoveMarker_Request__ros_msg_type = marker_interfacing__srv__RemoveMarker_Request;

static bool _RemoveMarker_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RemoveMarker_Request__ros_msg_type * ros_message = static_cast<const _RemoveMarker_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: marker_id
  {
    cdr << ros_message->marker_id;
  }

  return true;
}

static bool _RemoveMarker_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RemoveMarker_Request__ros_msg_type * ros_message = static_cast<_RemoveMarker_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: marker_id
  {
    cdr >> ros_message->marker_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t get_serialized_size_marker_interfacing__srv__RemoveMarker_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RemoveMarker_Request__ros_msg_type * ros_message = static_cast<const _RemoveMarker_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name marker_id
  {
    size_t item_size = sizeof(ros_message->marker_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RemoveMarker_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marker_interfacing__srv__RemoveMarker_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t max_serialized_size_marker_interfacing__srv__RemoveMarker_Request(
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

  // member: marker_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RemoveMarker_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marker_interfacing__srv__RemoveMarker_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RemoveMarker_Request = {
  "marker_interfacing::srv",
  "RemoveMarker_Request",
  _RemoveMarker_Request__cdr_serialize,
  _RemoveMarker_Request__cdr_deserialize,
  _RemoveMarker_Request__get_serialized_size,
  _RemoveMarker_Request__max_serialized_size
};

static rosidl_message_type_support_t _RemoveMarker_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RemoveMarker_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, RemoveMarker_Request)() {
  return &_RemoveMarker_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "marker_interfacing/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "marker_interfacing/srv/detail/remove_marker__struct.h"
// already included above
// #include "marker_interfacing/srv/detail/remove_marker__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _RemoveMarker_Response__ros_msg_type = marker_interfacing__srv__RemoveMarker_Response;

static bool _RemoveMarker_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RemoveMarker_Response__ros_msg_type * ros_message = static_cast<const _RemoveMarker_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _RemoveMarker_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RemoveMarker_Response__ros_msg_type * ros_message = static_cast<_RemoveMarker_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t get_serialized_size_marker_interfacing__srv__RemoveMarker_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RemoveMarker_Response__ros_msg_type * ros_message = static_cast<const _RemoveMarker_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RemoveMarker_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marker_interfacing__srv__RemoveMarker_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t max_serialized_size_marker_interfacing__srv__RemoveMarker_Response(
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

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RemoveMarker_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marker_interfacing__srv__RemoveMarker_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RemoveMarker_Response = {
  "marker_interfacing::srv",
  "RemoveMarker_Response",
  _RemoveMarker_Response__cdr_serialize,
  _RemoveMarker_Response__cdr_deserialize,
  _RemoveMarker_Response__get_serialized_size,
  _RemoveMarker_Response__max_serialized_size
};

static rosidl_message_type_support_t _RemoveMarker_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RemoveMarker_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, RemoveMarker_Response)() {
  return &_RemoveMarker_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "marker_interfacing/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marker_interfacing/srv/remove_marker.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RemoveMarker__callbacks = {
  "marker_interfacing::srv",
  "RemoveMarker",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, RemoveMarker_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, RemoveMarker_Response)(),
};

static rosidl_service_type_support_t RemoveMarker__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RemoveMarker__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, RemoveMarker)() {
  return &RemoveMarker__handle;
}

#if defined(__cplusplus)
}
#endif
