// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobiman_msgs:msg/JointPositionStamped.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION_STAMPED__TRAITS_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobiman_msgs/msg/detail/joint_position_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pos'
#include "mobiman_msgs/msg/detail/joint_position__traits.hpp"

namespace mobiman_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointPositionStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointPositionStamped & msg,
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

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointPositionStamped & msg, bool use_flow_style = false)
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
  const mobiman_msgs::msg::JointPositionStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobiman_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobiman_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobiman_msgs::msg::JointPositionStamped & msg)
{
  return mobiman_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobiman_msgs::msg::JointPositionStamped>()
{
  return "mobiman_msgs::msg::JointPositionStamped";
}

template<>
inline const char * name<mobiman_msgs::msg::JointPositionStamped>()
{
  return "mobiman_msgs/msg/JointPositionStamped";
}

template<>
struct has_fixed_size<mobiman_msgs::msg::JointPositionStamped>
  : std::integral_constant<bool, has_fixed_size<mobiman_msgs::msg::JointPosition>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobiman_msgs::msg::JointPositionStamped>
  : std::integral_constant<bool, has_bounded_size<mobiman_msgs::msg::JointPosition>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobiman_msgs::msg::JointPositionStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION_STAMPED__TRAITS_HPP_