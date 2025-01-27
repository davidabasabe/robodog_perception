// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:srv/PrepareLocalImplementation.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'interface'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PrepareLocalImplementation_Request_
{
  using Type = PrepareLocalImplementation_Request_<ContainerAllocator>;

  explicit PrepareLocalImplementation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : interface(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->implementation_name = "";
    }
  }

  explicit PrepareLocalImplementation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : implementation_name(_alloc),
    interface(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->implementation_name = "";
    }
  }

  // field types and members
  using _implementation_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _implementation_name_type implementation_name;
  using _interface_type =
    ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>;
  _interface_type interface;

  // setters for named parameter idiom
  Type & set__implementation_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->implementation_name = _arg;
    return *this;
  }
  Type & set__interface(
    const ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> & _arg)
  {
    this->interface = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrepareLocalImplementation_Request_ & other) const
  {
    if (this->implementation_name != other.implementation_name) {
      return false;
    }
    if (this->interface != other.interface) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrepareLocalImplementation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrepareLocalImplementation_Request_

// alias to use template instance with default allocator
using PrepareLocalImplementation_Request =
  ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces


// Include directives for member types
// Member 'implementation_subtree'
#include "ros_bt_py_interfaces/msg/detail/tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PrepareLocalImplementation_Response_
{
  using Type = PrepareLocalImplementation_Response_<ContainerAllocator>;

  explicit PrepareLocalImplementation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : implementation_subtree(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit PrepareLocalImplementation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc),
    implementation_subtree(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _implementation_subtree_type =
    ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>;
  _implementation_subtree_type implementation_subtree;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__implementation_subtree(
    const ros_bt_py_interfaces::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->implementation_subtree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrepareLocalImplementation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->implementation_subtree != other.implementation_subtree) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrepareLocalImplementation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrepareLocalImplementation_Response_

// alias to use template instance with default allocator
using PrepareLocalImplementation_Response =
  ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace ros_bt_py_interfaces
{

namespace srv
{

struct PrepareLocalImplementation
{
  using Request = ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request;
  using Response = ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response;
};

}  // namespace srv

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__STRUCT_HPP_
