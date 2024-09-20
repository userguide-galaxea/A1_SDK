// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from signal_arm_msgs:msg/MotorError.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__STRUCT_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__signal_arm_msgs__msg__MotorError __attribute__((deprecated))
#else
# define DEPRECATED__signal_arm_msgs__msg__MotorError __declspec(deprecated)
#endif

namespace signal_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorError_
{
  using Type = MotorError_<ContainerAllocator>;

  explicit MotorError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0ul;
    }
  }

  explicit MotorError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0ul;
    }
  }

  // field types and members
  using _error_code_type =
    uint32_t;
  _error_code_type error_code;
  using _error_description_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _error_description_type error_description;

  // setters for named parameter idiom
  Type & set__error_code(
    const uint32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_description(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->error_description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    signal_arm_msgs::msg::MotorError_<ContainerAllocator> *;
  using ConstRawPtr =
    const signal_arm_msgs::msg::MotorError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<signal_arm_msgs::msg::MotorError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<signal_arm_msgs::msg::MotorError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::msg::MotorError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::msg::MotorError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::msg::MotorError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::msg::MotorError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<signal_arm_msgs::msg::MotorError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<signal_arm_msgs::msg::MotorError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__signal_arm_msgs__msg__MotorError
    std::shared_ptr<signal_arm_msgs::msg::MotorError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__signal_arm_msgs__msg__MotorError
    std::shared_ptr<signal_arm_msgs::msg::MotorError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorError_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_description != other.error_description) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorError_

// alias to use template instance with default allocator
using MotorError =
  signal_arm_msgs::msg::MotorError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__STRUCT_HPP_
