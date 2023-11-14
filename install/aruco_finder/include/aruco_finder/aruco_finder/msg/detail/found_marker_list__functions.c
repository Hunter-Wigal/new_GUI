// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_finder:msg/FoundMarkerList.idl
// generated code does not contain a copyright notice
#include "aruco_finder/msg/detail/found_marker_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `markers`
#include "aruco_finder/msg/detail/found_marker__functions.h"

bool
aruco_finder__msg__FoundMarkerList__init(aruco_finder__msg__FoundMarkerList * msg)
{
  if (!msg) {
    return false;
  }
  // markers
  if (!aruco_finder__msg__FoundMarker__Sequence__init(&msg->markers, 0)) {
    aruco_finder__msg__FoundMarkerList__fini(msg);
    return false;
  }
  // count
  return true;
}

void
aruco_finder__msg__FoundMarkerList__fini(aruco_finder__msg__FoundMarkerList * msg)
{
  if (!msg) {
    return;
  }
  // markers
  aruco_finder__msg__FoundMarker__Sequence__fini(&msg->markers);
  // count
}

bool
aruco_finder__msg__FoundMarkerList__are_equal(const aruco_finder__msg__FoundMarkerList * lhs, const aruco_finder__msg__FoundMarkerList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // markers
  if (!aruco_finder__msg__FoundMarker__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
aruco_finder__msg__FoundMarkerList__copy(
  const aruco_finder__msg__FoundMarkerList * input,
  aruco_finder__msg__FoundMarkerList * output)
{
  if (!input || !output) {
    return false;
  }
  // markers
  if (!aruco_finder__msg__FoundMarker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

aruco_finder__msg__FoundMarkerList *
aruco_finder__msg__FoundMarkerList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_finder__msg__FoundMarkerList * msg = (aruco_finder__msg__FoundMarkerList *)allocator.allocate(sizeof(aruco_finder__msg__FoundMarkerList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_finder__msg__FoundMarkerList));
  bool success = aruco_finder__msg__FoundMarkerList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_finder__msg__FoundMarkerList__destroy(aruco_finder__msg__FoundMarkerList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_finder__msg__FoundMarkerList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_finder__msg__FoundMarkerList__Sequence__init(aruco_finder__msg__FoundMarkerList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_finder__msg__FoundMarkerList * data = NULL;

  if (size) {
    data = (aruco_finder__msg__FoundMarkerList *)allocator.zero_allocate(size, sizeof(aruco_finder__msg__FoundMarkerList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_finder__msg__FoundMarkerList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_finder__msg__FoundMarkerList__fini(&data[i - 1]);
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
aruco_finder__msg__FoundMarkerList__Sequence__fini(aruco_finder__msg__FoundMarkerList__Sequence * array)
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
      aruco_finder__msg__FoundMarkerList__fini(&array->data[i]);
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

aruco_finder__msg__FoundMarkerList__Sequence *
aruco_finder__msg__FoundMarkerList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_finder__msg__FoundMarkerList__Sequence * array = (aruco_finder__msg__FoundMarkerList__Sequence *)allocator.allocate(sizeof(aruco_finder__msg__FoundMarkerList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_finder__msg__FoundMarkerList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_finder__msg__FoundMarkerList__Sequence__destroy(aruco_finder__msg__FoundMarkerList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_finder__msg__FoundMarkerList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_finder__msg__FoundMarkerList__Sequence__are_equal(const aruco_finder__msg__FoundMarkerList__Sequence * lhs, const aruco_finder__msg__FoundMarkerList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_finder__msg__FoundMarkerList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_finder__msg__FoundMarkerList__Sequence__copy(
  const aruco_finder__msg__FoundMarkerList__Sequence * input,
  aruco_finder__msg__FoundMarkerList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_finder__msg__FoundMarkerList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_finder__msg__FoundMarkerList * data =
      (aruco_finder__msg__FoundMarkerList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_finder__msg__FoundMarkerList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_finder__msg__FoundMarkerList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_finder__msg__FoundMarkerList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
