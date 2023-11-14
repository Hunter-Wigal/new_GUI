// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_finder:msg/FoundMarker.idl
// generated code does not contain a copyright notice
#include "aruco_finder/msg/detail/found_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `marker_enu`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
aruco_finder__msg__FoundMarker__init(aruco_finder__msg__FoundMarker * msg)
{
  if (!msg) {
    return false;
  }
  // marker_enu
  if (!geometry_msgs__msg__Point__init(&msg->marker_enu)) {
    aruco_finder__msg__FoundMarker__fini(msg);
    return false;
  }
  // aruco_id
  return true;
}

void
aruco_finder__msg__FoundMarker__fini(aruco_finder__msg__FoundMarker * msg)
{
  if (!msg) {
    return;
  }
  // marker_enu
  geometry_msgs__msg__Point__fini(&msg->marker_enu);
  // aruco_id
}

bool
aruco_finder__msg__FoundMarker__are_equal(const aruco_finder__msg__FoundMarker * lhs, const aruco_finder__msg__FoundMarker * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // marker_enu
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->marker_enu), &(rhs->marker_enu)))
  {
    return false;
  }
  // aruco_id
  if (lhs->aruco_id != rhs->aruco_id) {
    return false;
  }
  return true;
}

bool
aruco_finder__msg__FoundMarker__copy(
  const aruco_finder__msg__FoundMarker * input,
  aruco_finder__msg__FoundMarker * output)
{
  if (!input || !output) {
    return false;
  }
  // marker_enu
  if (!geometry_msgs__msg__Point__copy(
      &(input->marker_enu), &(output->marker_enu)))
  {
    return false;
  }
  // aruco_id
  output->aruco_id = input->aruco_id;
  return true;
}

aruco_finder__msg__FoundMarker *
aruco_finder__msg__FoundMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_finder__msg__FoundMarker * msg = (aruco_finder__msg__FoundMarker *)allocator.allocate(sizeof(aruco_finder__msg__FoundMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_finder__msg__FoundMarker));
  bool success = aruco_finder__msg__FoundMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_finder__msg__FoundMarker__destroy(aruco_finder__msg__FoundMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_finder__msg__FoundMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_finder__msg__FoundMarker__Sequence__init(aruco_finder__msg__FoundMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_finder__msg__FoundMarker * data = NULL;

  if (size) {
    data = (aruco_finder__msg__FoundMarker *)allocator.zero_allocate(size, sizeof(aruco_finder__msg__FoundMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_finder__msg__FoundMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_finder__msg__FoundMarker__fini(&data[i - 1]);
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
aruco_finder__msg__FoundMarker__Sequence__fini(aruco_finder__msg__FoundMarker__Sequence * array)
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
      aruco_finder__msg__FoundMarker__fini(&array->data[i]);
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

aruco_finder__msg__FoundMarker__Sequence *
aruco_finder__msg__FoundMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_finder__msg__FoundMarker__Sequence * array = (aruco_finder__msg__FoundMarker__Sequence *)allocator.allocate(sizeof(aruco_finder__msg__FoundMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_finder__msg__FoundMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_finder__msg__FoundMarker__Sequence__destroy(aruco_finder__msg__FoundMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_finder__msg__FoundMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_finder__msg__FoundMarker__Sequence__are_equal(const aruco_finder__msg__FoundMarker__Sequence * lhs, const aruco_finder__msg__FoundMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_finder__msg__FoundMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_finder__msg__FoundMarker__Sequence__copy(
  const aruco_finder__msg__FoundMarker__Sequence * input,
  aruco_finder__msg__FoundMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_finder__msg__FoundMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_finder__msg__FoundMarker * data =
      (aruco_finder__msg__FoundMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_finder__msg__FoundMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_finder__msg__FoundMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_finder__msg__FoundMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
