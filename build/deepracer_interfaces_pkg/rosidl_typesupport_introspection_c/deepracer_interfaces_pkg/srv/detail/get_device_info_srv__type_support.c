// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deepracer_interfaces_pkg:srv/GetDeviceInfoSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deepracer_interfaces_pkg/srv/detail/get_device_info_srv__rosidl_typesupport_introspection_c.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deepracer_interfaces_pkg/srv/detail/get_device_info_srv__functions.h"
#include "deepracer_interfaces_pkg/srv/detail/get_device_info_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Request__init(message_memory);
}

void GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_fini_function(void * message_memory)
{
  deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_message_members = {
  "deepracer_interfaces_pkg__srv",  // message namespace
  "GetDeviceInfoSrv_Request",  // message name
  1,  // number of fields
  sizeof(deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Request),
  GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_message_member_array,  // message members
  GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_message_type_support_handle = {
  0,
  &GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deepracer_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, GetDeviceInfoSrv_Request)() {
  if (!GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_message_type_support_handle.typesupport_identifier) {
    GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDeviceInfoSrv_Request__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/get_device_info_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "deepracer_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/get_device_info_srv__functions.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/get_device_info_srv__struct.h"


// Include directives for member types
// Member `hardware_version`
// Member `software_version`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Response__init(message_memory);
}

void GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_fini_function(void * message_memory)
{
  deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_message_member_array[3] = {
  {
    "hardware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Response, hardware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "software_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Response, software_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_message_members = {
  "deepracer_interfaces_pkg__srv",  // message namespace
  "GetDeviceInfoSrv_Response",  // message name
  3,  // number of fields
  sizeof(deepracer_interfaces_pkg__srv__GetDeviceInfoSrv_Response),
  GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_message_member_array,  // message members
  GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_message_type_support_handle = {
  0,
  &GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deepracer_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, GetDeviceInfoSrv_Response)() {
  if (!GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_message_type_support_handle.typesupport_identifier) {
    GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDeviceInfoSrv_Response__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "deepracer_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/get_device_info_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers deepracer_interfaces_pkg__srv__detail__get_device_info_srv__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_service_members = {
  "deepracer_interfaces_pkg__srv",  // service namespace
  "GetDeviceInfoSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // deepracer_interfaces_pkg__srv__detail__get_device_info_srv__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Request_message_type_support_handle,
  NULL  // response message
  // deepracer_interfaces_pkg__srv__detail__get_device_info_srv__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t deepracer_interfaces_pkg__srv__detail__get_device_info_srv__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_service_type_support_handle = {
  0,
  &deepracer_interfaces_pkg__srv__detail__get_device_info_srv__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, GetDeviceInfoSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, GetDeviceInfoSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deepracer_interfaces_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, GetDeviceInfoSrv)() {
  if (!deepracer_interfaces_pkg__srv__detail__get_device_info_srv__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_service_type_support_handle.typesupport_identifier) {
    deepracer_interfaces_pkg__srv__detail__get_device_info_srv__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)deepracer_interfaces_pkg__srv__detail__get_device_info_srv__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, GetDeviceInfoSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, GetDeviceInfoSrv_Response)()->data;
  }

  return &deepracer_interfaces_pkg__srv__detail__get_device_info_srv__rosidl_typesupport_introspection_c__GetDeviceInfoSrv_service_type_support_handle;
}
