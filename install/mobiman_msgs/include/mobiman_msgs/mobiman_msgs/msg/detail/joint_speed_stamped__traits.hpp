// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobiman_msgs:msg/JointSpeedStamped.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED_STAMPED__TRAITS_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobiman_msgs/msg/detail/joint_speed_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'speed'
#include "mobiman_msgs/msg/detail/joint_speed__traits.hpp"

namespace mobiman_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointSpeedStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    to_flow_style_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointSpeedStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed:\n";
    to_block_style_yaml(msg.speed, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointSpeedStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mobiman_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mobiman_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mobiman_msgs::msg::JointSpeedStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobiman_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobiman_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobiman_msgs::msg::JointSpeedStamped & msg)
{
  return mobiman_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobiman_msgs::msg::JointSpeedStamped>()
{
  return "mobiman_msgs::msg::JointSpeedStamped";
}

template<>
inline const char * name<mobiman_msgs::msg::JointSpeedStamped>()
{
  return "mobiman_msgs/msg/JointSpeedStamped";
}

template<>
struct has_fixed_size<mobiman_msgs::msg::JointSpeedStamped>
  : std::integral_constant<bool, has_fixed_size<mobiman_msgs::msg::JointSpeed>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobiman_msgs::msg::JointSpeedStamped>
  : std::integral_constant<bool, has_bounded_size<mobiman_msgs::msg::JointSpeed>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobiman_msgs::msg::JointSpeedStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED_STAMPED__TRAITS_HPP_