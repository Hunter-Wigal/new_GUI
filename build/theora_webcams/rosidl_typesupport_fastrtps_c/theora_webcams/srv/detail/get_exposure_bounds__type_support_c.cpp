// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from theora_webcams:srv/GetExposureBounds.idl
// generated code does not contain a copyright notice
#include "theora_webcams/srv/detail/get_exposure_bounds__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "theora_webcams/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "theora_webcams/srv/detail/get_exposure_bounds__struct.h"
#include "theora_webcams/srv/detail/get_exposure_bounds__functions.h"
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


using _GetExposureBounds_Request__ros_msg_type = theora_webcams__srv__GetExposureBounds_Request;

static bool _GetExposureBounds_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetExposureBounds_Request__ros_msg_type * ros_message = static_cast<const _GetExposureBounds_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetExposureBounds_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetExposureBounds_Request__ros_msg_type * ros_message = static_cast<_GetExposureBounds_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_theora_webcams
size_t get_serialized_size_theora_webcams__srv__GetExposureBounds_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetExposureBounds_Request__ros_msg_type * ros_message = static_cast<const _GetExposureBounds_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _GetExposureBounds_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_theora_webcams__srv__GetExposureBounds_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_theora_webcams
size_t max_serialized_size_theora_webcams__srv__GetExposureBounds_Request(
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

static size_t _GetExposureBounds_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_theora_webcams__srv__GetExposureBounds_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetExposureBounds_Request = {
  "theora_webcams::srv",
  "GetExposureBounds_Request",
  _GetExposureBounds_Request__cdr_serialize,
  _GetExposureBounds_Request__cdr_deserialize,
  _GetExposureBounds_Request__get_serialized_size,
  _GetExposureBounds_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetExposureBounds_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetExposureBounds_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetExposureBounds_Request)() {
  return &_GetExposureBounds_Request__type_support;
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
// #include "theora_webcams/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "theora_webcams/srv/detail/get_exposure_bounds__struct.h"
// already included above
// #include "theora_webcams/srv/detail/get_exposure_bounds__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // exposure_bounds
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // exposure_bounds

// forward declare type support functions


using _GetExposureBounds_Response__ros_msg_type = theora_webcams__srv__GetExposureBounds_Response;

static bool _GetExposureBounds_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetExposureBounds_Response__ros_msg_type * ros_message = static_cast<const _GetExposureBounds_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: exposure_bounds
  {
    size_t size = ros_message->exposure_bounds.size;
    auto array_ptr = ros_message->exposure_bounds.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: supports_manual_exposure
  {
    cdr << (ros_message->supports_manual_exposure ? true : false);
  }

  return true;
}

static bool _GetExposureBounds_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetExposureBounds_Response__ros_msg_type * ros_message = static_cast<_GetExposureBounds_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: exposure_bounds
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->exposure_bounds.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->exposure_bounds);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->exposure_bounds, size)) {
      fprintf(stderr, "failed to create array for field 'exposure_bounds'");
      return false;
    }
    auto array_ptr = ros_message->exposure_bounds.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: supports_manual_exposure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->supports_manual_exposure = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_theora_webcams
size_t get_serialized_size_theora_webcams__srv__GetExposureBounds_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetExposureBounds_Response__ros_msg_type * ros_message = static_cast<const _GetExposureBounds_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name exposure_bounds
  {
    size_t array_size = ros_message->exposure_bounds.size;
    auto array_ptr = ros_message->exposure_bounds.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supports_manual_exposure
  {
    size_t item_size = sizeof(ros_message->supports_manual_exposure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetExposureBounds_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_theora_webcams__srv__GetExposureBounds_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_theora_webcams
size_t max_serialized_size_theora_webcams__srv__GetExposureBounds_Response(
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

  // member: exposure_bounds
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: supports_manual_exposure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetExposureBounds_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_theora_webcams__srv__GetExposureBounds_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetExposureBounds_Response = {
  "theora_webcams::srv",
  "GetExposureBounds_Response",
  _GetExposureBounds_Response__cdr_serialize,
  _GetExposureBounds_Response__cdr_deserialize,
  _GetExposureBounds_Response__get_serialized_size,
  _GetExposureBounds_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetExposureBounds_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetExposureBounds_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetExposureBounds_Response)() {
  return &_GetExposureBounds_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "theora_webcams/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "theora_webcams/srv/get_exposure_bounds.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetExposureBounds__callbacks = {
  "theora_webcams::srv",
  "GetExposureBounds",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetExposureBounds_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetExposureBounds_Response)(),
};

static rosidl_service_type_support_t GetExposureBounds__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetExposureBounds__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetExposureBounds)() {
  return &GetExposureBounds__handle;
}

#if defined(__cplusplus)
}
#endif
