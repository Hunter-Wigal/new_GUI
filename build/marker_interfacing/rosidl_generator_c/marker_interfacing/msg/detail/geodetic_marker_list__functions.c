// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marker_interfacing:msg/GeodeticMarkerList.idl
// generated code does not contain a copyright notice
#include "marker_interfacing/msg/detail/geodetic_marker_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `markers`
#include "marker_interfacing/msg/detail/geodetic_marker__functions.h"

bool
marker_interfacing__msg__GeodeticMarkerList__init(marker_interfacing__msg__GeodeticMarkerList * msg)
{
  if (!msg) {
    return false;
  }
  // markers
  if (!marker_interfacing__msg__GeodeticMarker__Sequence__init(&msg->markers, 0)) {
    marker_interfacing__msg__GeodeticMarkerList__fini(msg);
    return false;
  }
  // count
  return true;
}

void
marker_interfacing__msg__GeodeticMarkerList__fini(marker_interfacing__msg__GeodeticMarkerList * msg)
{
  if (!msg) {
    return;
  }
  // markers
  marker_interfacing__msg__GeodeticMarker__Sequence__fini(&msg->markers);
  // count
}

bool
marker_interfacing__msg__GeodeticMarkerList__are_equal(const marker_interfacing__msg__GeodeticMarkerList * lhs, const marker_interfacing__msg__GeodeticMarkerList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // markers
  if (!marker_interfacing__msg__GeodeticMarker__Sequence__are_equal(
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
marker_interfacing__msg__GeodeticMarkerList__copy(
  const marker_interfacing__msg__GeodeticMarkerList * input,
  marker_interfacing__msg__GeodeticMarkerList * output)
{
  if (!input || !output) {
    return false;
  }
  // markers
  if (!marker_interfacing__msg__GeodeticMarker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

marker_interfacing__msg__GeodeticMarkerList *
marker_interfacing__msg__GeodeticMarkerList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__msg__GeodeticMarkerList * msg = (marker_interfacing__msg__GeodeticMarkerList *)allocator.allocate(sizeof(marker_interfacing__msg__GeodeticMarkerList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marker_interfacing__msg__GeodeticMarkerList));
  bool success = marker_interfacing__msg__GeodeticMarkerList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marker_interfacing__msg__GeodeticMarkerList__destroy(marker_interfacing__msg__GeodeticMarkerList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marker_interfacing__msg__GeodeticMarkerList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marker_interfacing__msg__GeodeticMarkerList__Sequence__init(marker_interfacing__msg__GeodeticMarkerList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__msg__GeodeticMarkerList * data = NULL;

  if (size) {
    data = (marker_interfacing__msg__GeodeticMarkerList *)allocator.zero_allocate(size, sizeof(marker_interfacing__msg__GeodeticMarkerList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marker_interfacing__msg__GeodeticMarkerList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marker_interfacing__msg__GeodeticMarkerList__fini(&data[i - 1]);
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
marker_interfacing__msg__GeodeticMarkerList__Sequence__fini(marker_interfacing__msg__GeodeticMarkerList__Sequence * array)
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
      marker_interfacing__msg__GeodeticMarkerList__fini(&array->data[i]);
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

marker_interfacing__msg__GeodeticMarkerList__Sequence *
marker_interfacing__msg__GeodeticMarkerList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__msg__GeodeticMarkerList__Sequence * array = (marker_interfacing__msg__GeodeticMarkerList__Sequence *)allocator.allocate(sizeof(marker_interfacing__msg__GeodeticMarkerList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marker_interfacing__msg__GeodeticMarkerList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marker_interfacing__msg__GeodeticMarkerList__Sequence__destroy(marker_interfacing__msg__GeodeticMarkerList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marker_interfacing__msg__GeodeticMarkerList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marker_interfacing__msg__GeodeticMarkerList__Sequence__are_equal(const marker_interfacing__msg__GeodeticMarkerList__Sequence * lhs, const marker_interfacing__msg__GeodeticMarkerList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marker_interfacing__msg__GeodeticMarkerList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marker_interfacing__msg__GeodeticMarkerList__Sequence__copy(
  const marker_interfacing__msg__GeodeticMarkerList__Sequence * input,
  marker_interfacing__msg__GeodeticMarkerList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marker_interfacing__msg__GeodeticMarkerList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marker_interfacing__msg__GeodeticMarkerList * data =
      (marker_interfacing__msg__GeodeticMarkerList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marker_interfacing__msg__GeodeticMarkerList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marker_interfacing__msg__GeodeticMarkerList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marker_interfacing__msg__GeodeticMarkerList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
