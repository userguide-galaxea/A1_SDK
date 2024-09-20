// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobiman_msgs:msg/CameraDetection.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__STRUCT_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__STRUCT_HPP_

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
// Member 'source_img'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'mask'
#include "mobiman_msgs/msg/detail/mask__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__msg__CameraDetection __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__msg__CameraDetection __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraDetection_
{
  using Type = CameraDetection_<ContainerAllocator>;

  explicit CameraDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    source_img(_init),
    mask(_init)
  {
    (void)_init;
  }

  explicit CameraDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    source_img(_alloc, _init),
    mask(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _source_img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _source_img_type source_img;
  using _mask_type =
    mobiman_msgs::msg::Mask_<ContainerAllocator>;
  _mask_type mask;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__source_img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->source_img = _arg;
    return *this;
  }
  Type & set__mask(
    const mobiman_msgs::msg::Mask_<ContainerAllocator> & _arg)
  {
    this->mask = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::msg::CameraDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::msg::CameraDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::msg::CameraDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::msg::CameraDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::CameraDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::CameraDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::CameraDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::CameraDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::msg::CameraDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::msg::CameraDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__msg__CameraDetection
    std::shared_ptr<mobiman_msgs::msg::CameraDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__msg__CameraDetection
    std::shared_ptr<mobiman_msgs::msg::CameraDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraDetection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->source_img != other.source_img) {
      return false;
    }
    if (this->mask != other.mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraDetection_

// alias to use template instance with default allocator
using CameraDetection =
  mobiman_msgs::msg::CameraDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__STRUCT_HPP_
