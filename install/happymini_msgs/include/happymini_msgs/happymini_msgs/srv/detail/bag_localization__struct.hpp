// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from happymini_msgs:srv/BagLocalization.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__STRUCT_HPP_
#define HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__happymini_msgs__srv__BagLocalization_Request __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__srv__BagLocalization_Request __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BagLocalization_Request_
{
  using Type = BagLocalization_Request_<ContainerAllocator>;

  explicit BagLocalization_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_right = "";
      this->degree = 0l;
      this->graph = false;
    }
  }

  explicit BagLocalization_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_right(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_right = "";
      this->degree = 0l;
      this->graph = false;
    }
  }

  // field types and members
  using _left_right_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _left_right_type left_right;
  using _degree_type =
    int32_t;
  _degree_type degree;
  using _graph_type =
    bool;
  _graph_type graph;

  // setters for named parameter idiom
  Type & set__left_right(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->left_right = _arg;
    return *this;
  }
  Type & set__degree(
    const int32_t & _arg)
  {
    this->degree = _arg;
    return *this;
  }
  Type & set__graph(
    const bool & _arg)
  {
    this->graph = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__srv__BagLocalization_Request
    std::shared_ptr<happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__srv__BagLocalization_Request
    std::shared_ptr<happymini_msgs::srv::BagLocalization_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BagLocalization_Request_ & other) const
  {
    if (this->left_right != other.left_right) {
      return false;
    }
    if (this->degree != other.degree) {
      return false;
    }
    if (this->graph != other.graph) {
      return false;
    }
    return true;
  }
  bool operator!=(const BagLocalization_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BagLocalization_Request_

// alias to use template instance with default allocator
using BagLocalization_Request =
  happymini_msgs::srv::BagLocalization_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace happymini_msgs


#ifndef _WIN32
# define DEPRECATED__happymini_msgs__srv__BagLocalization_Response __attribute__((deprecated))
#else
# define DEPRECATED__happymini_msgs__srv__BagLocalization_Response __declspec(deprecated)
#endif

namespace happymini_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BagLocalization_Response_
{
  using Type = BagLocalization_Response_<ContainerAllocator>;

  explicit BagLocalization_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_to_bag = 0.0f;
      this->distance_to_bag = 0.0f;
    }
  }

  explicit BagLocalization_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_to_bag = 0.0f;
      this->distance_to_bag = 0.0f;
    }
  }

  // field types and members
  using _angle_to_bag_type =
    float;
  _angle_to_bag_type angle_to_bag;
  using _distance_to_bag_type =
    float;
  _distance_to_bag_type distance_to_bag;

  // setters for named parameter idiom
  Type & set__angle_to_bag(
    const float & _arg)
  {
    this->angle_to_bag = _arg;
    return *this;
  }
  Type & set__distance_to_bag(
    const float & _arg)
  {
    this->distance_to_bag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__happymini_msgs__srv__BagLocalization_Response
    std::shared_ptr<happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__happymini_msgs__srv__BagLocalization_Response
    std::shared_ptr<happymini_msgs::srv::BagLocalization_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BagLocalization_Response_ & other) const
  {
    if (this->angle_to_bag != other.angle_to_bag) {
      return false;
    }
    if (this->distance_to_bag != other.distance_to_bag) {
      return false;
    }
    return true;
  }
  bool operator!=(const BagLocalization_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BagLocalization_Response_

// alias to use template instance with default allocator
using BagLocalization_Response =
  happymini_msgs::srv::BagLocalization_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace happymini_msgs

namespace happymini_msgs
{

namespace srv
{

struct BagLocalization
{
  using Request = happymini_msgs::srv::BagLocalization_Request;
  using Response = happymini_msgs::srv::BagLocalization_Response;
};

}  // namespace srv

}  // namespace happymini_msgs

#endif  // HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__STRUCT_HPP_
