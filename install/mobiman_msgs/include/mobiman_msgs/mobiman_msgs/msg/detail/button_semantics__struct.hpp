// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobiman_msgs:msg/ButtonSemantics.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__STRUCT_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__msg__ButtonSemantics __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__msg__ButtonSemantics __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ButtonSemantics_
{
  using Type = ButtonSemantics_<ContainerAllocator>;

  explicit ButtonSemantics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->button_status = 0;
    }
  }

  explicit ButtonSemantics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->button_status = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _button_status_type =
    uint8_t;
  _button_status_type button_status;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__button_status(
    const uint8_t & _arg)
  {
    this->button_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__msg__ButtonSemantics
    std::shared_ptr<mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__msg__ButtonSemantics
    std::shared_ptr<mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ButtonSemantics_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->button_status != other.button_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ButtonSemantics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ButtonSemantics_

// alias to use template instance with default allocator
using ButtonSemantics =
  mobiman_msgs::msg::ButtonSemantics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__STRUCT_HPP_
