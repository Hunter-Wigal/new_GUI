// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marker_interfacing:srv/ReorderMarkers.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKERS__STRUCT_H_
#define MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'marker_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ReorderMarkers in the package marker_interfacing.
typedef struct marker_interfacing__srv__ReorderMarkers_Request
{
  rosidl_runtime_c__uint8__Sequence marker_ids;
} marker_interfacing__srv__ReorderMarkers_Request;

// Struct for a sequence of marker_interfacing__srv__ReorderMarkers_Request.
typedef struct marker_interfacing__srv__ReorderMarkers_Request__Sequence
{
  marker_interfacing__srv__ReorderMarkers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marker_interfacing__srv__ReorderMarkers_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ReorderMarkers in the package marker_interfacing.
typedef struct marker_interfacing__srv__ReorderMarkers_Response
{
  bool success;
} marker_interfacing__srv__ReorderMarkers_Response;

// Struct for a sequence of marker_interfacing__srv__ReorderMarkers_Response.
typedef struct marker_interfacing__srv__ReorderMarkers_Response__Sequence
{
  marker_interfacing__srv__ReorderMarkers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marker_interfacing__srv__ReorderMarkers_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKERS__STRUCT_H_
