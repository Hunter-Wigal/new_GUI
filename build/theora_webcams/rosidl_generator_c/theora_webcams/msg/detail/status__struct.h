// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from theora_webcams:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__STATUS__STRUCT_H_
#define THEORA_WEBCAMS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Status in the package theora_webcams.
typedef struct theora_webcams__msg__Status
{
  int32_t width;
  int32_t height;
  int32_t framerate_numerator;
  int32_t framerate_denominator;
  float exposure;
} theora_webcams__msg__Status;

// Struct for a sequence of theora_webcams__msg__Status.
typedef struct theora_webcams__msg__Status__Sequence
{
  theora_webcams__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} theora_webcams__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THEORA_WEBCAMS__MSG__DETAIL__STATUS__STRUCT_H_
