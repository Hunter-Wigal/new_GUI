// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rover_gui_lib:msg/EDWaypointList.idl
// generated code does not contain a copyright notice
#include "rover_gui_lib/msg/detail/ed_waypoint_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoints`
#include "rover_gui_lib/msg/detail/ed_waypoint__functions.h"

bool
rover_gui_lib__msg__EDWaypointList__init(rover_gui_lib__msg__EDWaypointList * msg)
{
  if (!msg) {
    return false;
  }
  // waypoints
  if (!rover_gui_lib__msg__EDWaypoint__Sequence__init(&msg->waypoints, 0)) {
    rover_gui_lib__msg__EDWaypointList__fini(msg);
    return false;
  }
  // count
  return true;
}

void
rover_gui_lib__msg__EDWaypointList__fini(rover_gui_lib__msg__EDWaypointList * msg)
{
  if (!msg) {
    return;
  }
  // waypoints
  rover_gui_lib__msg__EDWaypoint__Sequence__fini(&msg->waypoints);
  // count
}

bool
rover_gui_lib__msg__EDWaypointList__are_equal(const rover_gui_lib__msg__EDWaypointList * lhs, const rover_gui_lib__msg__EDWaypointList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoints
  if (!rover_gui_lib__msg__EDWaypoint__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
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
rover_gui_lib__msg__EDWaypointList__copy(
  const rover_gui_lib__msg__EDWaypointList * input,
  rover_gui_lib__msg__EDWaypointList * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoints
  if (!rover_gui_lib__msg__EDWaypoint__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

rover_gui_lib__msg__EDWaypointList *
rover_gui_lib__msg__EDWaypointList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_gui_lib__msg__EDWaypointList * msg = (rover_gui_lib__msg__EDWaypointList *)allocator.allocate(sizeof(rover_gui_lib__msg__EDWaypointList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rover_gui_lib__msg__EDWaypointList));
  bool success = rover_gui_lib__msg__EDWaypointList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rover_gui_lib__msg__EDWaypointList__destroy(rover_gui_lib__msg__EDWaypointList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rover_gui_lib__msg__EDWaypointList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rover_gui_lib__msg__EDWaypointList__Sequence__init(rover_gui_lib__msg__EDWaypointList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_gui_lib__msg__EDWaypointList * data = NULL;

  if (size) {
    data = (rover_gui_lib__msg__EDWaypointList *)allocator.zero_allocate(size, sizeof(rover_gui_lib__msg__EDWaypointList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rover_gui_lib__msg__EDWaypointList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rover_gui_lib__msg__EDWaypointList__fini(&data[i - 1]);
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
rover_gui_lib__msg__EDWaypointList__Sequence__fini(rover_gui_lib__msg__EDWaypointList__Sequence * array)
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
      rover_gui_lib__msg__EDWaypointList__fini(&array->data[i]);
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

rover_gui_lib__msg__EDWaypointList__Sequence *
rover_gui_lib__msg__EDWaypointList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_gui_lib__msg__EDWaypointList__Sequence * array = (rover_gui_lib__msg__EDWaypointList__Sequence *)allocator.allocate(sizeof(rover_gui_lib__msg__EDWaypointList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rover_gui_lib__msg__EDWaypointList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rover_gui_lib__msg__EDWaypointList__Sequence__destroy(rover_gui_lib__msg__EDWaypointList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rover_gui_lib__msg__EDWaypointList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rover_gui_lib__msg__EDWaypointList__Sequence__are_equal(const rover_gui_lib__msg__EDWaypointList__Sequence * lhs, const rover_gui_lib__msg__EDWaypointList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rover_gui_lib__msg__EDWaypointList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rover_gui_lib__msg__EDWaypointList__Sequence__copy(
  const rover_gui_lib__msg__EDWaypointList__Sequence * input,
  rover_gui_lib__msg__EDWaypointList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rover_gui_lib__msg__EDWaypointList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rover_gui_lib__msg__EDWaypointList * data =
      (rover_gui_lib__msg__EDWaypointList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rover_gui_lib__msg__EDWaypointList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rover_gui_lib__msg__EDWaypointList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rover_gui_lib__msg__EDWaypointList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
