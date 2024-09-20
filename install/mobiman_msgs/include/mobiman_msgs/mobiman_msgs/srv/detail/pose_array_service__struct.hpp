// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobiman_msgs:srv/PoseArrayService.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__STRUCT_HPP_
#define MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__srv__PoseArrayService_Request __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__srv__PoseArrayService_Request __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PoseArrayService_Request_
{
  using Type = PoseArrayService_Request_<ContainerAllocator>;

  explicit PoseArrayService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : poses(_init)
  {
    (void)_init;
  }

  explicit PoseArrayService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : poses(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _poses_type =
    geometry_msgs::msg::PoseArray_<ContainerAllocator>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__poses(
    const geometry_msgs::msg::PoseArray_<ContainerAllocator> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__srv__PoseArrayService_Request
    std::shared_ptr<mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__srv__PoseArrayService_Request
    std::shared_ptr<mobiman_msgs::srv::PoseArrayService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseArrayService_Request_ & other) const
  {
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseArrayService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseArrayService_Request_

// alias to use template instance with default allocator
using PoseArrayService_Request =
  mobiman_msgs::srv::PoseArrayService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mobiman_msgs


#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__srv__PoseArrayService_Response __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__srv__PoseArrayService_Response __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PoseArrayService_Response_
{
  using Type = PoseArrayService_Response_<ContainerAllocator>;

  explicit PoseArrayService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit PoseArrayService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__srv__PoseArrayService_Response
    std::shared_ptr<mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__srv__PoseArrayService_Response
    std::shared_ptr<mobiman_msgs::srv::PoseArrayService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseArrayService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseArrayService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseArrayService_Response_

// alias to use template instance with default allocator
using PoseArrayService_Response =
  mobiman_msgs::srv::PoseArrayService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mobiman_msgs

namespace mobiman_msgs
{

namespace srv
{

struct PoseArrayService
{
  using Request = mobiman_msgs::srv::PoseArrayService_Request;
  using Response = mobiman_msgs::srv::PoseArrayService_Response;
};

}  // namespace srv

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__STRUCT_HPP_
