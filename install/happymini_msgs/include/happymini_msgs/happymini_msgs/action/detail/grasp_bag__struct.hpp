// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from happymini_msgs:action/GraspBag.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__ACTION__DETAIL__GRASP_BAG__STRUCT_HPP_
#define HAPPYMINI_MSGS__ACTION__DETAIL__GRASP_BAG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__happymini_msgs__action__GraspBag_Goal __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__action__GraspBag_Goal __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GraspBag_Goal_
{
  using Type = GraspBag_Goal_<ContainerAllocator>;

  explicit GraspBag_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_right = "";
    }
  }

  explicit GraspBag_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_right(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_right = "";
    }
  }

  // field types and members
  using _left_right_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _left_right_type left_right;
  using _coordinate_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _coordinate_type coordinate;

  // setters for named parameter idiom
  Type & set__left_right(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->left_right = _arg;
    return *this;
  }
  Type & set__coordinate(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->coordinate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::action::GraspBag_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::action::GraspBag_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__action__GraspBag_Goal
    std::shared_ptr<happymini_msgs::action::GraspBag_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__action__GraspBag_Goal
    std::shared_ptr<happymini_msgs::action::GraspBag_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_Goal_ & other) const
  {
    if (this->left_right != other.left_right) {
      return false;
    }
    if (this->coordinate != other.coordinate) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_Goal_

// alias to use template instance with default allocator
using GraspBag_Goal =
  happymini_msgs::action::GraspBag_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace happymini_msgs


#ifndef _WIN32
# define DEPRECATED__happymini_msgs__action__GraspBag_Result __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__action__GraspBag_Result __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GraspBag_Result_
{
  using Type = GraspBag_Result_<ContainerAllocator>;

  explicit GraspBag_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit GraspBag_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::action::GraspBag_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::action::GraspBag_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__action__GraspBag_Result
    std::shared_ptr<happymini_msgs::action::GraspBag_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__action__GraspBag_Result
    std::shared_ptr<happymini_msgs::action::GraspBag_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_Result_

// alias to use template instance with default allocator
using GraspBag_Result =
  happymini_msgs::action::GraspBag_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace happymini_msgs


#ifndef _WIN32
# define DEPRECATED__happymini_msgs__action__GraspBag_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__action__GraspBag_Feedback __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GraspBag_Feedback_
{
  using Type = GraspBag_Feedback_<ContainerAllocator>;

  explicit GraspBag_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit GraspBag_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__action__GraspBag_Feedback
    std::shared_ptr<happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__action__GraspBag_Feedback
    std::shared_ptr<happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_Feedback_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_Feedback_

// alias to use template instance with default allocator
using GraspBag_Feedback =
  happymini_msgs::action::GraspBag_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace happymini_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "happymini_msgs/action/detail/grasp_bag__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__happymini_msgs__action__GraspBag_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__action__GraspBag_SendGoal_Request __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GraspBag_SendGoal_Request_
{
  using Type = GraspBag_SendGoal_Request_<ContainerAllocator>;

  explicit GraspBag_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GraspBag_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    happymini_msgs::action::GraspBag_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const happymini_msgs::action::GraspBag_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__action__GraspBag_SendGoal_Request
    std::shared_ptr<happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__action__GraspBag_SendGoal_Request
    std::shared_ptr<happymini_msgs::action::GraspBag_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_SendGoal_Request_

// alias to use template instance with default allocator
using GraspBag_SendGoal_Request =
  happymini_msgs::action::GraspBag_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace happymini_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__happymini_msgs__action__GraspBag_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__action__GraspBag_SendGoal_Response __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GraspBag_SendGoal_Response_
{
  using Type = GraspBag_SendGoal_Response_<ContainerAllocator>;

  explicit GraspBag_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GraspBag_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__action__GraspBag_SendGoal_Response
    std::shared_ptr<happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__action__GraspBag_SendGoal_Response
    std::shared_ptr<happymini_msgs::action::GraspBag_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_SendGoal_Response_

// alias to use template instance with default allocator
using GraspBag_SendGoal_Response =
  happymini_msgs::action::GraspBag_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace happymini_msgs

namespace happymini_msgs
{

namespace action
{

struct GraspBag_SendGoal
{
  using Request = happymini_msgs::action::GraspBag_SendGoal_Request;
  using Response = happymini_msgs::action::GraspBag_SendGoal_Response;
};

}  // namespace action

}  // namespace happymini_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__happymini_msgs__action__GraspBag_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__action__GraspBag_GetResult_Request __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GraspBag_GetResult_Request_
{
  using Type = GraspBag_GetResult_Request_<ContainerAllocator>;

  explicit GraspBag_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GraspBag_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__action__GraspBag_GetResult_Request
    std::shared_ptr<happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__action__GraspBag_GetResult_Request
    std::shared_ptr<happymini_msgs::action::GraspBag_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_GetResult_Request_

// alias to use template instance with default allocator
using GraspBag_GetResult_Request =
  happymini_msgs::action::GraspBag_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace happymini_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__happymini_msgs__action__GraspBag_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__action__GraspBag_GetResult_Response __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GraspBag_GetResult_Response_
{
  using Type = GraspBag_GetResult_Response_<ContainerAllocator>;

  explicit GraspBag_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GraspBag_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    happymini_msgs::action::GraspBag_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const happymini_msgs::action::GraspBag_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__action__GraspBag_GetResult_Response
    std::shared_ptr<happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__action__GraspBag_GetResult_Response
    std::shared_ptr<happymini_msgs::action::GraspBag_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_GetResult_Response_

// alias to use template instance with default allocator
using GraspBag_GetResult_Response =
  happymini_msgs::action::GraspBag_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace happymini_msgs

namespace happymini_msgs
{

namespace action
{

struct GraspBag_GetResult
{
  using Request = happymini_msgs::action::GraspBag_GetResult_Request;
  using Response = happymini_msgs::action::GraspBag_GetResult_Response;
};

}  // namespace action

}  // namespace happymini_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__happymini_msgs__action__GraspBag_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__action__GraspBag_FeedbackMessage __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GraspBag_FeedbackMessage_
{
  using Type = GraspBag_FeedbackMessage_<ContainerAllocator>;

  explicit GraspBag_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GraspBag_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const happymini_msgs::action::GraspBag_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__action__GraspBag_FeedbackMessage
    std::shared_ptr<happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__action__GraspBag_FeedbackMessage
    std::shared_ptr<happymini_msgs::action::GraspBag_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_FeedbackMessage_

// alias to use template instance with default allocator
using GraspBag_FeedbackMessage =
  happymini_msgs::action::GraspBag_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace happymini_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace happymini_msgs
{

namespace action
{

struct GraspBag
{
  /// The goal message defined in the action definition.
  using Goal = happymini_msgs::action::GraspBag_Goal;
  /// The result message defined in the action definition.
  using Result = happymini_msgs::action::GraspBag_Result;
  /// The feedback message defined in the action definition.
  using Feedback = happymini_msgs::action::GraspBag_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = happymini_msgs::action::GraspBag_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = happymini_msgs::action::GraspBag_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = happymini_msgs::action::GraspBag_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GraspBag GraspBag;

}  // namespace action

}  // namespace happymini_msgs

#endif  // HAPPYMINI_MSGS__ACTION__DETAIL__GRASP_BAG__STRUCT_HPP_
