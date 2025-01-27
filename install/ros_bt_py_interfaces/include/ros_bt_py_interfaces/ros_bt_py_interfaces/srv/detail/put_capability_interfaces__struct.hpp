// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:srv/PutCapabilityInterfaces.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__PUT_CAPABILITY_INTERFACES__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__PUT_CAPABILITY_INTERFACES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'capabilities'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__PutCapabilityInterfaces_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__PutCapabilityInterfaces_Request __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PutCapabilityInterfaces_Request_
{
  using Type = PutCapabilityInterfaces_Request_<ContainerAllocator>;

  explicit PutCapabilityInterfaces_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PutCapabilityInterfaces_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _capabilities_type =
    std::vector<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>>>;
  _capabilities_type capabilities;

  // setters for named parameter idiom
  Type & set__capabilities(
    const std::vector<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>>> & _arg)
  {
    this->capabilities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__PutCapabilityInterfaces_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__PutCapabilityInterfaces_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PutCapabilityInterfaces_Request_ & other) const
  {
    if (this->capabilities != other.capabilities) {
      return false;
    }
    return true;
  }
  bool operator!=(const PutCapabilityInterfaces_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PutCapabilityInterfaces_Request_

// alias to use template instance with default allocator
using PutCapabilityInterfaces_Request =
  ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__PutCapabilityInterfaces_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__PutCapabilityInterfaces_Response __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PutCapabilityInterfaces_Response_
{
  using Type = PutCapabilityInterfaces_Response_<ContainerAllocator>;

  explicit PutCapabilityInterfaces_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit PutCapabilityInterfaces_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__PutCapabilityInterfaces_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__PutCapabilityInterfaces_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PutCapabilityInterfaces_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PutCapabilityInterfaces_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PutCapabilityInterfaces_Response_

// alias to use template instance with default allocator
using PutCapabilityInterfaces_Response =
  ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace ros_bt_py_interfaces
{

namespace srv
{

struct PutCapabilityInterfaces
{
  using Request = ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request;
  using Response = ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response;
};

}  // namespace srv

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__PUT_CAPABILITY_INTERFACES__STRUCT_HPP_
