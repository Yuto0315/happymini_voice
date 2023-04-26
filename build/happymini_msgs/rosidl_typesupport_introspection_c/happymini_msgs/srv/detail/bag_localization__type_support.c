// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from happymini_msgs:srv/BagLocalization.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "happymini_msgs/srv/detail/bag_localization__rosidl_typesupport_introspection_c.h"
#include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "happymini_msgs/srv/detail/bag_localization__functions.h"
#include "happymini_msgs/srv/detail/bag_localization__struct.h"


// Include directives for member types
// Member `left_right`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__srv__BagLocalization_Request__init(message_memory);
}

void happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_fini_function(void * message_memory)
{
  happymini_msgs__srv__BagLocalization_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_message_member_array[3] = {
  {
    "left_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__srv__BagLocalization_Request, left_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "degree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__srv__BagLocalization_Request, degree),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "graph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__srv__BagLocalization_Request, graph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_message_members = {
  "happymini_msgs__srv",  // message namespace
  "BagLocalization_Request",  // message name
  3,  // number of fields
  sizeof(happymini_msgs__srv__BagLocalization_Request),
  happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_message_member_array,  // message members
  happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_message_type_support_handle = {
  0,
  &happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, BagLocalization_Request)() {
  if (!happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__srv__BagLocalization_Request__rosidl_typesupport_introspection_c__BagLocalization_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "happymini_msgs/srv/detail/bag_localization__rosidl_typesupport_introspection_c.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "happymini_msgs/srv/detail/bag_localization__functions.h"
// already included above
// #include "happymini_msgs/srv/detail/bag_localization__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__srv__BagLocalization_Response__init(message_memory);
}

void happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_fini_function(void * message_memory)
{
  happymini_msgs__srv__BagLocalization_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_message_member_array[2] = {
  {
    "angle_to_bag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__srv__BagLocalization_Response, angle_to_bag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_bag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__srv__BagLocalization_Response, distance_to_bag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_message_members = {
  "happymini_msgs__srv",  // message namespace
  "BagLocalization_Response",  // message name
  2,  // number of fields
  sizeof(happymini_msgs__srv__BagLocalization_Response),
  happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_message_member_array,  // message members
  happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_message_type_support_handle = {
  0,
  &happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, BagLocalization_Response)() {
  if (!happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__srv__BagLocalization_Response__rosidl_typesupport_introspection_c__BagLocalization_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "happymini_msgs/srv/detail/bag_localization__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers happymini_msgs__srv__detail__bag_localization__rosidl_typesupport_introspection_c__BagLocalization_service_members = {
  "happymini_msgs__srv",  // service namespace
  "BagLocalization",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // happymini_msgs__srv__detail__bag_localization__rosidl_typesupport_introspection_c__BagLocalization_Request_message_type_support_handle,
  NULL  // response message
  // happymini_msgs__srv__detail__bag_localization__rosidl_typesupport_introspection_c__BagLocalization_Response_message_type_support_handle
};

static rosidl_service_type_support_t happymini_msgs__srv__detail__bag_localization__rosidl_typesupport_introspection_c__BagLocalization_service_type_support_handle = {
  0,
  &happymini_msgs__srv__detail__bag_localization__rosidl_typesupport_introspection_c__BagLocalization_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, BagLocalization_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, BagLocalization_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, BagLocalization)() {
  if (!happymini_msgs__srv__detail__bag_localization__rosidl_typesupport_introspection_c__BagLocalization_service_type_support_handle.typesupport_identifier) {
    happymini_msgs__srv__detail__bag_localization__rosidl_typesupport_introspection_c__BagLocalization_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)happymini_msgs__srv__detail__bag_localization__rosidl_typesupport_introspection_c__BagLocalization_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, BagLocalization_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, BagLocalization_Response)()->data;
  }

  return &happymini_msgs__srv__detail__bag_localization__rosidl_typesupport_introspection_c__BagLocalization_service_type_support_handle;
}
