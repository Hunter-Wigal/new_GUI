// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice

#ifndef OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__FUNCTIONS_H_
#define OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ocean_optics_spectrometer/msg/rosidl_generator_c__visibility_control.h"

#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.h"

/// Initialize srv/CaptureSpectrometer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Request
 * )) before or use
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__init(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * msg);

/// Finalize srv/CaptureSpectrometer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__fini(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * msg);

/// Create srv/CaptureSpectrometer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request *
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__create();

/// Destroy srv/CaptureSpectrometer message.
/**
 * It calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__destroy(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * msg);

/// Check for srv/CaptureSpectrometer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__are_equal(const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * lhs, const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * rhs);

/// Copy a srv/CaptureSpectrometer message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__copy(
  const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * input,
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * output);

/// Initialize array of srv/CaptureSpectrometer messages.
/**
 * It allocates the memory for the number of elements and calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__init(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * array, size_t size);

/// Finalize array of srv/CaptureSpectrometer messages.
/**
 * It calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__fini(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * array);

/// Create array of srv/CaptureSpectrometer messages.
/**
 * It allocates the memory for the array and calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence *
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__create(size_t size);

/// Destroy array of srv/CaptureSpectrometer messages.
/**
 * It calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__destroy(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * array);

/// Check for srv/CaptureSpectrometer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__are_equal(const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * lhs, const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * rhs);

/// Copy an array of srv/CaptureSpectrometer messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__copy(
  const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * input,
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * output);

/// Initialize srv/CaptureSpectrometer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response
 * )) before or use
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__init(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * msg);

/// Finalize srv/CaptureSpectrometer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * msg);

/// Create srv/CaptureSpectrometer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response *
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__create();

/// Destroy srv/CaptureSpectrometer message.
/**
 * It calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__destroy(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * msg);

/// Check for srv/CaptureSpectrometer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__are_equal(const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * lhs, const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * rhs);

/// Copy a srv/CaptureSpectrometer message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__copy(
  const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * input,
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * output);

/// Initialize array of srv/CaptureSpectrometer messages.
/**
 * It allocates the memory for the number of elements and calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__init(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * array, size_t size);

/// Finalize array of srv/CaptureSpectrometer messages.
/**
 * It calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__fini(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * array);

/// Create array of srv/CaptureSpectrometer messages.
/**
 * It allocates the memory for the array and calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence *
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__create(size_t size);

/// Destroy array of srv/CaptureSpectrometer messages.
/**
 * It calls
 * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__destroy(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * array);

/// Check for srv/CaptureSpectrometer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__are_equal(const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * lhs, const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * rhs);

/// Copy an array of srv/CaptureSpectrometer messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocean_optics_spectrometer
bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__copy(
  const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * input,
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__FUNCTIONS_H_
