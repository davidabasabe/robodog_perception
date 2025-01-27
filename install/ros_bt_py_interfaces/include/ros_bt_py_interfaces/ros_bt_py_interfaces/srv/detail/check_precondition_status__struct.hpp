// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:srv/CheckPreconditionStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__STRUCT_HPP_

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
# define DEPRECATED__ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckPreconditionStatus_Request_
{
  using Type = CheckPreconditionStatus_Request_<ContainerAllocator>;

  explicit CheckPreconditionStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : interface(_init)
  {
    (void)_init;
  }

  explicit CheckPreconditionStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : interface(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _interface_type =
    ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>;
  _interface_type interface;

  // setters for named parameter idiom
  Type & set__interface(
    const ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> & _arg)
  {
    this->interface = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckPreconditionStatus_Request_ & other) const
  {
    if (this->interface != other.interface) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckPreconditionStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckPreconditionStatus_Request_

// alias to use template instance with default allocator
using CheckPreconditionStatus_Request =
  ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckPreconditionStatus_Response_
{
  using Type = CheckPreconditionStatus_Response_<ContainerAllocator>;

  explicit CheckPreconditionStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
    }
  }

  explicit CheckPreconditionStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
    }
  }

  // field types and members
  using _available_type =
    bool;
  _available_type available;

  // setters for named parameter idiom
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckPreconditionStatus_Response_ & other) const
  {
    if (this->available != other.available) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckPreconditionStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckPreconditionStatus_Response_

// alias to use template instance with default allocator
using CheckPreconditionStatus_Response =
  ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace ros_bt_py_interfaces
{

namespace srv
{

struct CheckPreconditionStatus
{
  using Request = ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request;
  using Response = ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response;
};

}  // namespace srv

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__STRUCT_HPP_
