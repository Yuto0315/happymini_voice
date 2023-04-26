// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from happymini_msgs:srv/GraspBag.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__STRUCT_H_
#define HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__STRUCT_H_

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

/// Struct defined in srv/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__srv__GraspBag_Request
{
  rosidl_runtime_c__String left_right;
  rosidl_runtime_c__double__Sequence coordinate;
} happymini_msgs__srv__GraspBag_Request;

// Struct for a sequence of happymini_msgs__srv__GraspBag_Request.
typedef struct happymini_msgs__srv__GraspBag_Request__Sequence
{
  happymini_msgs__srv__GraspBag_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__srv__GraspBag_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GraspBag in the package happymini_msgs.
typedef struct happymini_msgs__srv__GraspBag_Response
{
  bool result;
} happymini_msgs__srv__GraspBag_Response;

// Struct for a sequence of happymini_msgs__srv__GraspBag_Response.
typedef struct happymini_msgs__srv__GraspBag_Response__Sequence
{
  happymini_msgs__srv__GraspBag_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__srv__GraspBag_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__STRUCT_H_
