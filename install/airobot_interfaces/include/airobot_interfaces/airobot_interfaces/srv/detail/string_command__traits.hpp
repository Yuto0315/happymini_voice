// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from airobot_interfaces:srv/StringCommand.idl
// generated code does not contain a copyright notice

#ifndef AIROBOT_INTERFACES__SRV__DETAIL__STRING_COMMAND__TRAITS_HPP_
#define AIROBOT_INTERFACES__SRV__DETAIL__STRING_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "airobot_interfaces/srv/detail/string_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace airobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StringCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StringCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StringCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace airobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use airobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const airobot_interfaces::srv::StringCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  airobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use airobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const airobot_interfaces::srv::StringCommand_Request & msg)
{
  return airobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<airobot_interfaces::srv::StringCommand_Request>()
{
  return "airobot_interfaces::srv::StringCommand_Request";
}

template<>
inline const char * name<airobot_interfaces::srv::StringCommand_Request>()
{
  return "airobot_interfaces/srv/StringCommand_Request";
}

template<>
struct has_fixed_size<airobot_interfaces::srv::StringCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<airobot_interfaces::srv::StringCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<airobot_interfaces::srv::StringCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace airobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StringCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << ", ";
  }

  // member: answer_gender
  {
    out << "answer_gender: ";
    rosidl_generator_traits::value_to_yaml(msg.answer_gender, out);
    out << ", ";
  }

  // member: answer_name
  {
    out << "answer_name: ";
    rosidl_generator_traits::value_to_yaml(msg.answer_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StringCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }

  // member: answer_gender
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer_gender: ";
    rosidl_generator_traits::value_to_yaml(msg.answer_gender, out);
    out << "\n";
  }

  // member: answer_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer_name: ";
    rosidl_generator_traits::value_to_yaml(msg.answer_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StringCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace airobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use airobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const airobot_interfaces::srv::StringCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  airobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use airobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const airobot_interfaces::srv::StringCommand_Response & msg)
{
  return airobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<airobot_interfaces::srv::StringCommand_Response>()
{
  return "airobot_interfaces::srv::StringCommand_Response";
}

template<>
inline const char * name<airobot_interfaces::srv::StringCommand_Response>()
{
  return "airobot_interfaces/srv/StringCommand_Response";
}

template<>
struct has_fixed_size<airobot_interfaces::srv::StringCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<airobot_interfaces::srv::StringCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<airobot_interfaces::srv::StringCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<airobot_interfaces::srv::StringCommand>()
{
  return "airobot_interfaces::srv::StringCommand";
}

template<>
inline const char * name<airobot_interfaces::srv::StringCommand>()
{
  return "airobot_interfaces/srv/StringCommand";
}

template<>
struct has_fixed_size<airobot_interfaces::srv::StringCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<airobot_interfaces::srv::StringCommand_Request>::value &&
    has_fixed_size<airobot_interfaces::srv::StringCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<airobot_interfaces::srv::StringCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<airobot_interfaces::srv::StringCommand_Request>::value &&
    has_bounded_size<airobot_interfaces::srv::StringCommand_Response>::value
  >
{
};

template<>
struct is_service<airobot_interfaces::srv::StringCommand>
  : std::true_type
{
};

template<>
struct is_service_request<airobot_interfaces::srv::StringCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<airobot_interfaces::srv::StringCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIROBOT_INTERFACES__SRV__DETAIL__STRING_COMMAND__TRAITS_HPP_
