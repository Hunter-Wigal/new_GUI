// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from theora_webcams:msg/VideoFormatList.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__STRUCT_H_
#define THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'formats'
#include "theora_webcams/msg/detail/video_format__struct.h"

/// Struct defined in msg/VideoFormatList in the package theora_webcams.
typedef struct theora_webcams__msg__VideoFormatList
{
  theora_webcams__msg__VideoFormat__Sequence formats;
} theora_webcams__msg__VideoFormatList;

// Struct for a sequence of theora_webcams__msg__VideoFormatList.
typedef struct theora_webcams__msg__VideoFormatList__Sequence
{
  theora_webcams__msg__VideoFormatList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} theora_webcams__msg__VideoFormatList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__STRUCT_H_