// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobiman_msgs:msg/ChassisCommand.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND__TRAITS_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobiman_msgs/msg/detail/chassis_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mobiman_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChassisCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: steer_angles
  {
    if (msg.steer_angles.size() == 0) {
      out << "steer_angles: []";
    } else {
      out << "steer_angles: [";
      size_t pending_items = msg.steer_angles.size();
      for (auto item : msg.steer_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wheel_speed
  {
    if (msg.wheel_speed.size() == 0) {
      out << "wheel_speed: []";
    } else {
      out << "wheel_speed: [";
      size_t pending_items = msg.wheel_speed.size();
      for (auto item : msg.wheel_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChassisCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: steer_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steer_angles.size() == 0) {
      out << "steer_angles: []\n";
    } else {
      out << "steer_angles:\n";
      for (auto item : msg.steer_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheel_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheel_speed.size() == 0) {
      out << "wheel_speed: []\n";
    } else {
      out << "wheel_speed:\n";
      for (auto item : msg.wheel_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChassisCommand & msg, bool use_flow_style = false)
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
  const mobiman_msgs::msg::ChassisCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobiman_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobiman_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobiman_msgs::msg::ChassisCommand & msg)
{
  return mobiman_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobiman_msgs::msg::ChassisCommand>()
{
  return "mobiman_msgs::msg::ChassisCommand";
}

template<>
inline const char * name<mobiman_msgs::msg::ChassisCommand>()
{
  return "mobiman_msgs/msg/ChassisCommand";
}

template<>
struct has_fixed_size<mobiman_msgs::msg::ChassisCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mobiman_msgs::msg::ChassisCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mobiman_msgs::msg::ChassisCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND__TRAITS_HPP_
