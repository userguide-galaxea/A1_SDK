// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/CameraDetection.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/camera_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraDetection_mask
{
public:
  explicit Init_CameraDetection_mask(::mobiman_msgs::msg::CameraDetection & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::CameraDetection mask(::mobiman_msgs::msg::CameraDetection::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::CameraDetection msg_;
};

class Init_CameraDetection_source_img
{
public:
  explicit Init_CameraDetection_source_img(::mobiman_msgs::msg::CameraDetection & msg)
  : msg_(msg)
  {}
  Init_CameraDetection_mask source_img(::mobiman_msgs::msg::CameraDetection::_source_img_type arg)
  {
    msg_.source_img = std::move(arg);
    return Init_CameraDetection_mask(msg_);
  }

private:
  ::mobiman_msgs::msg::CameraDetection msg_;
};

class Init_CameraDetection_header
{
public:
  Init_CameraDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraDetection_source_img header(::mobiman_msgs::msg::CameraDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraDetection_source_img(msg_);
  }

private:
  ::mobiman_msgs::msg::CameraDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::CameraDetection>()
{
  return mobiman_msgs::msg::builder::Init_CameraDetection_header();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__BUILDER_HPP_
