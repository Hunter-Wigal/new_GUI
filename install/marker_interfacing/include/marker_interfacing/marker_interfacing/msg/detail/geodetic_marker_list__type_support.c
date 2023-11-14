// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marker_interfacing:msg/GeodeticMarkerList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marker_interfacing/msg/detail/geodetic_marker_list__rosidl_typesupport_introspection_c.h"
#include "marker_interfacing/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marker_interfacing/msg/detail/geodetic_marker_list__functions.h"
#include "marker_interfacing/msg/detail/geodetic_marker_list__struct.h"


// Include directives for member types
// Member `markers`
#include "marker_interfacing/msg/geodetic_marker.h"
// Member `markers`
#include "marker_interfacing/msg/detail/geodetic_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marker_interfacing__msg__GeodeticMarkerList__init(message_memory);
}

void marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_fini_function(void * message_memory)
{
  marker_interfacing__msg__GeodeticMarkerList__fini(message_memory);
}

size_t marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__size_function__GeodeticMarkerList__markers(
  const void * untyped_member)
{
  const marker_interfacing__msg__GeodeticMarker__Sequence * member =
    (const marker_interfacing__msg__GeodeticMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__get_const_function__GeodeticMarkerList__markers(
  const void * untyped_member, size_t index)
{
  const marker_interfacing__msg__GeodeticMarker__Sequence * member =
    (const marker_interfacing__msg__GeodeticMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__get_function__GeodeticMarkerList__markers(
  void * untyped_member, size_t index)
{
  marker_interfacing__msg__GeodeticMarker__Sequence * member =
    (marker_interfacing__msg__GeodeticMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__fetch_function__GeodeticMarkerList__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marker_interfacing__msg__GeodeticMarker * item =
    ((const marker_interfacing__msg__GeodeticMarker *)
    marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__get_const_function__GeodeticMarkerList__markers(untyped_member, index));
  marker_interfacing__msg__GeodeticMarker * value =
    (marker_interfacing__msg__GeodeticMarker *)(untyped_value);
  *value = *item;
}

void marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__assign_function__GeodeticMarkerList__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marker_interfacing__msg__GeodeticMarker * item =
    ((marker_interfacing__msg__GeodeticMarker *)
    marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__get_function__GeodeticMarkerList__markers(untyped_member, index));
  const marker_interfacing__msg__GeodeticMarker * value =
    (const marker_interfacing__msg__GeodeticMarker *)(untyped_value);
  *item = *value;
}

bool marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__resize_function__GeodeticMarkerList__markers(
  void * untyped_member, size_t size)
{
  marker_interfacing__msg__GeodeticMarker__Sequence * member =
    (marker_interfacing__msg__GeodeticMarker__Sequence *)(untyped_member);
  marker_interfacing__msg__GeodeticMarker__Sequence__fini(member);
  return marker_interfacing__msg__GeodeticMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_message_member_array[2] = {
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__msg__GeodeticMarkerList, markers),  // bytes offset in struct
    NULL,  // default value
    marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__size_function__GeodeticMarkerList__markers,  // size() function pointer
    marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__get_const_function__GeodeticMarkerList__markers,  // get_const(index) function pointer
    marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__get_function__GeodeticMarkerList__markers,  // get(index) function pointer
    marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__fetch_function__GeodeticMarkerList__markers,  // fetch(index, &value) function pointer
    marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__assign_function__GeodeticMarkerList__markers,  // assign(index, value) function pointer
    marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__resize_function__GeodeticMarkerList__markers  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__msg__GeodeticMarkerList, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_message_members = {
  "marker_interfacing__msg",  // message namespace
  "GeodeticMarkerList",  // message name
  2,  // number of fields
  sizeof(marker_interfacing__msg__GeodeticMarkerList),
  marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_message_member_array,  // message members
  marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_init_function,  // function to initialize message memory (memory has to be allocated)
  marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_message_type_support_handle = {
  0,
  &marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marker_interfacing
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, msg, GeodeticMarkerList)() {
  marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, msg, GeodeticMarker)();
  if (!marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_message_type_support_handle.typesupport_identifier) {
    marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marker_interfacing__msg__GeodeticMarkerList__rosidl_typesupport_introspection_c__GeodeticMarkerList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
