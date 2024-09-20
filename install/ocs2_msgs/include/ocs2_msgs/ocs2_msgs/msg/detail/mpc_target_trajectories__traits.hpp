// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ocs2_msgs:msg/MpcTargetTrajectories.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__TRAITS_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ocs2_msgs/msg/detail/mpc_target_trajectories__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state_trajectory'
#include "ocs2_msgs/msg/detail/mpc_state__traits.hpp"
// Member 'input_trajectory'
#include "ocs2_msgs/msg/detail/mpc_input__traits.hpp"

namespace ocs2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MpcTargetTrajectories & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_trajectory
  {
    if (msg.time_trajectory.size() == 0) {
      out << "time_trajectory: []";
    } else {
      out << "time_trajectory: [";
      size_t pending_items = msg.time_trajectory.size();
      for (auto item : msg.time_trajectory) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state_trajectory
  {
    if (msg.state_trajectory.size() == 0) {
      out << "state_trajectory: []";
    } else {
      out << "state_trajectory: [";
      size_t pending_items = msg.state_trajectory.size();
      for (auto item : msg.state_trajectory) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: input_trajectory
  {
    if (msg.input_trajectory.size() == 0) {
      out << "input_trajectory: []";
    } else {
      out << "input_trajectory: [";
      size_t pending_items = msg.input_trajectory.size();
      for (auto item : msg.input_trajectory) {
        to_flow_style_yaml(item, out);
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
  const MpcTargetTrajectories & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_trajectory.size() == 0) {
      out << "time_trajectory: []\n";
    } else {
      out << "time_trajectory:\n";
      for (auto item : msg.time_trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: state_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_trajectory.size() == 0) {
      out << "state_trajectory: []\n";
    } else {
      out << "state_trajectory:\n";
      for (auto item : msg.state_trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: input_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_trajectory.size() == 0) {
      out << "input_trajectory: []\n";
    } else {
      out << "input_trajectory:\n";
      for (auto item : msg.input_trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MpcTargetTrajectories & msg, bool use_flow_style = false)
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
  const ocs2_msgs::msg::MpcTargetTrajectories & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocs2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocs2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ocs2_msgs::msg::MpcTargetTrajectories & msg)
{
  return ocs2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ocs2_msgs::msg::MpcTargetTrajectories>()
{
  return "ocs2_msgs::msg::MpcTargetTrajectories";
}

template<>
inline const char * name<ocs2_msgs::msg::MpcTargetTrajectories>()
{
  return "ocs2_msgs/msg/MpcTargetTrajectories";
}

template<>
struct has_fixed_size<ocs2_msgs::msg::MpcTargetTrajectories>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ocs2_msgs::msg::MpcTargetTrajectories>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ocs2_msgs::msg::MpcTargetTrajectories>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__TRAITS_HPP_
