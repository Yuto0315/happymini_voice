// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from happymini_msgs:action/GraspBag.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__ACTION__DETAIL__GRASP_BAG__STRUCT_H_
#define HAPPYMINI_MSGS__ACTION__DETAIL__GRASP_BAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_right'
#include "rosidl_runtime_c/string.h"
// Member 'coordinate'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__action__GraspBag_Goal
{
  rosidl_runtime_c__String left_right;
  rosidl_runtime_c__double__Sequence coordinate;
} happymini_msgs__action__GraspBag_Goal;

// Struct for a sequence of happymini_msgs__action__GraspBag_Goal.
typedef struct happymini_msgs__action__GraspBag_Goal__Sequence
{
  happymini_msgs__action__GraspBag_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__action__GraspBag_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__action__GraspBag_Result
{
  bool result;
} happymini_msgs__action__GraspBag_Result;

// Struct for a sequence of happymini_msgs__action__GraspBag_Result.
typedef struct happymini_msgs__action__GraspBag_Result__Sequence
{
  happymini_msgs__action__GraspBag_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__action__GraspBag_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__action__GraspBag_Feedback
{
  rosidl_runtime_c__String state;
} happymini_msgs__action__GraspBag_Feedback;

// Struct for a sequence of happymini_msgs__action__GraspBag_Feedback.
typedef struct happymini_msgs__action__GraspBag_Feedback__Sequence
{
  happymini_msgs__action__GraspBag_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__action__GraspBag_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "happymini_msgs/action/detail/grasp_bag__struct.h"

/// Struct defined in action/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__action__GraspBag_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  happymini_msgs__action__GraspBag_Goal goal;
} happymini_msgs__action__GraspBag_SendGoal_Request;

// Struct for a sequence of happymini_msgs__action__GraspBag_SendGoal_Request.
typedef struct happymini_msgs__action__GraspBag_SendGoal_Request__Sequence
{
  happymini_msgs__action__GraspBag_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__action__GraspBag_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__action__GraspBag_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} happymini_msgs__action__GraspBag_SendGoal_Response;

// Struct for a sequence of happymini_msgs__action__GraspBag_SendGoal_Response.
typedef struct happymini_msgs__action__GraspBag_SendGoal_Response__Sequence
{
  happymini_msgs__action__GraspBag_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__action__GraspBag_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__action__GraspBag_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} happymini_msgs__action__GraspBag_GetResult_Request;

// Struct for a sequence of happymini_msgs__action__GraspBag_GetResult_Request.
typedef struct happymini_msgs__action__GraspBag_GetResult_Request__Sequence
{
  happymini_msgs__action__GraspBag_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__action__GraspBag_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.h"

/// Struct defined in action/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__action__GraspBag_GetResult_Response
{
  int8_t status;
  happymini_msgs__action__GraspBag_Result result;
} happymini_msgs__action__GraspBag_GetResult_Response;

// Struct for a sequence of happymini_msgs__action__GraspBag_GetResult_Response.
typedef struct happymini_msgs__action__GraspBag_GetResult_Response__Sequence
{
  happymini_msgs__action__GraspBag_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__action__GraspBag_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.h"

/// Struct defined in action/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__action__GraspBag_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  happymini_msgs__action__GraspBag_Feedback feedback;
} happymini_msgs__action__GraspBag_FeedbackMessage;

// Struct for a sequence of happymini_msgs__action__GraspBag_FeedbackMessage.
typedef struct happymini_msgs__action__GraspBag_FeedbackMessage__Sequence
{
  happymini_msgs__action__GraspBag_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__action__GraspBag_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMINI_MSGS__ACTION__DETAIL__GRASP_BAG__STRUCT_H_
