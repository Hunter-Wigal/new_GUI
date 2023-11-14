// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marker_interfacing:srv/RemoveCurrentMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__REMOVE_CURRENT_MARKER__STRUCT_H_
#define MARKER_INTERFACING__SRV__DETAIL__REMOVE_CURRENT_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RemoveCurrentMarker in the package marker_interfacing.
typedef struct marker_interfacing__srv__RemoveCurrentMarker_Request
{
  uint8_t structure_needs_at_least_one_member;
} marker_interfacing__srv__RemoveCurrentMarker_Request;

// Struct for a sequence of marker_interfacing__srv__RemoveCurrentMarker_Request.
typedef struct marker_interfacing__srv__RemoveCurrentMarker_Request__Sequence
{
  marker_interfacing__srv__RemoveCurrentMarker_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marker_interfacing__srv__RemoveCurrentMarker_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RemoveCurrentMarker in the package marker_interfacing.
typedef struct marker_interfacing__srv__RemoveCurrentMarker_Response
{
  bool success;
} marker_interfacing__srv__RemoveCurrentMarker_Response;

// Struct for a sequence of marker_interfacing__srv__RemoveCurrentMarker_Response.
typedef struct marker_interfacing__srv__RemoveCurrentMarker_Response__Sequence
{
  marker_interfacing__srv__RemoveCurrentMarker_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marker_interfacing__srv__RemoveCurrentMarker_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARKER_INTERFACING__SRV__DETAIL__REMOVE_CURRENT_MARKER__STRUCT_H_
