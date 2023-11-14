// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marker_interfacing:msg/GeodeticMarker.idl
// generated code does not contain a copyright notice
#include "marker_interfacing/msg/detail/geodetic_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `gps`
#include "geographic_msgs/msg/detail/geo_point__functions.h"
// Member `marker_type`
#include "rosidl_runtime_c/string_functions.h"

bool
marker_interfacing__msg__GeodeticMarker__init(marker_interfacing__msg__GeodeticMarker * msg)
{
  if (!msg) {
    return false;
  }
  // gps
  if (!geographic_msgs__msg__GeoPoint__init(&msg->gps)) {
    marker_interfacing__msg__GeodeticMarker__fini(msg);
    return false;
  }
  // waypoint_error
  // marker_type
  if (!rosidl_runtime_c__String__init(&msg->marker_type)) {
    marker_interfacing__msg__GeodeticMarker__fini(msg);
    return false;
  }
  // aruco_id
  // aruco_id_2
  // marker_id
  return true;
}

void
marker_interfacing__msg__GeodeticMarker__fini(marker_interfacing__msg__GeodeticMarker * msg)
{
  if (!msg) {
    return;
  }
  // gps
  geographic_msgs__msg__GeoPoint__fini(&msg->gps);
  // waypoint_error
  // marker_type
  rosidl_runtime_c__String__fini(&msg->marker_type);
  // aruco_id
  // aruco_id_2
  // marker_id
}

bool
marker_interfacing__msg__GeodeticMarker__are_equal(const marker_interfacing__msg__GeodeticMarker * lhs, const marker_interfacing__msg__GeodeticMarker * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gps
  if (!geographic_msgs__msg__GeoPoint__are_equal(
      &(lhs->gps), &(rhs->gps)))
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
marker_interfacing__msg__GeodeticMarker__copy(
  const marker_interfacing__msg__GeodeticMarker * input,
  marker_interfacing__msg__GeodeticMarker * output)
{
  if (!input || !output) {
    return false;
  }
  // gps
  if (!geographic_msgs__msg__GeoPoint__copy(
      &(input->gps), &(output->gps)))
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

marker_interfacing__msg__GeodeticMarker *
marker_interfacing__msg__GeodeticMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__msg__GeodeticMarker * msg = (marker_interfacing__msg__GeodeticMarker *)allocator.allocate(sizeof(marker_interfacing__msg__GeodeticMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marker_interfacing__msg__GeodeticMarker));
  bool success = marker_interfacing__msg__GeodeticMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marker_interfacing__msg__GeodeticMarker__destroy(marker_interfacing__msg__GeodeticMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marker_interfacing__msg__GeodeticMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marker_interfacing__msg__GeodeticMarker__Sequence__init(marker_interfacing__msg__GeodeticMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__msg__GeodeticMarker * data = NULL;

  if (size) {
    data = (marker_interfacing__msg__GeodeticMarker *)allocator.zero_allocate(size, sizeof(marker_interfacing__msg__GeodeticMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marker_interfacing__msg__GeodeticMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marker_interfacing__msg__GeodeticMarker__fini(&data[i - 1]);
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
marker_interfacing__msg__GeodeticMarker__Sequence__fini(marker_interfacing__msg__GeodeticMarker__Sequence * array)
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
      marker_interfacing__msg__GeodeticMarker__fini(&array->data[i]);
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

marker_interfacing__msg__GeodeticMarker__Sequence *
marker_interfacing__msg__GeodeticMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marker_interfacing__msg__GeodeticMarker__Sequence * array = (marker_interfacing__msg__GeodeticMarker__Sequence *)allocator.allocate(sizeof(marker_interfacing__msg__GeodeticMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marker_interfacing__msg__GeodeticMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marker_interfacing__msg__GeodeticMarker__Sequence__destroy(marker_interfacing__msg__GeodeticMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marker_interfacing__msg__GeodeticMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marker_interfacing__msg__GeodeticMarker__Sequence__are_equal(const marker_interfacing__msg__GeodeticMarker__Sequence * lhs, const marker_interfacing__msg__GeodeticMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marker_interfacing__msg__GeodeticMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marker_interfacing__msg__GeodeticMarker__Sequence__copy(
  const marker_interfacing__msg__GeodeticMarker__Sequence * input,
  marker_interfacing__msg__GeodeticMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(marker_interfacing__msg__GeodeticMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marker_interfacing__msg__GeodeticMarker * data =
      (marker_interfacing__msg__GeodeticMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marker_interfacing__msg__GeodeticMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marker_interfacing__msg__GeodeticMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marker_interfacing__msg__GeodeticMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
