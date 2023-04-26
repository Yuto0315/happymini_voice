// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from happymini_msgs:srv/GraspBag.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__BUILDER_HPP_
#define HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "happymini_msgs/srv/detail/grasp_bag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace happymini_msgs
{

namespace srv
{

namespace builder
{

class Init_GraspBag_Request_coordinate
{
public:
  explicit Init_GraspBag_Request_coordinate(::happymini_msgs::srv::GraspBag_Request & msg)
  : msg_(msg)
  {}
  ::happymini_msgs::srv::GraspBag_Request coordinate(::happymini_msgs::srv::GraspBag_Request::_coordinate_type arg)
  {
    msg_.coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::srv::GraspBag_Request msg_;
};

class Init_GraspBag_Request_left_right
{
public:
  Init_GraspBag_Request_left_right()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspBag_Request_coordinate left_right(::happymini_msgs::srv::GraspBag_Request::_left_right_type arg)
  {
    msg_.left_right = std::move(arg);
    return Init_GraspBag_Request_coordinate(msg_);
  }

private:
  ::happymini_msgs::srv::GraspBag_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::srv::GraspBag_Request>()
{
  return happymini_msgs::srv::builder::Init_GraspBag_Request_left_right();
}

}  // namespace happymini_msgs


namespace happymini_msgs
{

namespace srv
{

namespace builder
{

class Init_GraspBag_Response_result
{
public:
  Init_GraspBag_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymini_msgs::srv::GraspBag_Response result(::happymini_msgs::srv::GraspBag_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::srv::GraspBag_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::srv::GraspBag_Response>()
{
  return happymini_msgs::srv::builder::Init_GraspBag_Response_result();
}

}  // namespace happymini_msgs

#endif  // HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__BUILDER_HPP_
