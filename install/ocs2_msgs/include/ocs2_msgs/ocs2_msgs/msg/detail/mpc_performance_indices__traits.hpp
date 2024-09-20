// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ocs2_msgs:msg/MpcPerformanceIndices.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__TRAITS_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ocs2_msgs/msg/detail/mpc_performance_indices__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ocs2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MpcPerformanceIndices & msg,
  std::ostream & out)
{
  out << "{";
  // member: init_time
  {
    out << "init_time: ";
    rosidl_generator_traits::value_to_yaml(msg.init_time, out);
    out << ", ";
  }

  // member: merit
  {
    out << "merit: ";
    rosidl_generator_traits::value_to_yaml(msg.merit, out);
    out << ", ";
  }

  // member: cost
  {
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << ", ";
  }

  // member: dynamics_violation_sse
  {
    out << "dynamics_violation_sse: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamics_violation_sse, out);
    out << ", ";
  }

  // member: equality_constraints_sse
  {
    out << "equality_constraints_sse: ";
    rosidl_generator_traits::value_to_yaml(msg.equality_constraints_sse, out);
    out << ", ";
  }

  // member: equality_lagrangian
  {
    out << "equality_lagrangian: ";
    rosidl_generator_traits::value_to_yaml(msg.equality_lagrangian, out);
    out << ", ";
  }

  // member: inequality_lagrangian
  {
    out << "inequality_lagrangian: ";
    rosidl_generator_traits::value_to_yaml(msg.inequality_lagrangian, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MpcPerformanceIndices & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: init_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_time: ";
    rosidl_generator_traits::value_to_yaml(msg.init_time, out);
    out << "\n";
  }

  // member: merit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "merit: ";
    rosidl_generator_traits::value_to_yaml(msg.merit, out);
    out << "\n";
  }

  // member: cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << "\n";
  }

  // member: dynamics_violation_sse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamics_violation_sse: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamics_violation_sse, out);
    out << "\n";
  }

  // member: equality_constraints_sse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "equality_constraints_sse: ";
    rosidl_generator_traits::value_to_yaml(msg.equality_constraints_sse, out);
    out << "\n";
  }

  // member: equality_lagrangian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "equality_lagrangian: ";
    rosidl_generator_traits::value_to_yaml(msg.equality_lagrangian, out);
    out << "\n";
  }

  // member: inequality_lagrangian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inequality_lagrangian: ";
    rosidl_generator_traits::value_to_yaml(msg.inequality_lagrangian, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MpcPerformanceIndices & msg, bool use_flow_style = false)
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
  const ocs2_msgs::msg::MpcPerformanceIndices & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocs2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocs2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ocs2_msgs::msg::MpcPerformanceIndices & msg)
{
  return ocs2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ocs2_msgs::msg::MpcPerformanceIndices>()
{
  return "ocs2_msgs::msg::MpcPerformanceIndices";
}

template<>
inline const char * name<ocs2_msgs::msg::MpcPerformanceIndices>()
{
  return "ocs2_msgs/msg/MpcPerformanceIndices";
}

template<>
struct has_fixed_size<ocs2_msgs::msg::MpcPerformanceIndices>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ocs2_msgs::msg::MpcPerformanceIndices>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ocs2_msgs::msg::MpcPerformanceIndices>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__TRAITS_HPP_
