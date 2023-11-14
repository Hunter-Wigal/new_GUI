// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from theora_webcams:srv/GetResolutions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "theora_webcams/srv/detail/get_resolutions__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace theora_webcams
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetResolutions_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) theora_webcams::srv::GetResolutions_Request(_init);
}

void GetResolutions_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<theora_webcams::srv::GetResolutions_Request *>(message_memory);
  typed_message->~GetResolutions_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetResolutions_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams::srv::GetResolutions_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetResolutions_Request_message_members = {
  "theora_webcams::srv",  // message namespace
  "GetResolutions_Request",  // message name
  1,  // number of fields
  sizeof(theora_webcams::srv::GetResolutions_Request),
  GetResolutions_Request_message_member_array,  // message members
  GetResolutions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetResolutions_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetResolutions_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetResolutions_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace theora_webcams


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<theora_webcams::srv::GetResolutions_Request>()
{
  return &::theora_webcams::srv::rosidl_typesupport_introspection_cpp::GetResolutions_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, theora_webcams, srv, GetResolutions_Request)() {
  return &::theora_webcams::srv::rosidl_typesupport_introspection_cpp::GetResolutions_Request_message_type_support_handle;
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
// #include "theora_webcams/srv/detail/get_resolutions__struct.hpp"
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

namespace theora_webcams
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetResolutions_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) theora_webcams::srv::GetResolutions_Response(_init);
}

void GetResolutions_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<theora_webcams::srv::GetResolutions_Response *>(message_memory);
  typed_message->~GetResolutions_Response();
}

size_t size_function__GetResolutions_Response__resolutions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<theora_webcams::msg::Resolution> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetResolutions_Response__resolutions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<theora_webcams::msg::Resolution> *>(untyped_member);
  return &member[index];
}

void * get_function__GetResolutions_Response__resolutions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<theora_webcams::msg::Resolution> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetResolutions_Response__resolutions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const theora_webcams::msg::Resolution *>(
    get_const_function__GetResolutions_Response__resolutions(untyped_member, index));
  auto & value = *reinterpret_cast<theora_webcams::msg::Resolution *>(untyped_value);
  value = item;
}

void assign_function__GetResolutions_Response__resolutions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<theora_webcams::msg::Resolution *>(
    get_function__GetResolutions_Response__resolutions(untyped_member, index));
  const auto & value = *reinterpret_cast<const theora_webcams::msg::Resolution *>(untyped_value);
  item = value;
}

void resize_function__GetResolutions_Response__resolutions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<theora_webcams::msg::Resolution> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetResolutions_Response_message_member_array[1] = {
  {
    "resolutions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<theora_webcams::msg::Resolution>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams::srv::GetResolutions_Response, resolutions),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetResolutions_Response__resolutions,  // size() function pointer
    get_const_function__GetResolutions_Response__resolutions,  // get_const(index) function pointer
    get_function__GetResolutions_Response__resolutions,  // get(index) function pointer
    fetch_function__GetResolutions_Response__resolutions,  // fetch(index, &value) function pointer
    assign_function__GetResolutions_Response__resolutions,  // assign(index, value) function pointer
    resize_function__GetResolutions_Response__resolutions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetResolutions_Response_message_members = {
  "theora_webcams::srv",  // message namespace
  "GetResolutions_Response",  // message name
  1,  // number of fields
  sizeof(theora_webcams::srv::GetResolutions_Response),
  GetResolutions_Response_message_member_array,  // message members
  GetResolutions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetResolutions_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetResolutions_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetResolutions_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace theora_webcams


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<theora_webcams::srv::GetResolutions_Response>()
{
  return &::theora_webcams::srv::rosidl_typesupport_introspection_cpp::GetResolutions_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, theora_webcams, srv, GetResolutions_Response)() {
  return &::theora_webcams::srv::rosidl_typesupport_introspection_cpp::GetResolutions_Response_message_type_support_handle;
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
// #include "theora_webcams/srv/detail/get_resolutions__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace theora_webcams
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetResolutions_service_members = {
  "theora_webcams::srv",  // service namespace
  "GetResolutions",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<theora_webcams::srv::GetResolutions>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetResolutions_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetResolutions_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace theora_webcams


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<theora_webcams::srv::GetResolutions>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::theora_webcams::srv::rosidl_typesupport_introspection_cpp::GetResolutions_service_type_support_handle;
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
        ::theora_webcams::srv::GetResolutions_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::theora_webcams::srv::GetResolutions_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, theora_webcams, srv, GetResolutions)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<theora_webcams::srv::GetResolutions>();
}

#ifdef __cplusplus
}
#endif
