// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from theora_webcams:msg/VideoFormat.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__STRUCT_H_
#define THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'format'
#include "rosidl_runtime_c/string.h"
// Member 'resolutions'
#include "theora_webcams/msg/detail/resolution__struct.h"

/// Struct defined in msg/VideoFormat in the package theora_webcams.
typedef struct theora_webcams__msg__VideoFormat
{
  rosidl_runtime_c__String format;
  theora_webcams__msg__Resolution__Sequence resolutions;
} theora_webcams__msg__VideoFormat;

// Struct for a sequence of theora_webcams__msg__VideoFormat.
typedef struct theora_webcams__msg__VideoFormat__Sequence
{
  theora_webcams__msg__VideoFormat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} theora_webcams__msg__VideoFormat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__STRUCT_H_
