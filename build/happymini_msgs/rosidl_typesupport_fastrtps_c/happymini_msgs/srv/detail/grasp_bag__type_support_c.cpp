// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from happymini_msgs:srv/GraspBag.idl
// generated code does not contain a copyright notice
#include "happymini_msgs/srv/detail/grasp_bag__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "happymini_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "happymini_msgs/srv/detail/grasp_bag__struct.h"
#include "happymini_msgs/srv/detail/grasp_bag__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // coordinate
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // coordinate
#include "rosidl_runtime_c/string.h"  // left_right
#include "rosidl_runtime_c/string_functions.h"  // left_right

// forward declare type support functions


using _GraspBag_Request__ros_msg_type = happymini_msgs__srv__GraspBag_Request;

static bool _GraspBag_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GraspBag_Request__ros_msg_type * ros_message = static_cast<const _GraspBag_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: left_right
  {
    const rosidl_runtime_c__String * str = &ros_message->left_right;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: coordinate
  {
    size_t size = ros_message->coordinate.size;
    auto array_ptr = ros_message->coordinate.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GraspBag_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GraspBag_Request__ros_msg_type * ros_message = static_cast<_GraspBag_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: left_right
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->left_right.data) {
      rosidl_runtime_c__String__init(&ros_message->left_right);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->left_right,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'left_right'\n");
      return false;
    }
  }

  // Field name: coordinate
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->coordinate.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->coordinate);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->coordinate, size)) {
      fprintf(stderr, "failed to create array for field 'coordinate'");
      return false;
    }
    auto array_ptr = ros_message->coordinate.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_happymini_msgs
size_t get_serialized_size_happymini_msgs__srv__GraspBag_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraspBag_Request__ros_msg_type * ros_message = static_cast<const _GraspBag_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_right
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->left_right.size + 1);
  // field.name coordinate
  {
    size_t array_size = ros_message->coordinate.size;
    auto array_ptr = ros_message->coordinate.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GraspBag_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_happymini_msgs__srv__GraspBag_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_happymini_msgs
size_t max_serialized_size_happymini_msgs__srv__GraspBag_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: left_right
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: coordinate
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GraspBag_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_happymini_msgs__srv__GraspBag_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GraspBag_Request = {
  "happymini_msgs::srv",
  "GraspBag_Request",
  _GraspBag_Request__cdr_serialize,
  _GraspBag_Request__cdr_deserialize,
  _GraspBag_Request__get_serialized_size,
  _GraspBag_Request__max_serialized_size
};

static rosidl_message_type_support_t _GraspBag_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GraspBag_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, GraspBag_Request)() {
  return &_GraspBag_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "happymini_msgs/srv/detail/grasp_bag__struct.h"
// already included above
// #include "happymini_msgs/srv/detail/grasp_bag__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GraspBag_Response__ros_msg_type = happymini_msgs__srv__GraspBag_Response;

static bool _GraspBag_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GraspBag_Response__ros_msg_type * ros_message = static_cast<const _GraspBag_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _GraspBag_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GraspBag_Response__ros_msg_type * ros_message = static_cast<_GraspBag_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_happymini_msgs
size_t get_serialized_size_happymini_msgs__srv__GraspBag_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraspBag_Response__ros_msg_type * ros_message = static_cast<const _GraspBag_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GraspBag_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_happymini_msgs__srv__GraspBag_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_happymini_msgs
size_t max_serialized_size_happymini_msgs__srv__GraspBag_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GraspBag_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_happymini_msgs__srv__GraspBag_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GraspBag_Response = {
  "happymini_msgs::srv",
  "GraspBag_Response",
  _GraspBag_Response__cdr_serialize,
  _GraspBag_Response__cdr_deserialize,
  _GraspBag_Response__get_serialized_size,
  _GraspBag_Response__max_serialized_size
};

static rosidl_message_type_support_t _GraspBag_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GraspBag_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, GraspBag_Response)() {
  return &_GraspBag_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "happymini_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "happymini_msgs/srv/grasp_bag.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GraspBag__callbacks = {
  "happymini_msgs::srv",
  "GraspBag",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, GraspBag_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, GraspBag_Response)(),
};

static rosidl_service_type_support_t GraspBag__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GraspBag__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, GraspBag)() {
  return &GraspBag__handle;
}

#if defined(__cplusplus)
}
#endif
