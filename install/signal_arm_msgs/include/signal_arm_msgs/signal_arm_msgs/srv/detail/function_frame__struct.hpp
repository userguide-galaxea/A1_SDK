// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from signal_arm_msgs:srv/FunctionFrame.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__SRV__DETAIL__FUNCTION_FRAME__STRUCT_HPP_
#define SIGNAL_ARM_MSGS__SRV__DETAIL__FUNCTION_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__signal_arm_msgs__srv__FunctionFrame_Request __attribute__((deprecated))
#else
# define DEPRECATED__signal_arm_msgs__srv__FunctionFrame_Request __declspec(deprecated)
#endif

namespace signal_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FunctionFrame_Request_
{
  using Type = FunctionFrame_Request_<ContainerAllocator>;

  explicit FunctionFrame_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  explicit FunctionFrame_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__signal_arm_msgs__srv__FunctionFrame_Request
    std::shared_ptr<signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__signal_arm_msgs__srv__FunctionFrame_Request
    std::shared_ptr<signal_arm_msgs::srv::FunctionFrame_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FunctionFrame_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const FunctionFrame_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FunctionFrame_Request_

// alias to use template instance with default allocator
using FunctionFrame_Request =
  signal_arm_msgs::srv::FunctionFrame_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace signal_arm_msgs


#ifndef _WIN32
# define DEPRECATED__signal_arm_msgs__srv__FunctionFrame_Response __attribute__((deprecated))
#else
# define DEPRECATED__signal_arm_msgs__srv__FunctionFrame_Response __declspec(deprecated)
#endif

namespace signal_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FunctionFrame_Response_
{
  using Type = FunctionFrame_Response_<ContainerAllocator>;

  explicit FunctionFrame_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit FunctionFrame_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__signal_arm_msgs__srv__FunctionFrame_Response
    std::shared_ptr<signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__signal_arm_msgs__srv__FunctionFrame_Response
    std::shared_ptr<signal_arm_msgs::srv::FunctionFrame_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FunctionFrame_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const FunctionFrame_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FunctionFrame_Response_

// alias to use template instance with default allocator
using FunctionFrame_Response =
  signal_arm_msgs::srv::FunctionFrame_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace signal_arm_msgs

namespace signal_arm_msgs
{

namespace srv
{

struct FunctionFrame
{
  using Request = signal_arm_msgs::srv::FunctionFrame_Request;
  using Response = signal_arm_msgs::srv::FunctionFrame_Response;
};

}  // namespace srv

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__SRV__DETAIL__FUNCTION_FRAME__STRUCT_HPP_
