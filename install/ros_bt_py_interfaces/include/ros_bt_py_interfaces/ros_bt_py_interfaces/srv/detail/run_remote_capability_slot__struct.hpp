// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:srv/RunRemoteCapabilitySlot.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__RUN_REMOTE_CAPABILITY_SLOT__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__RUN_REMOTE_CAPABILITY_SLOT__STRUCT_HPP_

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
// Member 'implementation_tree'
#include "ros_bt_py_interfaces/msg/detail/tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunRemoteCapabilitySlot_Request_
{
  using Type = RunRemoteCapabilitySlot_Request_<ContainerAllocator>;

  explicit RunRemoteCapabilitySlot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : interface(_init),
    implementation_tree(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
    }
  }

  explicit RunRemoteCapabilitySlot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : interface(_alloc, _init),
    implementation_tree(_alloc, _init),
    node_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
    }
  }

  // field types and members
  using _interface_type =
    ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>;
  _interface_type interface;
  using _implementation_tree_type =
    ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>;
  _implementation_tree_type implementation_tree;
  using _node_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_id_type node_id;

  // setters for named parameter idiom
  Type & set__interface(
    const ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> & _arg)
  {
    this->interface = _arg;
    return *this;
  }
  Type & set__implementation_tree(
    const ros_bt_py_interfaces::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->implementation_tree = _arg;
    return *this;
  }
  Type & set__node_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunRemoteCapabilitySlot_Request_ & other) const
  {
    if (this->interface != other.interface) {
      return false;
    }
    if (this->implementation_tree != other.implementation_tree) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunRemoteCapabilitySlot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunRemoteCapabilitySlot_Request_

// alias to use template instance with default allocator
using RunRemoteCapabilitySlot_Request =
  ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunRemoteCapabilitySlot_Response_
{
  using Type = RunRemoteCapabilitySlot_Response_<ContainerAllocator>;

  explicit RunRemoteCapabilitySlot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit RunRemoteCapabilitySlot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
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

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunRemoteCapabilitySlot_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunRemoteCapabilitySlot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunRemoteCapabilitySlot_Response_

// alias to use template instance with default allocator
using RunRemoteCapabilitySlot_Response =
  ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace ros_bt_py_interfaces
{

namespace srv
{

struct RunRemoteCapabilitySlot
{
  using Request = ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request;
  using Response = ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response;
};

}  // namespace srv

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__RUN_REMOTE_CAPABILITY_SLOT__STRUCT_HPP_
