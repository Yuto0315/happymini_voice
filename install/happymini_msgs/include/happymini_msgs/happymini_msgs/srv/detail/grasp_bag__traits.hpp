// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from happymini_msgs:srv/GraspBag.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__TRAITS_HPP_
#define HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "happymini_msgs/srv/detail/grasp_bag__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace happymini_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GraspBag_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_right
  {
    out << "left_right: ";
    rosidl_generator_traits::value_to_yaml(msg.left_right, out);
    out << ", ";
  }

  // member: coordinate
  {
    if (msg.coordinate.size() == 0) {
      out << "coordinate: []";
    } else {
      out << "coordinate: [";
      size_t pending_items = msg.coordinate.size();
      for (auto item : msg.coordinate) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraspBag_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_right: ";
    rosidl_generator_traits::value_to_yaml(msg.left_right, out);
    out << "\n";
  }

  // member: coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordinate.size() == 0) {
      out << "coordinate: []\n";
    } else {
      out << "coordinate:\n";
      for (auto item : msg.coordinate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraspBag_Request & msg, bool use_flow_style = false)
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

}  // namespace happymini_msgs

namespace rosidl_generator_traits
{

[[deprecated("use happymini_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymini_msgs::srv::GraspBag_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymini_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymini_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymini_msgs::srv::GraspBag_Request & msg)
{
  return happymini_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymini_msgs::srv::GraspBag_Request>()
{
  return "happymini_msgs::srv::GraspBag_Request";
}

template<>
inline const char * name<happymini_msgs::srv::GraspBag_Request>()
{
  return "happymini_msgs/srv/GraspBag_Request";
}

template<>
struct has_fixed_size<happymini_msgs::srv::GraspBag_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<happymini_msgs::srv::GraspBag_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<happymini_msgs::srv::GraspBag_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace happymini_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GraspBag_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraspBag_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraspBag_Response & msg, bool use_flow_style = false)
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

}  // namespace happymini_msgs

namespace rosidl_generator_traits
{

[[deprecated("use happymini_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymini_msgs::srv::GraspBag_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymini_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymini_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymini_msgs::srv::GraspBag_Response & msg)
{
  return happymini_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymini_msgs::srv::GraspBag_Response>()
{
  return "happymini_msgs::srv::GraspBag_Response";
}

template<>
inline const char * name<happymini_msgs::srv::GraspBag_Response>()
{
  return "happymini_msgs/srv/GraspBag_Response";
}

template<>
struct has_fixed_size<happymini_msgs::srv::GraspBag_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<happymini_msgs::srv::GraspBag_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<happymini_msgs::srv::GraspBag_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<happymini_msgs::srv::GraspBag>()
{
  return "happymini_msgs::srv::GraspBag";
}

template<>
inline const char * name<happymini_msgs::srv::GraspBag>()
{
  return "happymini_msgs/srv/GraspBag";
}

template<>
struct has_fixed_size<happymini_msgs::srv::GraspBag>
  : std::integral_constant<
    bool,
    has_fixed_size<happymini_msgs::srv::GraspBag_Request>::value &&
    has_fixed_size<happymini_msgs::srv::GraspBag_Response>::value
  >
{
};

template<>
struct has_bounded_size<happymini_msgs::srv::GraspBag>
  : std::integral_constant<
    bool,
    has_bounded_size<happymini_msgs::srv::GraspBag_Request>::value &&
    has_bounded_size<happymini_msgs::srv::GraspBag_Response>::value
  >
{
};

template<>
struct is_service<happymini_msgs::srv::GraspBag>
  : std::true_type
{
};

template<>
struct is_service_request<happymini_msgs::srv::GraspBag_Request>
  : std::true_type
{
};

template<>
struct is_service_response<happymini_msgs::srv::GraspBag_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__TRAITS_HPP_
