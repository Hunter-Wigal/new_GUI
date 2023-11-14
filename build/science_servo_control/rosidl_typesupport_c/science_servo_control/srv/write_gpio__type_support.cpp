// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from science_servo_control:srv/WriteGPIO.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "science_servo_control/srv/detail/write_gpio__struct.h"
#include "science_servo_control/srv/detail/write_gpio__type_support.h"
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

typedef struct _WriteGPIO_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WriteGPIO_Request_type_support_ids_t;

static const _WriteGPIO_Request_type_support_ids_t _WriteGPIO_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _WriteGPIO_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WriteGPIO_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WriteGPIO_Request_type_support_symbol_names_t _WriteGPIO_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, WriteGPIO_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, WriteGPIO_Request)),
  }
};

typedef struct _WriteGPIO_Request_type_support_data_t
{
  void * data[2];
} _WriteGPIO_Request_type_support_data_t;

static _WriteGPIO_Request_type_support_data_t _WriteGPIO_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WriteGPIO_Request_message_typesupport_map = {
  2,
  "science_servo_control",
  &_WriteGPIO_Request_message_typesupport_ids.typesupport_identifier[0],
  &_WriteGPIO_Request_message_typesupport_symbol_names.symbol_name[0],
  &_WriteGPIO_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t WriteGPIO_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WriteGPIO_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, science_servo_control, srv, WriteGPIO_Request)() {
  return &::science_servo_control::srv::rosidl_typesupport_c::WriteGPIO_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "science_servo_control/srv/detail/write_gpio__struct.h"
// already included above
// #include "science_servo_control/srv/detail/write_gpio__type_support.h"
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

typedef struct _WriteGPIO_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WriteGPIO_Response_type_support_ids_t;

static const _WriteGPIO_Response_type_support_ids_t _WriteGPIO_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _WriteGPIO_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WriteGPIO_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WriteGPIO_Response_type_support_symbol_names_t _WriteGPIO_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, WriteGPIO_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, WriteGPIO_Response)),
  }
};

typedef struct _WriteGPIO_Response_type_support_data_t
{
  void * data[2];
} _WriteGPIO_Response_type_support_data_t;

static _WriteGPIO_Response_type_support_data_t _WriteGPIO_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WriteGPIO_Response_message_typesupport_map = {
  2,
  "science_servo_control",
  &_WriteGPIO_Response_message_typesupport_ids.typesupport_identifier[0],
  &_WriteGPIO_Response_message_typesupport_symbol_names.symbol_name[0],
  &_WriteGPIO_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t WriteGPIO_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WriteGPIO_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, science_servo_control, srv, WriteGPIO_Response)() {
  return &::science_servo_control::srv::rosidl_typesupport_c::WriteGPIO_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "science_servo_control/srv/detail/write_gpio__type_support.h"
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

typedef struct _WriteGPIO_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WriteGPIO_type_support_ids_t;

static const _WriteGPIO_type_support_ids_t _WriteGPIO_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _WriteGPIO_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WriteGPIO_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WriteGPIO_type_support_symbol_names_t _WriteGPIO_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, science_servo_control, srv, WriteGPIO)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, WriteGPIO)),
  }
};

typedef struct _WriteGPIO_type_support_data_t
{
  void * data[2];
} _WriteGPIO_type_support_data_t;

static _WriteGPIO_type_support_data_t _WriteGPIO_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WriteGPIO_service_typesupport_map = {
  2,
  "science_servo_control",
  &_WriteGPIO_service_typesupport_ids.typesupport_identifier[0],
  &_WriteGPIO_service_typesupport_symbol_names.symbol_name[0],
  &_WriteGPIO_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t WriteGPIO_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WriteGPIO_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, science_servo_control, srv, WriteGPIO)() {
  return &::science_servo_control::srv::rosidl_typesupport_c::WriteGPIO_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
