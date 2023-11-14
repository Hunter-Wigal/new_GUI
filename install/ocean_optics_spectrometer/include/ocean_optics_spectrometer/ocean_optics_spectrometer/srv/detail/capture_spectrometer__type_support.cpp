// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ocean_optics_spectrometer
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CaptureSpectrometer_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ocean_optics_spectrometer::srv::CaptureSpectrometer_Request(_init);
}

void CaptureSpectrometer_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request *>(message_memory);
  typed_message->~CaptureSpectrometer_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CaptureSpectrometer_Request_message_member_array[1] = {
  {
    "integration_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocean_optics_spectrometer::srv::CaptureSpectrometer_Request, integration_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CaptureSpectrometer_Request_message_members = {
  "ocean_optics_spectrometer::srv",  // message namespace
  "CaptureSpectrometer_Request",  // message name
  1,  // number of fields
  sizeof(ocean_optics_spectrometer::srv::CaptureSpectrometer_Request),
  CaptureSpectrometer_Request_message_member_array,  // message members
  CaptureSpectrometer_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CaptureSpectrometer_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CaptureSpectrometer_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CaptureSpectrometer_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>()
{
  return &::ocean_optics_spectrometer::srv::rosidl_typesupport_introspection_cpp::CaptureSpectrometer_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)() {
  return &::ocean_optics_spectrometer::srv::rosidl_typesupport_introspection_cpp::CaptureSpectrometer_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ocean_optics_spectrometer
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CaptureSpectrometer_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ocean_optics_spectrometer::srv::CaptureSpectrometer_Response(_init);
}

void CaptureSpectrometer_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response *>(message_memory);
  typed_message->~CaptureSpectrometer_Response();
}

size_t size_function__CaptureSpectrometer_Response__wavelengths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CaptureSpectrometer_Response__wavelengths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__CaptureSpectrometer_Response__wavelengths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__CaptureSpectrometer_Response__wavelengths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CaptureSpectrometer_Response__wavelengths(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CaptureSpectrometer_Response__wavelengths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CaptureSpectrometer_Response__wavelengths(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__CaptureSpectrometer_Response__wavelengths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CaptureSpectrometer_Response__intensities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CaptureSpectrometer_Response__intensities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__CaptureSpectrometer_Response__intensities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__CaptureSpectrometer_Response__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CaptureSpectrometer_Response__intensities(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CaptureSpectrometer_Response__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CaptureSpectrometer_Response__intensities(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__CaptureSpectrometer_Response__intensities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CaptureSpectrometer_Response_message_member_array[2] = {
  {
    "wavelengths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocean_optics_spectrometer::srv::CaptureSpectrometer_Response, wavelengths),  // bytes offset in struct
    nullptr,  // default value
    size_function__CaptureSpectrometer_Response__wavelengths,  // size() function pointer
    get_const_function__CaptureSpectrometer_Response__wavelengths,  // get_const(index) function pointer
    get_function__CaptureSpectrometer_Response__wavelengths,  // get(index) function pointer
    fetch_function__CaptureSpectrometer_Response__wavelengths,  // fetch(index, &value) function pointer
    assign_function__CaptureSpectrometer_Response__wavelengths,  // assign(index, value) function pointer
    resize_function__CaptureSpectrometer_Response__wavelengths  // resize(index) function pointer
  },
  {
    "intensities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocean_optics_spectrometer::srv::CaptureSpectrometer_Response, intensities),  // bytes offset in struct
    nullptr,  // default value
    size_function__CaptureSpectrometer_Response__intensities,  // size() function pointer
    get_const_function__CaptureSpectrometer_Response__intensities,  // get_const(index) function pointer
    get_function__CaptureSpectrometer_Response__intensities,  // get(index) function pointer
    fetch_function__CaptureSpectrometer_Response__intensities,  // fetch(index, &value) function pointer
    assign_function__CaptureSpectrometer_Response__intensities,  // assign(index, value) function pointer
    resize_function__CaptureSpectrometer_Response__intensities  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CaptureSpectrometer_Response_message_members = {
  "ocean_optics_spectrometer::srv",  // message namespace
  "CaptureSpectrometer_Response",  // message name
  2,  // number of fields
  sizeof(ocean_optics_spectrometer::srv::CaptureSpectrometer_Response),
  CaptureSpectrometer_Response_message_member_array,  // message members
  CaptureSpectrometer_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CaptureSpectrometer_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CaptureSpectrometer_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CaptureSpectrometer_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>()
{
  return &::ocean_optics_spectrometer::srv::rosidl_typesupport_introspection_cpp::CaptureSpectrometer_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)() {
  return &::ocean_optics_spectrometer::srv::rosidl_typesupport_introspection_cpp::CaptureSpectrometer_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ocean_optics_spectrometer
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CaptureSpectrometer_service_members = {
  "ocean_optics_spectrometer::srv",  // service namespace
  "CaptureSpectrometer",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CaptureSpectrometer_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CaptureSpectrometer_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ocean_optics_spectrometer::srv::rosidl_typesupport_introspection_cpp::CaptureSpectrometer_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ocean_optics_spectrometer::srv::CaptureSpectrometer_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ocean_optics_spectrometer::srv::CaptureSpectrometer_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer>();
}

#ifdef __cplusplus
}
#endif
