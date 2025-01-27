// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:srv/GetAvailableRemoteCapabilitySlots.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvailableRemoteCapabilitySlots_Request_
{
  using Type = GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator>;

  explicit GetAvailableRemoteCapabilitySlots_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetAvailableRemoteCapabilitySlots_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvailableRemoteCapabilitySlots_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvailableRemoteCapabilitySlots_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvailableRemoteCapabilitySlots_Request_

// alias to use template instance with default allocator
using GetAvailableRemoteCapabilitySlots_Request =
  ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvailableRemoteCapabilitySlots_Response_
{
  using Type = GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator>;

  explicit GetAvailableRemoteCapabilitySlots_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available_remote_capability_slots = 0ll;
    }
  }

  explicit GetAvailableRemoteCapabilitySlots_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available_remote_capability_slots = 0ll;
    }
  }

  // field types and members
  using _available_remote_capability_slots_type =
    int64_t;
  _available_remote_capability_slots_type available_remote_capability_slots;

  // setters for named parameter idiom
  Type & set__available_remote_capability_slots(
    const int64_t & _arg)
  {
    this->available_remote_capability_slots = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvailableRemoteCapabilitySlots_Response_ & other) const
  {
    if (this->available_remote_capability_slots != other.available_remote_capability_slots) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvailableRemoteCapabilitySlots_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvailableRemoteCapabilitySlots_Response_

// alias to use template instance with default allocator
using GetAvailableRemoteCapabilitySlots_Response =
  ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace ros_bt_py_interfaces
{

namespace srv
{

struct GetAvailableRemoteCapabilitySlots
{
  using Request = ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request;
  using Response = ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response;
};

}  // namespace srv

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__STRUCT_HPP_
