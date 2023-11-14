// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from theora_webcams:srv/GetResolutions.idl
// generated code does not contain a copyright notice
#include "theora_webcams/srv/detail/get_resolutions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "theora_webcams/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "theora_webcams/srv/detail/get_resolutions__struct.h"
#include "theora_webcams/srv/detail/get_resolutions__functions.h"
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


using _GetResolutions_Request__ros_msg_type = theora_webcams__srv__GetResolutions_Request;

static bool _GetResolutions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetResolutions_Request__ros_msg_type * ros_message = static_cast<const _GetResolutions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetResolutions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetResolutions_Request__ros_msg_type * ros_message = static_cast<_GetResolutions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_theora_webcams
size_t get_serialized_size_theora_webcams__srv__GetResolutions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetResolutions_Request__ros_msg_type * ros_message = static_cast<const _GetResolutions_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _GetResolutions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_theora_webcams__srv__GetResolutions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_theora_webcams
size_t max_serialized_size_theora_webcams__srv__GetResolutions_Request(
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

static size_t _GetResolutions_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_theora_webcams__srv__GetResolutions_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetResolutions_Request = {
  "theora_webcams::srv",
  "GetResolutions_Request",
  _GetResolutions_Request__cdr_serialize,
  _GetResolutions_Request__cdr_deserialize,
  _GetResolutions_Request__get_serialized_size,
  _GetResolutions_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetResolutions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetResolutions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetResolutions_Request)() {
  return &_GetResolutions_Request__type_support;
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
// #include "theora_webcams/srv/detail/get_resolutions__struct.h"
// already included above
// #include "theora_webcams/srv/detail/get_resolutions__functions.h"
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

#include "theora_webcams/msg/detail/resolution__functions.h"  // resolutions

// forward declare type support functions
size_t get_serialized_size_theora_webcams__msg__Resolution(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_theora_webcams__msg__Resolution(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, msg, Resolution)();


using _GetResolutions_Response__ros_msg_type = theora_webcams__srv__GetResolutions_Response;

static bool _GetResolutions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetResolutions_Response__ros_msg_type * ros_message = static_cast<const _GetResolutions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: resolutions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, theora_webcams, msg, Resolution
      )()->data);
    size_t size = ros_message->resolutions.size;
    auto array_ptr = ros_message->resolutions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetResolutions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetResolutions_Response__ros_msg_type * ros_message = static_cast<_GetResolutions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: resolutions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, theora_webcams, msg, Resolution
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->resolutions.data) {
      theora_webcams__msg__Resolution__Sequence__fini(&ros_message->resolutions);
    }
    if (!theora_webcams__msg__Resolution__Sequence__init(&ros_message->resolutions, size)) {
      fprintf(stderr, "failed to create array for field 'resolutions'");
      return false;
    }
    auto array_ptr = ros_message->resolutions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_theora_webcams
size_t get_serialized_size_theora_webcams__srv__GetResolutions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetResolutions_Response__ros_msg_type * ros_message = static_cast<const _GetResolutions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name resolutions
  {
    size_t array_size = ros_message->resolutions.size;
    auto array_ptr = ros_message->resolutions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_theora_webcams__msg__Resolution(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetResolutions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_theora_webcams__srv__GetResolutions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_theora_webcams
size_t max_serialized_size_theora_webcams__srv__GetResolutions_Response(
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

  // member: resolutions
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
        max_serialized_size_theora_webcams__msg__Resolution(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetResolutions_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_theora_webcams__srv__GetResolutions_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetResolutions_Response = {
  "theora_webcams::srv",
  "GetResolutions_Response",
  _GetResolutions_Response__cdr_serialize,
  _GetResolutions_Response__cdr_deserialize,
  _GetResolutions_Response__get_serialized_size,
  _GetResolutions_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetResolutions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetResolutions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetResolutions_Response)() {
  return &_GetResolutions_Response__type_support;
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
#include "theora_webcams/srv/get_resolutions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetResolutions__callbacks = {
  "theora_webcams::srv",
  "GetResolutions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetResolutions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetResolutions_Response)(),
};

static rosidl_service_type_support_t GetResolutions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetResolutions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, theora_webcams, srv, GetResolutions)() {
  return &GetResolutions__handle;
}

#if defined(__cplusplus)
}
#endif
