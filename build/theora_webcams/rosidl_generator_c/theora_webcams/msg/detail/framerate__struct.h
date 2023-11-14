// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from theora_webcams:msg/Framerate.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__STRUCT_H_
#define THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Framerate in the package theora_webcams.
typedef struct theora_webcams__msg__Framerate
{
  int32_t numerator;
  int32_t denominator;
} theora_webcams__msg__Framerate;

// Struct for a sequence of theora_webcams__msg__Framerate.
typedef struct theora_webcams__msg__Framerate__Sequence
{
  theora_webcams__msg__Framerate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} theora_webcams__msg__Framerate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__STRUCT_H_
