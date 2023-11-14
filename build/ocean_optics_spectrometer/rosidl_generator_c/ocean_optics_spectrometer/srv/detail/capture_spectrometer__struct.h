// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice

#ifndef OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__STRUCT_H_
#define OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CaptureSpectrometer in the package ocean_optics_spectrometer.
typedef struct ocean_optics_spectrometer__srv__CaptureSpectrometer_Request
{
  int32_t integration_time;
} ocean_optics_spectrometer__srv__CaptureSpectrometer_Request;

// Struct for a sequence of ocean_optics_spectrometer__srv__CaptureSpectrometer_Request.
typedef struct ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence
{
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'wavelengths'
// Member 'intensities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CaptureSpectrometer in the package ocean_optics_spectrometer.
typedef struct ocean_optics_spectrometer__srv__CaptureSpectrometer_Response
{
  rosidl_runtime_c__double__Sequence wavelengths;
  rosidl_runtime_c__double__Sequence intensities;
} ocean_optics_spectrometer__srv__CaptureSpectrometer_Response;

// Struct for a sequence of ocean_optics_spectrometer__srv__CaptureSpectrometer_Response.
typedef struct ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence
{
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__STRUCT_H_
