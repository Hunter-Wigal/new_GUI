// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marker_interfacing:srv/EditMarker.idl
// generated code does not contain a copyright notice
#include "marker_interfacing/srv/detail/edit_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `marker_type`
#include "rosidl_runtime_c/string_functions.h"

bool
marker_interfacing__srv__EditMarker_Request__init(marker_interfacing__srv__EditMarker_Request * msg)
{
  if (!msg) {
    return false;
  }
  // lat
  // lon
  // alt
  // waypoint_error
  // marker_type
  if (!rosidl_runtime_c__String__init(&msg->marker_type)) {
    marker_interfacing__srv__EditMarker_Request__fini(msg);
    return false;
  }
  // aruco_id
  // aruco_id_2
  // marker_id
  return true;
}

void
marker_interfacing__srv__EditMarker_Request__fini(marker_interfacing__srv__EditMarker_Request * msg)
{
  if (!msg) {
    return;
  }
  // lat
  // lon
  // alt
  // waypoint_error
  // marker_type
  rosidl_runtime_c__String__fini(&msg->marker_type);
  // aruco_id
  // aruco_id_2
  // marker_id
}

bool
marker_interfacing__srv__EditMarker_Request__are_equal(const marker_interfacing__srv__EditMarker_Request * lhs, const marker_interfacing__srv__EditMarker_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
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
marker_interfacing__srv__EditMarker_Request__copy(
  const marker_interfacing__srv__EditMarker_Request * input,
  marker_interfacing__srv__EditMarker_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // alt
  output->alt = input->alt;
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

marker_interfacing__srv__EditMarker_Request *
marker_interfacing__srv__EditMarker_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__srv__EditMarker_Request * msg = (marker_interfacing__srv__EditMarker_Request *)allocator.allocate(sizeof(marker_interfacing__srv__EditMarker_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marker_interfacing__srv__EditMarker_Request));
  bool success = marker_interfacing__srv__EditMarker_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marker_interfacing__srv__EditMarker_Request__destroy(marker_interfacing__srv__EditMarker_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marker_interfacing__srv__EditMarker_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marker_interfacing__srv__EditMarker_Request__Sequence__init(marker_interfacing__srv__EditMarker_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__srv__EditMarker_Request * data = NULL;

  if (size) {
    data = (marker_interfacing__srv__EditMarker_Request *)allocator.zero_allocate(size, sizeof(marker_interfacing__srv__EditMarker_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marker_interfacing__srv__EditMarker_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marker_interfacing__srv__EditMarker_Request__fini(&data[i - 1]);
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
marker_interfacing__srv__EditMarker_Request__Sequence__fini(marker_interfacing__srv__EditMarker_Request__Sequence * array)
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
      marker_interfacing__srv__EditMarker_Request__fini(&array->data[i]);
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

marker_interfacing__srv__EditMarker_Request__Sequence *
marker_interfacing__srv__EditMarker_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__srv__EditMarker_Request__Sequence * array = (marker_interfacing__srv__EditMarker_Request__Sequence *)allocator.allocate(sizeof(marker_interfacing__srv__EditMarker_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marker_interfacing__srv__EditMarker_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marker_interfacing__srv__EditMarker_Request__Sequence__destroy(marker_interfacing__srv__EditMarker_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marker_interfacing__srv__EditMarker_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marker_interfacing__srv__EditMarker_Request__Sequence__are_equal(const marker_interfacing__srv__EditMarker_Request__Sequence * lhs, const marker_interfacing__srv__EditMarker_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marker_interfacing__srv__EditMarker_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marker_interfacing__srv__EditMarker_Request__Sequence__copy(
  const marker_interfacing__srv__EditMarker_Request__Sequence * input,
  marker_interfacing__srv__EditMarker_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marker_interfacing__srv__EditMarker_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marker_interfacing__srv__EditMarker_Request * data =
      (marker_interfacing__srv__EditMarker_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marker_interfacing__srv__EditMarker_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marker_interfacing__srv__EditMarker_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marker_interfacing__srv__EditMarker_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
marker_interfacing__srv__EditMarker_Response__init(marker_interfacing__srv__EditMarker_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
marker_interfacing__srv__EditMarker_Response__fini(marker_interfacing__srv__EditMarker_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
marker_interfacing__srv__EditMarker_Response__are_equal(const marker_interfacing__srv__EditMarker_Response * lhs, const marker_interfacing__srv__EditMarker_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
marker_interfacing__srv__EditMarker_Response__copy(
  const marker_interfacing__srv__EditMarker_Response * input,
  marker_interfacing__srv__EditMarker_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

marker_interfacing__srv__EditMarker_Response *
marker_interfacing__srv__EditMarker_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__srv__EditMarker_Response * msg = (marker_interfacing__srv__EditMarker_Response *)allocator.allocate(sizeof(marker_interfacing__srv__EditMarker_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marker_interfacing__srv__EditMarker_Response));
  bool success = marker_interfacing__srv__EditMarker_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marker_interfacing__srv__EditMarker_Response__destroy(marker_interfacing__srv__EditMarker_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marker_interfacing__srv__EditMarker_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marker_interfacing__srv__EditMarker_Response__Sequence__init(marker_interfacing__srv__EditMarker_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__srv__EditMarker_Response * data = NULL;

  if (size) {
    data = (marker_interfacing__srv__EditMarker_Response *)allocator.zero_allocate(size, sizeof(marker_interfacing__srv__EditMarker_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marker_interfacing__srv__EditMarker_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marker_interfacing__srv__EditMarker_Response__fini(&data[i - 1]);
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
marker_interfacing__srv__EditMarker_Response__Sequence__fini(marker_interfacing__srv__EditMarker_Response__Sequence * array)
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
      marker_interfacing__srv__EditMarker_Response__fini(&array->data[i]);
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

marker_interfacing__srv__EditMarker_Response__Sequence *
marker_interfacing__srv__EditMarker_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__srv__EditMarker_Response__Sequence * array = (marker_interfacing__srv__EditMarker_Response__Sequence *)allocator.allocate(sizeof(marker_interfacing__srv__EditMarker_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marker_interfacing__srv__EditMarker_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marker_interfacing__srv__EditMarker_Response__Sequence__destroy(marker_interfacing__srv__EditMarker_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marker_interfacing__srv__EditMarker_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marker_interfacing__srv__EditMarker_Response__Sequence__are_equal(const marker_interfacing__srv__EditMarker_Response__Sequence * lhs, const marker_interfacing__srv__EditMarker_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marker_interfacing__srv__EditMarker_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marker_interfacing__srv__EditMarker_Response__Sequence__copy(
  const marker_interfacing__srv__EditMarker_Response__Sequence * input,
  marker_interfacing__srv__EditMarker_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marker_interfacing__srv__EditMarker_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marker_interfacing__srv__EditMarker_Response * data =
      (marker_interfacing__srv__EditMarker_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marker_interfacing__srv__EditMarker_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marker_interfacing__srv__EditMarker_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marker_interfacing__srv__EditMarker_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
