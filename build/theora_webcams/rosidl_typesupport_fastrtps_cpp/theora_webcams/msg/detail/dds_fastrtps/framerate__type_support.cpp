// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from theora_webcams:msg/Framerate.idl
// generated code does not contain a copyright notice
#include "theora_webcams/msg/detail/framerate__rosidl_typesupport_fastrtps_cpp.hpp"
#include "theora_webcams/msg/detail/framerate__struct.hpp"

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

namespace theora_webcams
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_theora_webcams
cdr_serialize(
  const theora_webcams::msg::Framerate & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: numerator
  cdr << ros_message.numerator;
  // Member: denominator
  cdr << ros_message.denominator;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_theora_webcams
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  theora_webcams::msg::Framerate & ros_message)
{
  // Member: numerator
  cdr >> ros_message.numerator;

  // Member: denominator
  cdr >> ros_message.denominator;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_theora_webcams
get_serialized_size(
  const theora_webcams::msg::Framerate & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: numerator
  {
    size_t item_size = sizeof(ros_message.numerator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: denominator
  {
    size_t item_size = sizeof(ros_message.denominator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_theora_webcams
max_serialized_size_Framerate(
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


  // Member: numerator
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: denominator
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Framerate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const theora_webcams::msg::Framerate *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Framerate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<theora_webcams::msg::Framerate *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Framerate__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const theora_webcams::msg::Framerate *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Framerate__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Framerate(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Framerate__callbacks = {
  "theora_webcams::msg",
  "Framerate",
  _Framerate__cdr_serialize,
  _Framerate__cdr_deserialize,
  _Framerate__get_serialized_size,
  _Framerate__max_serialized_size
};

static rosidl_message_type_support_t _Framerate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Framerate__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace theora_webcams

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_theora_webcams
const rosidl_message_type_support_t *
get_message_type_support_handle<theora_webcams::msg::Framerate>()
{
  return &theora_webcams::msg::typesupport_fastrtps_cpp::_Framerate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, theora_webcams, msg, Framerate)() {
  return &theora_webcams::msg::typesupport_fastrtps_cpp::_Framerate__handle;
}

#ifdef __cplusplus
}
#endif
