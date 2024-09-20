// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ocs2_msgs:msg/LagrangianMetrics.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__TRAITS_HPP_
#define OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ocs2_msgs/msg/detail/lagrangian_metrics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ocs2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LagrangianMetrics & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: penalty
  {
    out << "penalty: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty, out);
    out << ", ";
  }

  // member: constraint
  {
    if (msg.constraint.size() == 0) {
      out << "constraint: []";
    } else {
      out << "constraint: [";
      size_t pending_items = msg.constraint.size();
      for (auto item : msg.constraint) {
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
  const LagrangianMetrics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: penalty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penalty: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty, out);
    out << "\n";
  }

  // member: constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constraint.size() == 0) {
      out << "constraint: []\n";
    } else {
      out << "constraint:\n";
      for (auto item : msg.constraint) {
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

inline std::string to_yaml(const LagrangianMetrics & msg, bool use_flow_style = false)
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

}  // namespace ocs2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ocs2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ocs2_msgs::msg::LagrangianMetrics & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocs2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocs2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ocs2_msgs::msg::LagrangianMetrics & msg)
{
  return ocs2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ocs2_msgs::msg::LagrangianMetrics>()
{
  return "ocs2_msgs::msg::LagrangianMetrics";
}

template<>
inline const char * name<ocs2_msgs::msg::LagrangianMetrics>()
{
  return "ocs2_msgs/msg/LagrangianMetrics";
}

template<>
struct has_fixed_size<ocs2_msgs::msg::LagrangianMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ocs2_msgs::msg::LagrangianMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ocs2_msgs::msg::LagrangianMetrics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__TRAITS_HPP_
