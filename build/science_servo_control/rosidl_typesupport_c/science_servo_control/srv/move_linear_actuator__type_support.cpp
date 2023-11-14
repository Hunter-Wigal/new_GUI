// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from science_servo_control:srv/MoveLinearActuator.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "science_servo_control/srv/detail/move_linear_actuator__struct.h"
#include "science_servo_control/srv/detail/move_linear_actuator__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace science_servo_control
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLinearActuator_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLinearActuator_Request_type_support_ids_t;

static const _MoveLinearActuator_Request_type_support_ids_t _MoveLinearActuator_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLinearActuator_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLinearActuator_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLinearActuator_Request_type_support_symbol_names_t _MoveLinearActuator_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, MoveLinearActuator_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, MoveLinearActuator_Request)),
  }
};

typedef struct _MoveLinearActuator_Request_type_support_data_t
{
  void * data[2];
} _MoveLinearActuator_Request_type_support_data_t;

static _MoveLinearActuator_Request_type_support_data_t _MoveLinearActuator_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLinearActuator_Request_message_typesupport_map = {
  2,
  "science_servo_control",
  &_MoveLinearActuator_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLinearActuator_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLinearActuator_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLinearActuator_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLinearActuator_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace science_servo_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, science_servo_control, srv, MoveLinearActuator_Request)() {
  return &::science_servo_control::srv::rosidl_typesupport_c::MoveLinearActuator_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "science_servo_control/srv/detail/move_linear_actuator__struct.h"
// already included above
// #include "science_servo_control/srv/detail/move_linear_actuator__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace science_servo_control
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLinearActuator_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLinearActuator_Response_type_support_ids_t;

static const _MoveLinearActuator_Response_type_support_ids_t _MoveLinearActuator_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLinearActuator_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLinearActuator_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLinearActuator_Response_type_support_symbol_names_t _MoveLinearActuator_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, MoveLinearActuator_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, MoveLinearActuator_Response)),
  }
};

typedef struct _MoveLinearActuator_Response_type_support_data_t
{
  void * data[2];
} _MoveLinearActuator_Response_type_support_data_t;

static _MoveLinearActuator_Response_type_support_data_t _MoveLinearActuator_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLinearActuator_Response_message_typesupport_map = {
  2,
  "science_servo_control",
  &_MoveLinearActuator_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLinearActuator_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLinearActuator_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLinearActuator_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLinearActuator_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace science_servo_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, science_servo_control, srv, MoveLinearActuator_Response)() {
  return &::science_servo_control::srv::rosidl_typesupport_c::MoveLinearActuator_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "science_servo_control/srv/detail/move_linear_actuator__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace science_servo_control
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLinearActuator_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLinearActuator_type_support_ids_t;

static const _MoveLinearActuator_type_support_ids_t _MoveLinearActuator_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLinearActuator_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLinearActuator_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLinearActuator_type_support_symbol_names_t _MoveLinearActuator_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, MoveLinearActuator)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, MoveLinearActuator)),
  }
};

typedef struct _MoveLinearActuator_type_support_data_t
{
  void * data[2];
} _MoveLinearActuator_type_support_data_t;

static _MoveLinearActuator_type_support_data_t _MoveLinearActuator_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLinearActuator_service_typesupport_map = {
  2,
  "science_servo_control",
  &_MoveLinearActuator_service_typesupport_ids.typesupport_identifier[0],
  &_MoveLinearActuator_service_typesupport_symbol_names.symbol_name[0],
  &_MoveLinearActuator_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveLinearActuator_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLinearActuator_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace science_servo_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, science_servo_control, srv, MoveLinearActuator)() {
  return &::science_servo_control::srv::rosidl_typesupport_c::MoveLinearActuator_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
