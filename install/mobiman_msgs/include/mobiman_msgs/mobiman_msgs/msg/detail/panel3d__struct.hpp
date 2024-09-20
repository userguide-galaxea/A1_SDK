// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobiman_msgs:msg/Panel3d.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__STRUCT_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'buttons_3d'
#include "mobiman_msgs/msg/detail/button3d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__msg__Panel3d __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__msg__Panel3d __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Panel3d_
{
  using Type = Panel3d_<ContainerAllocator>;

  explicit Panel3d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin(_init),
    normal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0f;
      this->width = 0.0f;
    }
  }

  explicit Panel3d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin(_alloc, _init),
    normal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0f;
      this->width = 0.0f;
    }
  }

  // field types and members
  using _origin_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _origin_type origin;
  using _normal_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _normal_type normal;
  using _length_type =
    float;
  _length_type length;
  using _width_type =
    float;
  _width_type width;
  using _buttons_3d_type =
    std::vector<mobiman_msgs::msg::Button3d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mobiman_msgs::msg::Button3d_<ContainerAllocator>>>;
  _buttons_3d_type buttons_3d;

  // setters for named parameter idiom
  Type & set__origin(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__normal(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->normal = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__buttons_3d(
    const std::vector<mobiman_msgs::msg::Button3d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mobiman_msgs::msg::Button3d_<ContainerAllocator>>> & _arg)
  {
    this->buttons_3d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::msg::Panel3d_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::msg::Panel3d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::msg::Panel3d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::msg::Panel3d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::Panel3d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::Panel3d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::Panel3d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::Panel3d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::msg::Panel3d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::msg::Panel3d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__msg__Panel3d
    std::shared_ptr<mobiman_msgs::msg::Panel3d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__msg__Panel3d
    std::shared_ptr<mobiman_msgs::msg::Panel3d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Panel3d_ & other) const
  {
    if (this->origin != other.origin) {
      return false;
    }
    if (this->normal != other.normal) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->buttons_3d != other.buttons_3d) {
      return false;
    }
    return true;
  }
  bool operator!=(const Panel3d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Panel3d_

// alias to use template instance with default allocator
using Panel3d =
  mobiman_msgs::msg::Panel3d_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__STRUCT_HPP_
