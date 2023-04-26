// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from happymini_msgs:srv/BagLocalization.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__STRUCT_H_
#define HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__STRUCT_H_

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

/// Struct defined in srv/BagLocalization in the package happymini_msgs.
typedef struct happymini_msgs__srv__BagLocalization_Request
{
  rosidl_runtime_c__String left_right;
  int32_t degree;
  bool graph;
} happymini_msgs__srv__BagLocalization_Request;

// Struct for a sequence of happymini_msgs__srv__BagLocalization_Request.
typedef struct happymini_msgs__srv__BagLocalization_Request__Sequence
{
  happymini_msgs__srv__BagLocalization_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__srv__BagLocalization_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BagLocalization in the package happymini_msgs.
typedef struct happymini_msgs__srv__BagLocalization_Response
{
  float angle_to_bag;
  float distance_to_bag;
} happymini_msgs__srv__BagLocalization_Response;

// Struct for a sequence of happymini_msgs__srv__BagLocalization_Response.
typedef struct happymini_msgs__srv__BagLocalization_Response__Sequence
{
  happymini_msgs__srv__BagLocalization_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymini_msgs__srv__BagLocalization_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__STRUCT_H_
