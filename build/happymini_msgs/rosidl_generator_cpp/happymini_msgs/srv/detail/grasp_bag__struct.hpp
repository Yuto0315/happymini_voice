// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from happymini_msgs:srv/GraspBag.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__STRUCT_HPP_
#define HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__happymini_msgs__srv__GraspBag_Request __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__srv__GraspBag_Request __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GraspBag_Request_
{
  using Type = GraspBag_Request_<ContainerAllocator>;

  explicit GraspBag_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_right = "";
    }
  }

  explicit GraspBag_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    happymini_msgs::srv::GraspBag_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::srv::GraspBag_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::srv::GraspBag_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::srv::GraspBag_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::srv::GraspBag_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::srv::GraspBag_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::srv::GraspBag_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::srv::GraspBag_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::srv::GraspBag_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::srv::GraspBag_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__srv__GraspBag_Request
    std::shared_ptr<happymini_msgs::srv::GraspBag_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__srv__GraspBag_Request
    std::shared_ptr<happymini_msgs::srv::GraspBag_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_Request_ & other) const
  {
    if (this->left_right != other.left_right) {
      return false;
    }
    if (this->coordinate != other.coordinate) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_Request_

// alias to use template instance with default allocator
using GraspBag_Request =
  happymini_msgs::srv::GraspBag_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace happymini_msgs


#ifndef _WIN32
# define DEPRECATED__happymini_msgs__srv__GraspBag_Response __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__srv__GraspBag_Response __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GraspBag_Response_
{
  using Type = GraspBag_Response_<ContainerAllocator>;

  explicit GraspBag_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit GraspBag_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    happymini_msgs::srv::GraspBag_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::srv::GraspBag_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::srv::GraspBag_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::srv::GraspBag_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::srv::GraspBag_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::srv::GraspBag_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::srv::GraspBag_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::srv::GraspBag_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::srv::GraspBag_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::srv::GraspBag_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__srv__GraspBag_Response
    std::shared_ptr<happymini_msgs::srv::GraspBag_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__srv__GraspBag_Response
    std::shared_ptr<happymini_msgs::srv::GraspBag_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspBag_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspBag_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspBag_Response_

// alias to use template instance with default allocator
using GraspBag_Response =
  happymini_msgs::srv::GraspBag_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace happymini_msgs

namespace happymini_msgs
{

namespace srv
{

struct GraspBag
{
  using Request = happymini_msgs::srv::GraspBag_Request;
  using Response = happymini_msgs::srv::GraspBag_Response;
};

}  // namespace srv

}  // namespace happymini_msgs

#endif  // HAPPYMINI_MSGS__SRV__DETAIL__GRASP_BAG__STRUCT_HPP_
