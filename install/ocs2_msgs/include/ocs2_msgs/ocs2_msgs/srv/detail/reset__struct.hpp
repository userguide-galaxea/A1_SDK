// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ocs2_msgs:srv/Reset.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__SRV__DETAIL__RESET__STRUCT_HPP_
#define OCS2_MSGS__SRV__DETAIL__RESET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_trajectories'
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ocs2_msgs__srv__Reset_Request __attribute__((deprecated))
#else
# define DEPRECATED__ocs2_msgs__srv__Reset_Request __declspec(deprecated)
#endif

namespace ocs2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reset_Request_
{
  using Type = Reset_Request_<ContainerAllocator>;

  explicit Reset_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_trajectories(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset = false;
    }
  }

  explicit Reset_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_trajectories(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset = false;
    }
  }

  // field types and members
  using _reset_type =
    bool;
  _reset_type reset;
  using _target_trajectories_type =
    ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator>;
  _target_trajectories_type target_trajectories;

  // setters for named parameter idiom
  Type & set__reset(
    const bool & _arg)
  {
    this->reset = _arg;
    return *this;
  }
  Type & set__target_trajectories(
    const ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator> & _arg)
  {
    this->target_trajectories = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocs2_msgs::srv::Reset_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocs2_msgs::srv::Reset_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocs2_msgs::srv::Reset_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocs2_msgs::srv::Reset_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::srv::Reset_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::srv::Reset_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::srv::Reset_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::srv::Reset_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocs2_msgs::srv::Reset_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocs2_msgs::srv::Reset_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocs2_msgs__srv__Reset_Request
    std::shared_ptr<ocs2_msgs::srv::Reset_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocs2_msgs__srv__Reset_Request
    std::shared_ptr<ocs2_msgs::srv::Reset_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reset_Request_ & other) const
  {
    if (this->reset != other.reset) {
      return false;
    }
    if (this->target_trajectories != other.target_trajectories) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reset_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reset_Request_

// alias to use template instance with default allocator
using Reset_Request =
  ocs2_msgs::srv::Reset_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ocs2_msgs


#ifndef _WIN32
# define DEPRECATED__ocs2_msgs__srv__Reset_Response __attribute__((deprecated))
#else
# define DEPRECATED__ocs2_msgs__srv__Reset_Response __declspec(deprecated)
#endif

namespace ocs2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reset_Response_
{
  using Type = Reset_Response_<ContainerAllocator>;

  explicit Reset_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  explicit Reset_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  // field types and members
  using _done_type =
    bool;
  _done_type done;

  // setters for named parameter idiom
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocs2_msgs::srv::Reset_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocs2_msgs::srv::Reset_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocs2_msgs::srv::Reset_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocs2_msgs::srv::Reset_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::srv::Reset_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::srv::Reset_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::srv::Reset_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::srv::Reset_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocs2_msgs::srv::Reset_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocs2_msgs::srv::Reset_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocs2_msgs__srv__Reset_Response
    std::shared_ptr<ocs2_msgs::srv::Reset_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocs2_msgs__srv__Reset_Response
    std::shared_ptr<ocs2_msgs::srv::Reset_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reset_Response_ & other) const
  {
    if (this->done != other.done) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reset_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reset_Response_

// alias to use template instance with default allocator
using Reset_Response =
  ocs2_msgs::srv::Reset_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ocs2_msgs

namespace ocs2_msgs
{

namespace srv
{

struct Reset
{
  using Request = ocs2_msgs::srv::Reset_Request;
  using Response = ocs2_msgs::srv::Reset_Response;
};

}  // namespace srv

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__SRV__DETAIL__RESET__STRUCT_HPP_
