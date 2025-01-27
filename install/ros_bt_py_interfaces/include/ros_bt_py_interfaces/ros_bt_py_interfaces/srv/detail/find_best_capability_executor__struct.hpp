// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:srv/FindBestCapabilityExecutor.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'capability'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FindBestCapabilityExecutor_Request_
{
  using Type = FindBestCapabilityExecutor_Request_<ContainerAllocator>;

  explicit FindBestCapabilityExecutor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : capability(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
      this->mission_control_name = "";
      this->implementation_tags_dict = "";
    }
  }

  explicit FindBestCapabilityExecutor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : capability(_alloc, _init),
    node_id(_alloc),
    mission_control_name(_alloc),
    implementation_tags_dict(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
      this->mission_control_name = "";
      this->implementation_tags_dict = "";
    }
  }

  // field types and members
  using _capability_type =
    ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>;
  _capability_type capability;
  using _node_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_id_type node_id;
  using _mission_control_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_control_name_type mission_control_name;
  using _implementation_tags_dict_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _implementation_tags_dict_type implementation_tags_dict;

  // setters for named parameter idiom
  Type & set__capability(
    const ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> & _arg)
  {
    this->capability = _arg;
    return *this;
  }
  Type & set__node_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__mission_control_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_control_name = _arg;
    return *this;
  }
  Type & set__implementation_tags_dict(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->implementation_tags_dict = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindBestCapabilityExecutor_Request_ & other) const
  {
    if (this->capability != other.capability) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->mission_control_name != other.mission_control_name) {
      return false;
    }
    if (this->implementation_tags_dict != other.implementation_tags_dict) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindBestCapabilityExecutor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindBestCapabilityExecutor_Request_

// alias to use template instance with default allocator
using FindBestCapabilityExecutor_Request =
  ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FindBestCapabilityExecutor_Response_
{
  using Type = FindBestCapabilityExecutor_Response_<ContainerAllocator>;

  explicit FindBestCapabilityExecutor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
      this->execute_local = false;
      this->executor_mission_control_topic = "";
      this->implementation_name = "";
      this->max_allowed_costs = 0.0;
    }
  }

  explicit FindBestCapabilityExecutor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc),
    executor_mission_control_topic(_alloc),
    implementation_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
      this->execute_local = false;
      this->executor_mission_control_topic = "";
      this->implementation_name = "";
      this->max_allowed_costs = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _execute_local_type =
    bool;
  _execute_local_type execute_local;
  using _executor_mission_control_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _executor_mission_control_topic_type executor_mission_control_topic;
  using _implementation_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _implementation_name_type implementation_name;
  using _max_allowed_costs_type =
    double;
  _max_allowed_costs_type max_allowed_costs;

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
  Type & set__execute_local(
    const bool & _arg)
  {
    this->execute_local = _arg;
    return *this;
  }
  Type & set__executor_mission_control_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->executor_mission_control_topic = _arg;
    return *this;
  }
  Type & set__implementation_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->implementation_name = _arg;
    return *this;
  }
  Type & set__max_allowed_costs(
    const double & _arg)
  {
    this->max_allowed_costs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindBestCapabilityExecutor_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->execute_local != other.execute_local) {
      return false;
    }
    if (this->executor_mission_control_topic != other.executor_mission_control_topic) {
      return false;
    }
    if (this->implementation_name != other.implementation_name) {
      return false;
    }
    if (this->max_allowed_costs != other.max_allowed_costs) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindBestCapabilityExecutor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindBestCapabilityExecutor_Response_

// alias to use template instance with default allocator
using FindBestCapabilityExecutor_Response =
  ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace ros_bt_py_interfaces
{

namespace srv
{

struct FindBestCapabilityExecutor
{
  using Request = ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request;
  using Response = ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response;
};

}  // namespace srv

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__STRUCT_HPP_
