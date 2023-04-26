// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from happymini_msgs:srv/GraspBag.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "happymini_msgs/srv/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
#include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "happymini_msgs/srv/detail/grasp_bag__functions.h"
#include "happymini_msgs/srv/detail/grasp_bag__struct.h"


// Include directives for member types
// Member `left_right`
#include "rosidl_runtime_c/string_functions.h"
// Member `coordinate`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__srv__GraspBag_Request__init(message_memory);
}

void happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_fini_function(void * message_memory)
{
  happymini_msgs__srv__GraspBag_Request__fini(message_memory);
}

size_t happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__size_function__GraspBag_Request__coordinate(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__get_const_function__GraspBag_Request__coordinate(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__get_function__GraspBag_Request__coordinate(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__fetch_function__GraspBag_Request__coordinate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__get_const_function__GraspBag_Request__coordinate(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__assign_function__GraspBag_Request__coordinate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__get_function__GraspBag_Request__coordinate(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__resize_function__GraspBag_Request__coordinate(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_message_member_array[2] = {
  {
    "left_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__srv__GraspBag_Request, left_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__srv__GraspBag_Request, coordinate),  // bytes offset in struct
    NULL,  // default value
    happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__size_function__GraspBag_Request__coordinate,  // size() function pointer
    happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__get_const_function__GraspBag_Request__coordinate,  // get_const(index) function pointer
    happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__get_function__GraspBag_Request__coordinate,  // get(index) function pointer
    happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__fetch_function__GraspBag_Request__coordinate,  // fetch(index, &value) function pointer
    happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__assign_function__GraspBag_Request__coordinate,  // assign(index, value) function pointer
    happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__resize_function__GraspBag_Request__coordinate  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_message_members = {
  "happymini_msgs__srv",  // message namespace
  "GraspBag_Request",  // message name
  2,  // number of fields
  sizeof(happymini_msgs__srv__GraspBag_Request),
  happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_message_member_array,  // message members
  happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_message_type_support_handle = {
  0,
  &happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, GraspBag_Request)() {
  if (!happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__srv__GraspBag_Request__rosidl_typesupport_introspection_c__GraspBag_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "happymini_msgs/srv/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "happymini_msgs/srv/detail/grasp_bag__functions.h"
// already included above
// #include "happymini_msgs/srv/detail/grasp_bag__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__srv__GraspBag_Response__init(message_memory);
}

void happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_fini_function(void * message_memory)
{
  happymini_msgs__srv__GraspBag_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__srv__GraspBag_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_message_members = {
  "happymini_msgs__srv",  // message namespace
  "GraspBag_Response",  // message name
  1,  // number of fields
  sizeof(happymini_msgs__srv__GraspBag_Response),
  happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_message_member_array,  // message members
  happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_message_type_support_handle = {
  0,
  &happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, GraspBag_Response)() {
  if (!happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__srv__GraspBag_Response__rosidl_typesupport_introspection_c__GraspBag_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "happymini_msgs/srv/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers happymini_msgs__srv__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_service_members = {
  "happymini_msgs__srv",  // service namespace
  "GraspBag",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // happymini_msgs__srv__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_Request_message_type_support_handle,
  NULL  // response message
  // happymini_msgs__srv__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_Response_message_type_support_handle
};

static rosidl_service_type_support_t happymini_msgs__srv__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_service_type_support_handle = {
  0,
  &happymini_msgs__srv__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, GraspBag_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, GraspBag_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, GraspBag)() {
  if (!happymini_msgs__srv__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_service_type_support_handle.typesupport_identifier) {
    happymini_msgs__srv__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)happymini_msgs__srv__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, GraspBag_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, srv, GraspBag_Response)()->data;
  }

  return &happymini_msgs__srv__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_service_type_support_handle;
}
