// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from happymini_msgs:srv/GraspBag.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "happymini_msgs/srv/detail/grasp_bag__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace happymini_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspBag_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspBag_Request_type_support_ids_t;

static const _GraspBag_Request_type_support_ids_t _GraspBag_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspBag_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspBag_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspBag_Request_type_support_symbol_names_t _GraspBag_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, happymini_msgs, srv, GraspBag_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, happymini_msgs, srv, GraspBag_Request)),
  }
};

typedef struct _GraspBag_Request_type_support_data_t
{
  void * data[2];
} _GraspBag_Request_type_support_data_t;

static _GraspBag_Request_type_support_data_t _GraspBag_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspBag_Request_message_typesupport_map = {
  2,
  "happymini_msgs",
  &_GraspBag_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GraspBag_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GraspBag_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspBag_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspBag_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace happymini_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<happymini_msgs::srv::GraspBag_Request>()
{
  return &::happymini_msgs::srv::rosidl_typesupport_cpp::GraspBag_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, happymini_msgs, srv, GraspBag_Request)() {
  return get_message_type_support_handle<happymini_msgs::srv::GraspBag_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "happymini_msgs/srv/detail/grasp_bag__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace happymini_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspBag_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspBag_Response_type_support_ids_t;

static const _GraspBag_Response_type_support_ids_t _GraspBag_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspBag_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspBag_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspBag_Response_type_support_symbol_names_t _GraspBag_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, happymini_msgs, srv, GraspBag_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, happymini_msgs, srv, GraspBag_Response)),
  }
};

typedef struct _GraspBag_Response_type_support_data_t
{
  void * data[2];
} _GraspBag_Response_type_support_data_t;

static _GraspBag_Response_type_support_data_t _GraspBag_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspBag_Response_message_typesupport_map = {
  2,
  "happymini_msgs",
  &_GraspBag_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GraspBag_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GraspBag_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspBag_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspBag_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace happymini_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<happymini_msgs::srv::GraspBag_Response>()
{
  return &::happymini_msgs::srv::rosidl_typesupport_cpp::GraspBag_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, happymini_msgs, srv, GraspBag_Response)() {
  return get_message_type_support_handle<happymini_msgs::srv::GraspBag_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "happymini_msgs/srv/detail/grasp_bag__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace happymini_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspBag_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspBag_type_support_ids_t;

static const _GraspBag_type_support_ids_t _GraspBag_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspBag_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspBag_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspBag_type_support_symbol_names_t _GraspBag_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, happymini_msgs, srv, GraspBag)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, happymini_msgs, srv, GraspBag)),
  }
};

typedef struct _GraspBag_type_support_data_t
{
  void * data[2];
} _GraspBag_type_support_data_t;

static _GraspBag_type_support_data_t _GraspBag_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspBag_service_typesupport_map = {
  2,
  "happymini_msgs",
  &_GraspBag_service_typesupport_ids.typesupport_identifier[0],
  &_GraspBag_service_typesupport_symbol_names.symbol_name[0],
  &_GraspBag_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GraspBag_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspBag_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace happymini_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<happymini_msgs::srv::GraspBag>()
{
  return &::happymini_msgs::srv::rosidl_typesupport_cpp::GraspBag_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
