// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from theora_webcams:msg/Resolution.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__RESOLUTION__STRUCT_H_
#define THEORA_WEBCAMS__MSG__DETAIL__RESOLUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'framerates'
#include "theora_webcams/msg/detail/framerate__struct.h"

/// Struct defined in msg/Resolution in the package theora_webcams.
typedef struct theora_webcams__msg__Resolution
{
  int32_t width;
  int32_t height;
  theora_webcams__msg__Framerate__Sequence framerates;
} theora_webcams__msg__Resolution;

// Struct for a sequence of theora_webcams__msg__Resolution.
typedef struct theora_webcams__msg__Resolution__Sequence
{
  theora_webcams__msg__Resolution * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} theora_webcams__msg__Resolution__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THEORA_WEBCAMS__MSG__DETAIL__RESOLUTION__STRUCT_H_
