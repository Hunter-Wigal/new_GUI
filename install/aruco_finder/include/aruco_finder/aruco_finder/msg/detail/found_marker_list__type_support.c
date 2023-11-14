// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_finder:msg/FoundMarkerList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_finder/msg/detail/found_marker_list__rosidl_typesupport_introspection_c.h"
#include "aruco_finder/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_finder/msg/detail/found_marker_list__functions.h"
#include "aruco_finder/msg/detail/found_marker_list__struct.h"


// Include directives for member types
// Member `markers`
#include "aruco_finder/msg/found_marker.h"
// Member `markers`
#include "aruco_finder/msg/detail/found_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_finder__msg__FoundMarkerList__init(message_memory);
}

void aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_fini_function(void * message_memory)
{
  aruco_finder__msg__FoundMarkerList__fini(message_memory);
}

size_t aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__size_function__FoundMarkerList__markers(
  const void * untyped_member)
{
  const aruco_finder__msg__FoundMarker__Sequence * member =
    (const aruco_finder__msg__FoundMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__get_const_function__FoundMarkerList__markers(
  const void * untyped_member, size_t index)
{
  const aruco_finder__msg__FoundMarker__Sequence * member =
    (const aruco_finder__msg__FoundMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__get_function__FoundMarkerList__markers(
  void * untyped_member, size_t index)
{
  aruco_finder__msg__FoundMarker__Sequence * member =
    (aruco_finder__msg__FoundMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__fetch_function__FoundMarkerList__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aruco_finder__msg__FoundMarker * item =
    ((const aruco_finder__msg__FoundMarker *)
    aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__get_const_function__FoundMarkerList__markers(untyped_member, index));
  aruco_finder__msg__FoundMarker * value =
    (aruco_finder__msg__FoundMarker *)(untyped_value);
  *value = *item;
}

void aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__assign_function__FoundMarkerList__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aruco_finder__msg__FoundMarker * item =
    ((aruco_finder__msg__FoundMarker *)
    aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__get_function__FoundMarkerList__markers(untyped_member, index));
  const aruco_finder__msg__FoundMarker * value =
    (const aruco_finder__msg__FoundMarker *)(untyped_value);
  *item = *value;
}

bool aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__resize_function__FoundMarkerList__markers(
  void * untyped_member, size_t size)
{
  aruco_finder__msg__FoundMarker__Sequence * member =
    (aruco_finder__msg__FoundMarker__Sequence *)(untyped_member);
  aruco_finder__msg__FoundMarker__Sequence__fini(member);
  return aruco_finder__msg__FoundMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_message_member_array[2] = {
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_finder__msg__FoundMarkerList, markers),  // bytes offset in struct
    NULL,  // default value
    aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__size_function__FoundMarkerList__markers,  // size() function pointer
    aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__get_const_function__FoundMarkerList__markers,  // get_const(index) function pointer
    aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__get_function__FoundMarkerList__markers,  // get(index) function pointer
    aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__fetch_function__FoundMarkerList__markers,  // fetch(index, &value) function pointer
    aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__assign_function__FoundMarkerList__markers,  // assign(index, value) function pointer
    aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__resize_function__FoundMarkerList__markers  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_finder__msg__FoundMarkerList, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_message_members = {
  "aruco_finder__msg",  // message namespace
  "FoundMarkerList",  // message name
  2,  // number of fields
  sizeof(aruco_finder__msg__FoundMarkerList),
  aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_message_member_array,  // message members
  aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_message_type_support_handle = {
  0,
  &aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_finder
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_finder, msg, FoundMarkerList)() {
  aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_finder, msg, FoundMarker)();
  if (!aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_message_type_support_handle.typesupport_identifier) {
    aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_finder__msg__FoundMarkerList__rosidl_typesupport_introspection_c__FoundMarkerList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
