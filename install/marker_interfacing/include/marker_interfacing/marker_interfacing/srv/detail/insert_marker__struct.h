// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marker_interfacing:srv/InsertMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__INSERT_MARKER__STRUCT_H_
#define MARKER_INTERFACING__SRV__DETAIL__INSERT_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'marker_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/InsertMarker in the package marker_interfacing.
typedef struct marker_interfacing__srv__InsertMarker_Request
{
  double lat;
  double lon;
  double alt;
  float waypoint_error;
  rosidl_runtime_c__String marker_type;
  uint8_t aruco_id;
  uint8_t aruco_id_2;
  uint8_t new_following_marker_id;
} marker_interfacing__srv__InsertMarker_Request;

// Struct for a sequence of marker_interfacing__srv__InsertMarker_Request.
typedef struct marker_interfacing__srv__InsertMarker_Request__Sequence
{
  marker_interfacing__srv__InsertMarker_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marker_interfacing__srv__InsertMarker_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InsertMarker in the package marker_interfacing.
typedef struct marker_interfacing__srv__InsertMarker_Response
{
  bool success;
} marker_interfacing__srv__InsertMarker_Response;

// Struct for a sequence of marker_interfacing__srv__InsertMarker_Response.
typedef struct marker_interfacing__srv__InsertMarker_Response__Sequence
{
  marker_interfacing__srv__InsertMarker_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marker_interfacing__srv__InsertMarker_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARKER_INTERFACING__SRV__DETAIL__INSERT_MARKER__STRUCT_H_
