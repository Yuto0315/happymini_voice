// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from happymini_msgs:action/GraspBag.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
#include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "happymini_msgs/action/detail/grasp_bag__functions.h"
#include "happymini_msgs/action/detail/grasp_bag__struct.h"


// Include directives for member types
// Member `left_right`
#include "rosidl_runtime_c/string_functions.h"
// Member `coordinate`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__action__GraspBag_Goal__init(message_memory);
}

void happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_fini_function(void * message_memory)
{
  happymini_msgs__action__GraspBag_Goal__fini(message_memory);
}

size_t happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__size_function__GraspBag_Goal__coordinate(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__get_const_function__GraspBag_Goal__coordinate(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__get_function__GraspBag_Goal__coordinate(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__fetch_function__GraspBag_Goal__coordinate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__get_const_function__GraspBag_Goal__coordinate(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__assign_function__GraspBag_Goal__coordinate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__get_function__GraspBag_Goal__coordinate(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__resize_function__GraspBag_Goal__coordinate(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_message_member_array[2] = {
  {
    "left_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_Goal, left_right),  // bytes offset in struct
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
    offsetof(happymini_msgs__action__GraspBag_Goal, coordinate),  // bytes offset in struct
    NULL,  // default value
    happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__size_function__GraspBag_Goal__coordinate,  // size() function pointer
    happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__get_const_function__GraspBag_Goal__coordinate,  // get_const(index) function pointer
    happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__get_function__GraspBag_Goal__coordinate,  // get(index) function pointer
    happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__fetch_function__GraspBag_Goal__coordinate,  // fetch(index, &value) function pointer
    happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__assign_function__GraspBag_Goal__coordinate,  // assign(index, value) function pointer
    happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__resize_function__GraspBag_Goal__coordinate  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_message_members = {
  "happymini_msgs__action",  // message namespace
  "GraspBag_Goal",  // message name
  2,  // number of fields
  sizeof(happymini_msgs__action__GraspBag_Goal),
  happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_message_member_array,  // message members
  happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_message_type_support_handle = {
  0,
  &happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_Goal)() {
  if (!happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__action__GraspBag_Goal__rosidl_typesupport_introspection_c__GraspBag_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__action__GraspBag_Result__init(message_memory);
}

void happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_fini_function(void * message_memory)
{
  happymini_msgs__action__GraspBag_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_message_members = {
  "happymini_msgs__action",  // message namespace
  "GraspBag_Result",  // message name
  1,  // number of fields
  sizeof(happymini_msgs__action__GraspBag_Result),
  happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_message_member_array,  // message members
  happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_message_type_support_handle = {
  0,
  &happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_Result)() {
  if (!happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__action__GraspBag_Result__rosidl_typesupport_introspection_c__GraspBag_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.h"


// Include directives for member types
// Member `state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__action__GraspBag_Feedback__init(message_memory);
}

void happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_fini_function(void * message_memory)
{
  happymini_msgs__action__GraspBag_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_Feedback, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_message_members = {
  "happymini_msgs__action",  // message namespace
  "GraspBag_Feedback",  // message name
  1,  // number of fields
  sizeof(happymini_msgs__action__GraspBag_Feedback),
  happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_message_member_array,  // message members
  happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_message_type_support_handle = {
  0,
  &happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_Feedback)() {
  if (!happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__action__GraspBag_Feedback__rosidl_typesupport_introspection_c__GraspBag_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "happymini_msgs/action/grasp_bag.h"
// Member `goal`
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__action__GraspBag_SendGoal_Request__init(message_memory);
}

void happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_fini_function(void * message_memory)
{
  happymini_msgs__action__GraspBag_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_members = {
  "happymini_msgs__action",  // message namespace
  "GraspBag_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(happymini_msgs__action__GraspBag_SendGoal_Request),
  happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_member_array,  // message members
  happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_type_support_handle = {
  0,
  &happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_SendGoal_Request)() {
  happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_Goal)();
  if (!happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__action__GraspBag_SendGoal_Request__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__action__GraspBag_SendGoal_Response__init(message_memory);
}

void happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_fini_function(void * message_memory)
{
  happymini_msgs__action__GraspBag_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_members = {
  "happymini_msgs__action",  // message namespace
  "GraspBag_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(happymini_msgs__action__GraspBag_SendGoal_Response),
  happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_member_array,  // message members
  happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_type_support_handle = {
  0,
  &happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_SendGoal_Response)() {
  happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__action__GraspBag_SendGoal_Response__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_SendGoal_service_members = {
  "happymini_msgs__action",  // service namespace
  "GraspBag_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_SendGoal_service_type_support_handle = {
  0,
  &happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_SendGoal)() {
  if (!happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_SendGoal_service_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_SendGoal_Response)()->data;
  }

  return &happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__action__GraspBag_GetResult_Request__init(message_memory);
}

void happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_fini_function(void * message_memory)
{
  happymini_msgs__action__GraspBag_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_members = {
  "happymini_msgs__action",  // message namespace
  "GraspBag_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(happymini_msgs__action__GraspBag_GetResult_Request),
  happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_member_array,  // message members
  happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_type_support_handle = {
  0,
  &happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_GetResult_Request)() {
  happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__action__GraspBag_GetResult_Request__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "happymini_msgs/action/grasp_bag.h"
// Member `result`
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__action__GraspBag_GetResult_Response__init(message_memory);
}

void happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_fini_function(void * message_memory)
{
  happymini_msgs__action__GraspBag_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_members = {
  "happymini_msgs__action",  // message namespace
  "GraspBag_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(happymini_msgs__action__GraspBag_GetResult_Response),
  happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_member_array,  // message members
  happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_type_support_handle = {
  0,
  &happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_GetResult_Response)() {
  happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_Result)();
  if (!happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__action__GraspBag_GetResult_Response__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_GetResult_service_members = {
  "happymini_msgs__action",  // service namespace
  "GraspBag_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_GetResult_service_type_support_handle = {
  0,
  &happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_GetResult)() {
  if (!happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_GetResult_service_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_GetResult_Response)()->data;
  }

  return &happymini_msgs__action__detail__grasp_bag__rosidl_typesupport_introspection_c__GraspBag_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "happymini_msgs/action/grasp_bag.h"
// Member `feedback`
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  happymini_msgs__action__GraspBag_FeedbackMessage__init(message_memory);
}

void happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_fini_function(void * message_memory)
{
  happymini_msgs__action__GraspBag_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(happymini_msgs__action__GraspBag_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_members = {
  "happymini_msgs__action",  // message namespace
  "GraspBag_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(happymini_msgs__action__GraspBag_FeedbackMessage),
  happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_member_array,  // message members
  happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_type_support_handle = {
  0,
  &happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_happymini_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_FeedbackMessage)() {
  happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, happymini_msgs, action, GraspBag_Feedback)();
  if (!happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &happymini_msgs__action__GraspBag_FeedbackMessage__rosidl_typesupport_introspection_c__GraspBag_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
