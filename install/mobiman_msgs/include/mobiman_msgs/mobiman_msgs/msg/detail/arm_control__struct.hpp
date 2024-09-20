// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobiman_msgs:msg/ArmControl.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__ARM_CONTROL__STRUCT_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__ARM_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__msg__ArmControl __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__msg__ArmControl __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmControl_
{
  using Type = ArmControl_<ContainerAllocator>;

  explicit ArmControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit ArmControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _p_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _p_des_type p_des;
  using _v_des_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _v_des_type v_des;
  using _kp_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kp_type kp;
  using _kd_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kd_type kd;
  using _t_ff_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _t_ff_type t_ff;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__p_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->p_des = _arg;
    return *this;
  }
  Type & set__v_des(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->v_des = _arg;
    return *this;
  }
  Type & set__kp(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__t_ff(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->t_ff = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::msg::ArmControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::msg::ArmControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::msg::ArmControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::msg::ArmControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::ArmControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::ArmControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::ArmControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::ArmControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::msg::ArmControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::msg::ArmControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__msg__ArmControl
    std::shared_ptr<mobiman_msgs::msg::ArmControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__msg__ArmControl
    std::shared_ptr<mobiman_msgs::msg::ArmControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->p_des != other.p_des) {
      return false;
    }
    if (this->v_des != other.v_des) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->t_ff != other.t_ff) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmControl_

// alias to use template instance with default allocator
using ArmControl =
  mobiman_msgs::msg::ArmControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__ARM_CONTROL__STRUCT_HPP_
