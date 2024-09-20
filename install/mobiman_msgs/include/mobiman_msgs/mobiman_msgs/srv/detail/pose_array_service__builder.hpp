// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:srv/PoseArrayService.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__BUILDER_HPP_
#define MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/srv/detail/pose_array_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace srv
{

namespace builder
{

class Init_PoseArrayService_Request_poses
{
public:
  Init_PoseArrayService_Request_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mobiman_msgs::srv::PoseArrayService_Request poses(::mobiman_msgs::srv::PoseArrayService_Request::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::srv::PoseArrayService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::srv::PoseArrayService_Request>()
{
  return mobiman_msgs::srv::builder::Init_PoseArrayService_Request_poses();
}

}  // namespace mobiman_msgs


namespace mobiman_msgs
{

namespace srv
{

namespace builder
{

class Init_PoseArrayService_Response_success
{
public:
  Init_PoseArrayService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mobiman_msgs::srv::PoseArrayService_Response success(::mobiman_msgs::srv::PoseArrayService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::srv::PoseArrayService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::srv::PoseArrayService_Response>()
{
  return mobiman_msgs::srv::builder::Init_PoseArrayService_Response_success();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__BUILDER_HPP_
