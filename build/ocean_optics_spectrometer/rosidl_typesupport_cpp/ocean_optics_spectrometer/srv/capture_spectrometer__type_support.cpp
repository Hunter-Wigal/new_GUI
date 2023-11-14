// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ocean_optics_spectrometer
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CaptureSpectrometer_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureSpectrometer_Request_type_support_ids_t;

static const _CaptureSpectrometer_Request_type_support_ids_t _CaptureSpectrometer_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CaptureSpectrometer_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureSpectrometer_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureSpectrometer_Request_type_support_symbol_names_t _CaptureSpectrometer_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)),
  }
};

typedef struct _CaptureSpectrometer_Request_type_support_data_t
{
  void * data[2];
} _CaptureSpectrometer_Request_type_support_data_t;

static _CaptureSpectrometer_Request_type_support_data_t _CaptureSpectrometer_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureSpectrometer_Request_message_typesupport_map = {
  2,
  "ocean_optics_spectrometer",
  &_CaptureSpectrometer_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CaptureSpectrometer_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CaptureSpectrometer_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CaptureSpectrometer_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureSpectrometer_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>()
{
  return &::ocean_optics_spectrometer::srv::rosidl_typesupport_cpp::CaptureSpectrometer_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)() {
  return get_message_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ocean_optics_spectrometer
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CaptureSpectrometer_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureSpectrometer_Response_type_support_ids_t;

static const _CaptureSpectrometer_Response_type_support_ids_t _CaptureSpectrometer_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CaptureSpectrometer_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureSpectrometer_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureSpectrometer_Response_type_support_symbol_names_t _CaptureSpectrometer_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)),
  }
};

typedef struct _CaptureSpectrometer_Response_type_support_data_t
{
  void * data[2];
} _CaptureSpectrometer_Response_type_support_data_t;

static _CaptureSpectrometer_Response_type_support_data_t _CaptureSpectrometer_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureSpectrometer_Response_message_typesupport_map = {
  2,
  "ocean_optics_spectrometer",
  &_CaptureSpectrometer_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CaptureSpectrometer_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CaptureSpectrometer_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CaptureSpectrometer_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureSpectrometer_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>()
{
  return &::ocean_optics_spectrometer::srv::rosidl_typesupport_cpp::CaptureSpectrometer_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)() {
  return get_message_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ocean_optics_spectrometer
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CaptureSpectrometer_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureSpectrometer_type_support_ids_t;

static const _CaptureSpectrometer_type_support_ids_t _CaptureSpectrometer_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CaptureSpectrometer_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureSpectrometer_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureSpectrometer_type_support_symbol_names_t _CaptureSpectrometer_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer)),
  }
};

typedef struct _CaptureSpectrometer_type_support_data_t
{
  void * data[2];
} _CaptureSpectrometer_type_support_data_t;

static _CaptureSpectrometer_type_support_data_t _CaptureSpectrometer_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureSpectrometer_service_typesupport_map = {
  2,
  "ocean_optics_spectrometer",
  &_CaptureSpectrometer_service_typesupport_ids.typesupport_identifier[0],
  &_CaptureSpectrometer_service_typesupport_symbol_names.symbol_name[0],
  &_CaptureSpectrometer_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CaptureSpectrometer_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureSpectrometer_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer>()
{
  return &::ocean_optics_spectrometer::srv::rosidl_typesupport_cpp::CaptureSpectrometer_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
