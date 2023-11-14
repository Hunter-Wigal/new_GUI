// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rover_gui_lib:msg/EDWaypoint.idl
// generated code does not contain a copyright notice
#include "rover_gui_lib/msg/detail/ed_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
rover_gui_lib__msg__EDWaypoint__init(rover_gui_lib__msg__EDWaypoint * msg)
{
  if (!msg) {
    return false;
  }
  // latitude
  // longitude
  // radius
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rover_gui_lib__msg__EDWaypoint__fini(msg);
    return false;
  }
  return true;
}

void
rover_gui_lib__msg__EDWaypoint__fini(rover_gui_lib__msg__EDWaypoint * msg)
{
  if (!msg) {
    return;
  }
  // latitude
  // longitude
  // radius
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
rover_gui_lib__msg__EDWaypoint__are_equal(const rover_gui_lib__msg__EDWaypoint * lhs, const rover_gui_lib__msg__EDWaypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
rover_gui_lib__msg__EDWaypoint__copy(
  const rover_gui_lib__msg__EDWaypoint * input,
  rover_gui_lib__msg__EDWaypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // radius
  output->radius = input->radius;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

rover_gui_lib__msg__EDWaypoint *
rover_gui_lib__msg__EDWaypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_gui_lib__msg__EDWaypoint * msg = (rover_gui_lib__msg__EDWaypoint *)allocator.allocate(sizeof(rover_gui_lib__msg__EDWaypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rover_gui_lib__msg__EDWaypoint));
  bool success = rover_gui_lib__msg__EDWaypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rover_gui_lib__msg__EDWaypoint__destroy(rover_gui_lib__msg__EDWaypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rover_gui_lib__msg__EDWaypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rover_gui_lib__msg__EDWaypoint__Sequence__init(rover_gui_lib__msg__EDWaypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_gui_lib__msg__EDWaypoint * data = NULL;

  if (size) {
    data = (rover_gui_lib__msg__EDWaypoint *)allocator.zero_allocate(size, sizeof(rover_gui_lib__msg__EDWaypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rover_gui_lib__msg__EDWaypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rover_gui_lib__msg__EDWaypoint__fini(&data[i - 1]);
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
rover_gui_lib__msg__EDWaypoint__Sequence__fini(rover_gui_lib__msg__EDWaypoint__Sequence * array)
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
      rover_gui_lib__msg__EDWaypoint__fini(&array->data[i]);
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

rover_gui_lib__msg__EDWaypoint__Sequence *
rover_gui_lib__msg__EDWaypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_gui_lib__msg__EDWaypoint__Sequence * array = (rover_gui_lib__msg__EDWaypoint__Sequence *)allocator.allocate(sizeof(rover_gui_lib__msg__EDWaypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rover_gui_lib__msg__EDWaypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rover_gui_lib__msg__EDWaypoint__Sequence__destroy(rover_gui_lib__msg__EDWaypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rover_gui_lib__msg__EDWaypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rover_gui_lib__msg__EDWaypoint__Sequence__are_equal(const rover_gui_lib__msg__EDWaypoint__Sequence * lhs, const rover_gui_lib__msg__EDWaypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rover_gui_lib__msg__EDWaypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rover_gui_lib__msg__EDWaypoint__Sequence__copy(
  const rover_gui_lib__msg__EDWaypoint__Sequence * input,
  rover_gui_lib__msg__EDWaypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rover_gui_lib__msg__EDWaypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rover_gui_lib__msg__EDWaypoint * data =
      (rover_gui_lib__msg__EDWaypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rover_gui_lib__msg__EDWaypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rover_gui_lib__msg__EDWaypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rover_gui_lib__msg__EDWaypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
