// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from theora_webcams:srv/ChangeVideo.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__STRUCT_H_
#define THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ChangeVideo in the package theora_webcams.
typedef struct theora_webcams__srv__ChangeVideo_Request
{
  int32_t width;
  int32_t height;
  int32_t fps_num;
  int32_t fps_den;
  bool start;
  bool force_restart;
} theora_webcams__srv__ChangeVideo_Request;

// Struct for a sequence of theora_webcams__srv__ChangeVideo_Request.
typedef struct theora_webcams__srv__ChangeVideo_Request__Sequence
{
  theora_webcams__srv__ChangeVideo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} theora_webcams__srv__ChangeVideo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ChangeVideo in the package theora_webcams.
typedef struct theora_webcams__srv__ChangeVideo_Response
{
  bool success;
} theora_webcams__srv__ChangeVideo_Response;

// Struct for a sequence of theora_webcams__srv__ChangeVideo_Response.
typedef struct theora_webcams__srv__ChangeVideo_Response__Sequence
{
  theora_webcams__srv__ChangeVideo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} theora_webcams__srv__ChangeVideo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__STRUCT_H_
