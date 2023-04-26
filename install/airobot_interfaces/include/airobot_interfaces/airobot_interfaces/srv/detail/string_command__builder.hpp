// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from airobot_interfaces:srv/StringCommand.idl
// generated code does not contain a copyright notice

#ifndef AIROBOT_INTERFACES__SRV__DETAIL__STRING_COMMAND__BUILDER_HPP_
#define AIROBOT_INTERFACES__SRV__DETAIL__STRING_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "airobot_interfaces/srv/detail/string_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace airobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_StringCommand_Request_command
{
public:
  Init_StringCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::airobot_interfaces::srv::StringCommand_Request command(::airobot_interfaces::srv::StringCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::airobot_interfaces::srv::StringCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::airobot_interfaces::srv::StringCommand_Request>()
{
  return airobot_interfaces::srv::builder::Init_StringCommand_Request_command();
}

}  // namespace airobot_interfaces


namespace airobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_StringCommand_Response_answer
{
public:
  Init_StringCommand_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::airobot_interfaces::srv::StringCommand_Response answer(::airobot_interfaces::srv::StringCommand_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::airobot_interfaces::srv::StringCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::airobot_interfaces::srv::StringCommand_Response>()
{
  return airobot_interfaces::srv::builder::Init_StringCommand_Response_answer();
}

}  // namespace airobot_interfaces

#endif  // AIROBOT_INTERFACES__SRV__DETAIL__STRING_COMMAND__BUILDER_HPP_
