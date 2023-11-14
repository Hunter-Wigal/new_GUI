// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from theora_webcams:srv/GetResolutions.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__STRUCT_H_
#define THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetResolutions in the package theora_webcams.
typedef struct theora_webcams__srv__GetResolutions_Request
{
  uint8_t structure_needs_at_least_one_member;
} theora_webcams__srv__GetResolutions_Request;

// Struct for a sequence of theora_webcams__srv__GetResolutions_Request.
typedef struct theora_webcams__srv__GetResolutions_Request__Sequence
{
  theora_webcams__srv__GetResolutions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} theora_webcams__srv__GetResolutions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'resolutions'
#include "theora_webcams/msg/detail/resolution__struct.h"

/// Struct defined in srv/GetResolutions in the package theora_webcams.
typedef struct theora_webcams__srv__GetResolutions_Response
{
  theora_webcams__msg__Resolution__Sequence resolutions;
} theora_webcams__srv__GetResolutions_Response;

// Struct for a sequence of theora_webcams__srv__GetResolutions_Response.
typedef struct theora_webcams__srv__GetResolutions_Response__Sequence
{
  theora_webcams__srv__GetResolutions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} theora_webcams__srv__GetResolutions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__STRUCT_H_
