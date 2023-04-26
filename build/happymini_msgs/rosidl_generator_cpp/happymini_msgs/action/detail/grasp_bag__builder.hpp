// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from happymini_msgs:action/GraspBag.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__ACTION__DETAIL__GRASP_BAG__BUILDER_HPP_
#define HAPPYMINI_MSGS__ACTION__DETAIL__GRASP_BAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "happymini_msgs/action/detail/grasp_bag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace happymini_msgs
{

namespace action
{

namespace builder
{

class Init_GraspBag_Goal_coordinate
{
public:
  explicit Init_GraspBag_Goal_coordinate(::happymini_msgs::action::GraspBag_Goal & msg)
  : msg_(msg)
  {}
  ::happymini_msgs::action::GraspBag_Goal coordinate(::happymini_msgs::action::GraspBag_Goal::_coordinate_type arg)
  {
    msg_.coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_Goal msg_;
};

class Init_GraspBag_Goal_left_right
{
public:
  Init_GraspBag_Goal_left_right()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspBag_Goal_coordinate left_right(::happymini_msgs::action::GraspBag_Goal::_left_right_type arg)
  {
    msg_.left_right = std::move(arg);
    return Init_GraspBag_Goal_coordinate(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::action::GraspBag_Goal>()
{
  return happymini_msgs::action::builder::Init_GraspBag_Goal_left_right();
}

}  // namespace happymini_msgs


namespace happymini_msgs
{

namespace action
{

namespace builder
{

class Init_GraspBag_Result_result
{
public:
  Init_GraspBag_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymini_msgs::action::GraspBag_Result result(::happymini_msgs::action::GraspBag_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::action::GraspBag_Result>()
{
  return happymini_msgs::action::builder::Init_GraspBag_Result_result();
}

}  // namespace happymini_msgs


namespace happymini_msgs
{

namespace action
{

namespace builder
{

class Init_GraspBag_Feedback_state
{
public:
  Init_GraspBag_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymini_msgs::action::GraspBag_Feedback state(::happymini_msgs::action::GraspBag_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::action::GraspBag_Feedback>()
{
  return happymini_msgs::action::builder::Init_GraspBag_Feedback_state();
}

}  // namespace happymini_msgs


namespace happymini_msgs
{

namespace action
{

namespace builder
{

class Init_GraspBag_SendGoal_Request_goal
{
public:
  explicit Init_GraspBag_SendGoal_Request_goal(::happymini_msgs::action::GraspBag_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::happymini_msgs::action::GraspBag_SendGoal_Request goal(::happymini_msgs::action::GraspBag_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_SendGoal_Request msg_;
};

class Init_GraspBag_SendGoal_Request_goal_id
{
public:
  Init_GraspBag_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspBag_SendGoal_Request_goal goal_id(::happymini_msgs::action::GraspBag_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GraspBag_SendGoal_Request_goal(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::action::GraspBag_SendGoal_Request>()
{
  return happymini_msgs::action::builder::Init_GraspBag_SendGoal_Request_goal_id();
}

}  // namespace happymini_msgs


namespace happymini_msgs
{

namespace action
{

namespace builder
{

class Init_GraspBag_SendGoal_Response_stamp
{
public:
  explicit Init_GraspBag_SendGoal_Response_stamp(::happymini_msgs::action::GraspBag_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::happymini_msgs::action::GraspBag_SendGoal_Response stamp(::happymini_msgs::action::GraspBag_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_SendGoal_Response msg_;
};

class Init_GraspBag_SendGoal_Response_accepted
{
public:
  Init_GraspBag_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspBag_SendGoal_Response_stamp accepted(::happymini_msgs::action::GraspBag_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GraspBag_SendGoal_Response_stamp(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::action::GraspBag_SendGoal_Response>()
{
  return happymini_msgs::action::builder::Init_GraspBag_SendGoal_Response_accepted();
}

}  // namespace happymini_msgs


namespace happymini_msgs
{

namespace action
{

namespace builder
{

class Init_GraspBag_GetResult_Request_goal_id
{
public:
  Init_GraspBag_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymini_msgs::action::GraspBag_GetResult_Request goal_id(::happymini_msgs::action::GraspBag_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::action::GraspBag_GetResult_Request>()
{
  return happymini_msgs::action::builder::Init_GraspBag_GetResult_Request_goal_id();
}

}  // namespace happymini_msgs


namespace happymini_msgs
{

namespace action
{

namespace builder
{

class Init_GraspBag_GetResult_Response_result
{
public:
  explicit Init_GraspBag_GetResult_Response_result(::happymini_msgs::action::GraspBag_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::happymini_msgs::action::GraspBag_GetResult_Response result(::happymini_msgs::action::GraspBag_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_GetResult_Response msg_;
};

class Init_GraspBag_GetResult_Response_status
{
public:
  Init_GraspBag_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspBag_GetResult_Response_result status(::happymini_msgs::action::GraspBag_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GraspBag_GetResult_Response_result(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::action::GraspBag_GetResult_Response>()
{
  return happymini_msgs::action::builder::Init_GraspBag_GetResult_Response_status();
}

}  // namespace happymini_msgs


namespace happymini_msgs
{

namespace action
{

namespace builder
{

class Init_GraspBag_FeedbackMessage_feedback
{
public:
  explicit Init_GraspBag_FeedbackMessage_feedback(::happymini_msgs::action::GraspBag_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::happymini_msgs::action::GraspBag_FeedbackMessage feedback(::happymini_msgs::action::GraspBag_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_FeedbackMessage msg_;
};

class Init_GraspBag_FeedbackMessage_goal_id
{
public:
  Init_GraspBag_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspBag_FeedbackMessage_feedback goal_id(::happymini_msgs::action::GraspBag_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GraspBag_FeedbackMessage_feedback(msg_);
  }

private:
  ::happymini_msgs::action::GraspBag_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymini_msgs::action::GraspBag_FeedbackMessage>()
{
  return happymini_msgs::action::builder::Init_GraspBag_FeedbackMessage_goal_id();
}

}  // namespace happymini_msgs

#endif  // HAPPYMINI_MSGS__ACTION__DETAIL__GRASP_BAG__BUILDER_HPP_
