// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from happymini_msgs:srv/BagLocalization.idl
// generated code does not contain a copyright notice
#include "happymini_msgs/srv/detail/bag_localization__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "happymini_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "happymini_msgs/srv/detail/bag_localization__struct.h"
#include "happymini_msgs/srv/detail/bag_localization__functions.h"
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

#include "rosidl_runtime_c/string.h"  // left_right
#include "rosidl_runtime_c/string_functions.h"  // left_right

// forward declare type support functions


using _BagLocalization_Request__ros_msg_type = happymini_msgs__srv__BagLocalization_Request;

static bool _BagLocalization_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BagLocalization_Request__ros_msg_type * ros_message = static_cast<const _BagLocalization_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: degree
  {
    cdr << ros_message->degree;
  }

  // Field name: graph
  {
    cdr << (ros_message->graph ? true : false);
  }

  return true;
}

static bool _BagLocalization_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BagLocalization_Request__ros_msg_type * ros_message = static_cast<_BagLocalization_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: degree
  {
    cdr >> ros_message->degree;
  }

  // Field name: graph
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->graph = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_happymini_msgs
size_t get_serialized_size_happymini_msgs__srv__BagLocalization_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BagLocalization_Request__ros_msg_type * ros_message = static_cast<const _BagLocalization_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name degree
  {
    size_t item_size = sizeof(ros_message->degree);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name graph
  {
    size_t item_size = sizeof(ros_message->graph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BagLocalization_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_happymini_msgs__srv__BagLocalization_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_happymini_msgs
size_t max_serialized_size_happymini_msgs__srv__BagLocalization_Request(
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
  // member: degree
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: graph
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _BagLocalization_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_happymini_msgs__srv__BagLocalization_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BagLocalization_Request = {
  "happymini_msgs::srv",
  "BagLocalization_Request",
  _BagLocalization_Request__cdr_serialize,
  _BagLocalization_Request__cdr_deserialize,
  _BagLocalization_Request__get_serialized_size,
  _BagLocalization_Request__max_serialized_size
};

static rosidl_message_type_support_t _BagLocalization_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BagLocalization_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, BagLocalization_Request)() {
  return &_BagLocalization_Request__type_support;
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
// #include "happymini_msgs/srv/detail/bag_localization__struct.h"
// already included above
// #include "happymini_msgs/srv/detail/bag_localization__functions.h"
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


using _BagLocalization_Response__ros_msg_type = happymini_msgs__srv__BagLocalization_Response;

static bool _BagLocalization_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BagLocalization_Response__ros_msg_type * ros_message = static_cast<const _BagLocalization_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: angle_to_bag
  {
    cdr << ros_message->angle_to_bag;
  }

  // Field name: distance_to_bag
  {
    cdr << ros_message->distance_to_bag;
  }

  return true;
}

static bool _BagLocalization_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BagLocalization_Response__ros_msg_type * ros_message = static_cast<_BagLocalization_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: angle_to_bag
  {
    cdr >> ros_message->angle_to_bag;
  }

  // Field name: distance_to_bag
  {
    cdr >> ros_message->distance_to_bag;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_happymini_msgs
size_t get_serialized_size_happymini_msgs__srv__BagLocalization_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BagLocalization_Response__ros_msg_type * ros_message = static_cast<const _BagLocalization_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name angle_to_bag
  {
    size_t item_size = sizeof(ros_message->angle_to_bag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_to_bag
  {
    size_t item_size = sizeof(ros_message->distance_to_bag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BagLocalization_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_happymini_msgs__srv__BagLocalization_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_happymini_msgs
size_t max_serialized_size_happymini_msgs__srv__BagLocalization_Response(
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

  // member: angle_to_bag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance_to_bag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BagLocalization_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_happymini_msgs__srv__BagLocalization_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BagLocalization_Response = {
  "happymini_msgs::srv",
  "BagLocalization_Response",
  _BagLocalization_Response__cdr_serialize,
  _BagLocalization_Response__cdr_deserialize,
  _BagLocalization_Response__get_serialized_size,
  _BagLocalization_Response__max_serialized_size
};

static rosidl_message_type_support_t _BagLocalization_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BagLocalization_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, BagLocalization_Response)() {
  return &_BagLocalization_Response__type_support;
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
#include "happymini_msgs/srv/bag_localization.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BagLocalization__callbacks = {
  "happymini_msgs::srv",
  "BagLocalization",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, BagLocalization_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, BagLocalization_Response)(),
};

static rosidl_service_type_support_t BagLocalization__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BagLocalization__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, happymini_msgs, srv, BagLocalization)() {
  return &BagLocalization__handle;
}

#if defined(__cplusplus)
}
#endif
