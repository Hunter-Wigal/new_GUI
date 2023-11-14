// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marker_interfacing:msg/ENUMarker.idl
// generated code does not contain a copyright notice
#include "marker_interfacing/msg/detail/enu_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoint_enu`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `marker_type`
#include "rosidl_runtime_c/string_functions.h"

bool
marker_interfacing__msg__ENUMarker__init(marker_interfacing__msg__ENUMarker * msg)
{
  if (!msg) {
    return false;
  }
  // waypoint_enu
  if (!geometry_msgs__msg__Point__init(&msg->waypoint_enu)) {
    marker_interfacing__msg__ENUMarker__fini(msg);
    return false;
  }
  // waypoint_error
  // marker_type
  if (!rosidl_runtime_c__String__init(&msg->marker_type)) {
    marker_interfacing__msg__ENUMarker__fini(msg);
    return false;
  }
  // aruco_id
  // aruco_id_2
  // marker_id
  return true;
}

void
marker_interfacing__msg__ENUMarker__fini(marker_interfacing__msg__ENUMarker * msg)
{
  if (!msg) {
    return;
  }
  // waypoint_enu
  geometry_msgs__msg__Point__fini(&msg->waypoint_enu);
  // waypoint_error
  // marker_type
  rosidl_runtime_c__String__fini(&msg->marker_type);
  // aruco_id
  // aruco_id_2
  // marker_id
}

bool
marker_interfacing__msg__ENUMarker__are_equal(const marker_interfacing__msg__ENUMarker * lhs, const marker_interfacing__msg__ENUMarker * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoint_enu
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->waypoint_enu), &(rhs->waypoint_enu)))
  {
    return false;
  }
  // waypoint_error
  if (lhs->waypoint_error != rhs->waypoint_error) {
    return false;
  }
  // marker_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->marker_type), &(rhs->marker_type)))
  {
    return false;
  }
  // aruco_id
  if (lhs->aruco_id != rhs->aruco_id) {
    return false;
  }
  // aruco_id_2
  if (lhs->aruco_id_2 != rhs->aruco_id_2) {
    return false;
  }
  // marker_id
  if (lhs->marker_id != rhs->marker_id) {
    return false;
  }
  return true;
}

bool
marker_interfacing__msg__ENUMarker__copy(
  const marker_interfacing__msg__ENUMarker * input,
  marker_interfacing__msg__ENUMarker * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoint_enu
  if (!geometry_msgs__msg__Point__copy(
      &(input->waypoint_enu), &(output->waypoint_enu)))
  {
    return false;
  }
  // waypoint_error
  output->waypoint_error = input->waypoint_error;
  // marker_type
  if (!rosidl_runtime_c__String__copy(
      &(input->marker_type), &(output->marker_type)))
  {
    return false;
  }
  // aruco_id
  output->aruco_id = input->aruco_id;
  // aruco_id_2
  output->aruco_id_2 = input->aruco_id_2;
  // marker_id
  output->marker_id = input->marker_id;
  return true;
}

marker_interfacing__msg__ENUMarker *
marker_interfacing__msg__ENUMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__msg__ENUMarker * msg = (marker_interfacing__msg__ENUMarker *)allocator.allocate(sizeof(marker_interfacing__msg__ENUMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marker_interfacing__msg__ENUMarker));
  bool success = marker_interfacing__msg__ENUMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marker_interfacing__msg__ENUMarker__destroy(marker_interfacing__msg__ENUMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marker_interfacing__msg__ENUMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marker_interfacing__msg__ENUMarker__Sequence__init(marker_interfacing__msg__ENUMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__msg__ENUMarker * data = NULL;

  if (size) {
    data = (marker_interfacing__msg__ENUMarker *)allocator.zero_allocate(size, sizeof(marker_interfacing__msg__ENUMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marker_interfacing__msg__ENUMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marker_interfacing__msg__ENUMarker__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
marker_interfacing__msg__ENUMarker__Sequence__fini(marker_interfacing__msg__ENUMarker__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      marker_interfacing__msg__ENUMarker__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

marker_interfacing__msg__ENUMarker__Sequence *
marker_interfacing__msg__ENUMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__msg__ENUMarker__Sequence * array = (marker_interfacing__msg__ENUMarker__Sequence *)allocator.allocate(sizeof(marker_interfacing__msg__ENUMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marker_interfacing__msg__ENUMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marker_interfacing__msg__ENUMarker__Sequence__destroy(marker_interfacing__msg__ENUMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marker_interfacing__msg__ENUMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marker_interfacing__msg__ENUMarker__Sequence__are_equal(const marker_interfacing__msg__ENUMarker__Sequence * lhs, const marker_interfacing__msg__ENUMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marker_interfacing__msg__ENUMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marker_interfacing__msg__ENUMarker__Sequence__copy(
  const marker_interfacing__msg__ENUMarker__Sequence * input,
  marker_interfacing__msg__ENUMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marker_interfacing__msg__ENUMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marker_interfacing__msg__ENUMarker * data =
      (marker_interfacing__msg__ENUMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marker_interfacing__msg__ENUMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marker_interfacing__msg__ENUMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marker_interfacing__msg__ENUMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
