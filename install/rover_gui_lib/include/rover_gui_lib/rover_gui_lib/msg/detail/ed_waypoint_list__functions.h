// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rover_gui_lib:msg/EDWaypointList.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__FUNCTIONS_H_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rover_gui_lib/msg/rosidl_generator_c__visibility_control.h"

#include "rover_gui_lib/msg/detail/ed_waypoint_list__struct.h"

/// Initialize msg/EDWaypointList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rover_gui_lib__msg__EDWaypointList
 * )) before or use
 * rover_gui_lib__msg__EDWaypointList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
bool
rover_gui_lib__msg__EDWaypointList__init(rover_gui_lib__msg__EDWaypointList * msg);

/// Finalize msg/EDWaypointList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
void
rover_gui_lib__msg__EDWaypointList__fini(rover_gui_lib__msg__EDWaypointList * msg);

/// Create msg/EDWaypointList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rover_gui_lib__msg__EDWaypointList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
rover_gui_lib__msg__EDWaypointList *
rover_gui_lib__msg__EDWaypointList__create();

/// Destroy msg/EDWaypointList message.
/**
 * It calls
 * rover_gui_lib__msg__EDWaypointList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
void
rover_gui_lib__msg__EDWaypointList__destroy(rover_gui_lib__msg__EDWaypointList * msg);

/// Check for msg/EDWaypointList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
bool
rover_gui_lib__msg__EDWaypointList__are_equal(const rover_gui_lib__msg__EDWaypointList * lhs, const rover_gui_lib__msg__EDWaypointList * rhs);

/// Copy a msg/EDWaypointList message.
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
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
bool
rover_gui_lib__msg__EDWaypointList__copy(
  const rover_gui_lib__msg__EDWaypointList * input,
  rover_gui_lib__msg__EDWaypointList * output);

/// Initialize array of msg/EDWaypointList messages.
/**
 * It allocates the memory for the number of elements and calls
 * rover_gui_lib__msg__EDWaypointList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
bool
rover_gui_lib__msg__EDWaypointList__Sequence__init(rover_gui_lib__msg__EDWaypointList__Sequence * array, size_t size);

/// Finalize array of msg/EDWaypointList messages.
/**
 * It calls
 * rover_gui_lib__msg__EDWaypointList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
void
rover_gui_lib__msg__EDWaypointList__Sequence__fini(rover_gui_lib__msg__EDWaypointList__Sequence * array);

/// Create array of msg/EDWaypointList messages.
/**
 * It allocates the memory for the array and calls
 * rover_gui_lib__msg__EDWaypointList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
rover_gui_lib__msg__EDWaypointList__Sequence *
rover_gui_lib__msg__EDWaypointList__Sequence__create(size_t size);

/// Destroy array of msg/EDWaypointList messages.
/**
 * It calls
 * rover_gui_lib__msg__EDWaypointList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
void
rover_gui_lib__msg__EDWaypointList__Sequence__destroy(rover_gui_lib__msg__EDWaypointList__Sequence * array);

/// Check for msg/EDWaypointList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
bool
rover_gui_lib__msg__EDWaypointList__Sequence__are_equal(const rover_gui_lib__msg__EDWaypointList__Sequence * lhs, const rover_gui_lib__msg__EDWaypointList__Sequence * rhs);

/// Copy an array of msg/EDWaypointList messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
bool
rover_gui_lib__msg__EDWaypointList__Sequence__copy(
  const rover_gui_lib__msg__EDWaypointList__Sequence * input,
  rover_gui_lib__msg__EDWaypointList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__FUNCTIONS_H_
