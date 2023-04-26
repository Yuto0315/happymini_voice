// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from happymini_msgs:srv/BagLocalization.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__BUILDER_HPP_
#define HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "happymini_msgs/srv/detail/bag_localization__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace happymini_msgs
{

namespace srv
{

namespace builder
{

class Init_BagLocalization_Request_graph
{
public:
  explicit Init_BagLocalization_Request_graph(::happymini_msgs::srv::BagLocalization_Request & msg)
  : msg_(msg)
  {}
  ::happymini_msgs::srv::BagLocalization_Request graph(::happymini_msgs::srv::BagLocalization_Request::_graph_type arg)
  {
    msg_.graph = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::srv::BagLocalization_Request msg_;
};

class Init_BagLocalization_Request_degree
{
public:
  explicit Init_BagLocalization_Request_degree(::happymini_msgs::srv::BagLocalization_Request & msg)
  : msg_(msg)
  {}
  Init_BagLocalization_Request_graph degree(::happymini_msgs::srv::BagLocalization_Request::_degree_type arg)
  {
    msg_.degree = std::move(arg);
    return Init_BagLocalization_Request_graph(msg_);
  }

private:
  ::happymini_msgs::srv::BagLocalization_Request msg_;
};

class Init_BagLocalization_Request_left_right
{
public:
  Init_BagLocalization_Request_left_right()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BagLocalization_Request_degree left_right(::happymini_msgs::srv::BagLocalization_Request::_left_right_type arg)
  {
    msg_.left_right = std::move(arg);
    return Init_BagLocalization_Request_degree(msg_);
  }

private:
  ::happymini_msgs::srv::BagLocalization_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::srv::BagLocalization_Request>()
{
  return happymini_msgs::srv::builder::Init_BagLocalization_Request_left_right();
}

}  // namespace happymini_msgs


namespace happymini_msgs
{

namespace srv
{

namespace builder
{

class Init_BagLocalization_Response_distance_to_bag
{
public:
  explicit Init_BagLocalization_Response_distance_to_bag(::happymini_msgs::srv::BagLocalization_Response & msg)
  : msg_(msg)
  {}
  ::happymini_msgs::srv::BagLocalization_Response distance_to_bag(::happymini_msgs::srv::BagLocalization_Response::_distance_to_bag_type arg)
  {
    msg_.distance_to_bag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::srv::BagLocalization_Response msg_;
};

class Init_BagLocalization_Response_angle_to_bag
{
public:
  Init_BagLocalization_Response_angle_to_bag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BagLocalization_Response_distance_to_bag angle_to_bag(::happymini_msgs::srv::BagLocalization_Response::_angle_to_bag_type arg)
  {
    msg_.angle_to_bag = std::move(arg);
    return Init_BagLocalization_Response_distance_to_bag(msg_);
  }

private:
  ::happymini_msgs::srv::BagLocalization_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::srv::BagLocalization_Response>()
{
  return happymini_msgs::srv::builder::Init_BagLocalization_Response_angle_to_bag();
}

}  // namespace happymini_msgs

#endif  // HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__BUILDER_HPP_
