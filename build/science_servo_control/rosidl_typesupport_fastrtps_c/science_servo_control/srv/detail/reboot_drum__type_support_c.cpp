// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from science_servo_control:srv/RebootDrum.idl
// generated code does not contain a copyright notice
#include "science_servo_control/srv/detail/reboot_drum__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "science_servo_control/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "science_servo_control/srv/detail/reboot_drum__struct.h"
#include "science_servo_control/srv/detail/reboot_drum__functions.h"
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


using _RebootDrum_Request__ros_msg_type = science_servo_control__srv__RebootDrum_Request;

static bool _RebootDrum_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RebootDrum_Request__ros_msg_type * ros_message = static_cast<const _RebootDrum_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: drum_id
  {
    cdr << ros_message->drum_id;
  }

  return true;
}

static bool _RebootDrum_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RebootDrum_Request__ros_msg_type * ros_message = static_cast<_RebootDrum_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: drum_id
  {
    cdr >> ros_message->drum_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_science_servo_control
size_t get_serialized_size_science_servo_control__srv__RebootDrum_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RebootDrum_Request__ros_msg_type * ros_message = static_cast<const _RebootDrum_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name drum_id
  {
    size_t item_size = sizeof(ros_message->drum_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RebootDrum_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_science_servo_control__srv__RebootDrum_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_science_servo_control
size_t max_serialized_size_science_servo_control__srv__RebootDrum_Request(
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

  // member: drum_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RebootDrum_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_science_servo_control__srv__RebootDrum_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RebootDrum_Request = {
  "science_servo_control::srv",
  "RebootDrum_Request",
  _RebootDrum_Request__cdr_serialize,
  _RebootDrum_Request__cdr_deserialize,
  _RebootDrum_Request__get_serialized_size,
  _RebootDrum_Request__max_serialized_size
};

static rosidl_message_type_support_t _RebootDrum_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RebootDrum_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, RebootDrum_Request)() {
  return &_RebootDrum_Request__type_support;
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
// #include "science_servo_control/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "science_servo_control/srv/detail/reboot_drum__struct.h"
// already included above
// #include "science_servo_control/srv/detail/reboot_drum__functions.h"
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


using _RebootDrum_Response__ros_msg_type = science_servo_control__srv__RebootDrum_Response;

static bool _RebootDrum_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RebootDrum_Response__ros_msg_type * ros_message = static_cast<const _RebootDrum_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _RebootDrum_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RebootDrum_Response__ros_msg_type * ros_message = static_cast<_RebootDrum_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_science_servo_control
size_t get_serialized_size_science_servo_control__srv__RebootDrum_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RebootDrum_Response__ros_msg_type * ros_message = static_cast<const _RebootDrum_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RebootDrum_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_science_servo_control__srv__RebootDrum_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_science_servo_control
size_t max_serialized_size_science_servo_control__srv__RebootDrum_Response(
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

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RebootDrum_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_science_servo_control__srv__RebootDrum_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RebootDrum_Response = {
  "science_servo_control::srv",
  "RebootDrum_Response",
  _RebootDrum_Response__cdr_serialize,
  _RebootDrum_Response__cdr_deserialize,
  _RebootDrum_Response__get_serialized_size,
  _RebootDrum_Response__max_serialized_size
};

static rosidl_message_type_support_t _RebootDrum_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RebootDrum_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, RebootDrum_Response)() {
  return &_RebootDrum_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "science_servo_control/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "science_servo_control/srv/reboot_drum.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RebootDrum__callbacks = {
  "science_servo_control::srv",
  "RebootDrum",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, RebootDrum_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, RebootDrum_Response)(),
};

static rosidl_service_type_support_t RebootDrum__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RebootDrum__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, RebootDrum)() {
  return &RebootDrum__handle;
}

#if defined(__cplusplus)
}
#endif
