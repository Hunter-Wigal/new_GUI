// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marker_interfacing:msg/ENUMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__FUNCTIONS_H_
#define MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "marker_interfacing/msg/rosidl_generator_c__visibility_control.h"

#include "marker_interfacing/msg/detail/enu_marker__struct.h"

/// Initialize msg/ENUMarker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marker_interfacing__msg__ENUMarker
 * )) before or use
 * marker_interfacing__msg__ENUMarker__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__msg__ENUMarker__init(marker_interfacing__msg__ENUMarker * msg);

/// Finalize msg/ENUMarker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__msg__ENUMarker__fini(marker_interfacing__msg__ENUMarker * msg);

/// Create msg/ENUMarker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marker_interfacing__msg__ENUMarker__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
marker_interfacing__msg__ENUMarker *
marker_interfacing__msg__ENUMarker__create();

/// Destroy msg/ENUMarker message.
/**
 * It calls
 * marker_interfacing__msg__ENUMarker__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__msg__ENUMarker__destroy(marker_interfacing__msg__ENUMarker * msg);

/// Check for msg/ENUMarker message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__msg__ENUMarker__are_equal(const marker_interfacing__msg__ENUMarker * lhs, const marker_interfacing__msg__ENUMarker * rhs);

/// Copy a msg/ENUMarker message.
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
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__msg__ENUMarker__copy(
  const marker_interfacing__msg__ENUMarker * input,
  marker_interfacing__msg__ENUMarker * output);

/// Initialize array of msg/ENUMarker messages.
/**
 * It allocates the memory for the number of elements and calls
 * marker_interfacing__msg__ENUMarker__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__msg__ENUMarker__Sequence__init(marker_interfacing__msg__ENUMarker__Sequence * array, size_t size);

/// Finalize array of msg/ENUMarker messages.
/**
 * It calls
 * marker_interfacing__msg__ENUMarker__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__msg__ENUMarker__Sequence__fini(marker_interfacing__msg__ENUMarker__Sequence * array);

/// Create array of msg/ENUMarker messages.
/**
 * It allocates the memory for the array and calls
 * marker_interfacing__msg__ENUMarker__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
marker_interfacing__msg__ENUMarker__Sequence *
marker_interfacing__msg__ENUMarker__Sequence__create(size_t size);

/// Destroy array of msg/ENUMarker messages.
/**
 * It calls
 * marker_interfacing__msg__ENUMarker__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__msg__ENUMarker__Sequence__destroy(marker_interfacing__msg__ENUMarker__Sequence * array);

/// Check for msg/ENUMarker message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__msg__ENUMarker__Sequence__are_equal(const marker_interfacing__msg__ENUMarker__Sequence * lhs, const marker_interfacing__msg__ENUMarker__Sequence * rhs);

/// Copy an array of msg/ENUMarker messages.
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
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__msg__ENUMarker__Sequence__copy(
  const marker_interfacing__msg__ENUMarker__Sequence * input,
  marker_interfacing__msg__ENUMarker__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__FUNCTIONS_H_
