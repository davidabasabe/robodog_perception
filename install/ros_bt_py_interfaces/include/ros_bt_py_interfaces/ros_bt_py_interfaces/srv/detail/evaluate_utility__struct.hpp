// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:srv/EvaluateUtility.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__EVALUATE_UTILITY__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__EVALUATE_UTILITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tree'
#include "ros_bt_py_interfaces/msg/detail/tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__EvaluateUtility_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__EvaluateUtility_Request __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EvaluateUtility_Request_
{
  using Type = EvaluateUtility_Request_<ContainerAllocator>;

  explicit EvaluateUtility_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tree(_init)
  {
    (void)_init;
  }

  explicit EvaluateUtility_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tree(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tree_type =
    ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>;
  _tree_type tree;

  // setters for named parameter idiom
  Type & set__tree(
    const ros_bt_py_interfaces::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->tree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__EvaluateUtility_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__EvaluateUtility_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EvaluateUtility_Request_ & other) const
  {
    if (this->tree != other.tree) {
      return false;
    }
    return true;
  }
  bool operator!=(const EvaluateUtility_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EvaluateUtility_Request_

// alias to use template instance with default allocator
using EvaluateUtility_Request =
  ros_bt_py_interfaces::srv::EvaluateUtility_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces


// Include directives for member types
// Member 'utility'
#include "ros_bt_py_interfaces/msg/detail/utility_bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__EvaluateUtility_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__EvaluateUtility_Response __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EvaluateUtility_Response_
{
  using Type = EvaluateUtility_Response_<ContainerAllocator>;

  explicit EvaluateUtility_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : utility(_init)
  {
    (void)_init;
  }

  explicit EvaluateUtility_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : utility(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _utility_type =
    ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator>;
  _utility_type utility;

  // setters for named parameter idiom
  Type & set__utility(
    const ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator> & _arg)
  {
    this->utility = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__EvaluateUtility_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__EvaluateUtility_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::EvaluateUtility_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EvaluateUtility_Response_ & other) const
  {
    if (this->utility != other.utility) {
      return false;
    }
    return true;
  }
  bool operator!=(const EvaluateUtility_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EvaluateUtility_Response_

// alias to use template instance with default allocator
using EvaluateUtility_Response =
  ros_bt_py_interfaces::srv::EvaluateUtility_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace ros_bt_py_interfaces
{

namespace srv
{

struct EvaluateUtility
{
  using Request = ros_bt_py_interfaces::srv::EvaluateUtility_Request;
  using Response = ros_bt_py_interfaces::srv::EvaluateUtility_Response;
};

}  // namespace srv

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__EVALUATE_UTILITY__STRUCT_HPP_
