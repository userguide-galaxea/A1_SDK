// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ocs2_msgs:msg/MpcFlattenedController.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__TRAITS_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ocs2_msgs/msg/detail/mpc_flattened_controller__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'init_observation'
#include "ocs2_msgs/msg/detail/mpc_observation__traits.hpp"
// Member 'plan_target_trajectories'
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__traits.hpp"
// Member 'state_trajectory'
#include "ocs2_msgs/msg/detail/mpc_state__traits.hpp"
// Member 'input_trajectory'
#include "ocs2_msgs/msg/detail/mpc_input__traits.hpp"
// Member 'mode_schedule'
#include "ocs2_msgs/msg/detail/mode_schedule__traits.hpp"
// Member 'data'
#include "ocs2_msgs/msg/detail/controller_data__traits.hpp"
// Member 'performance_indices'
#include "ocs2_msgs/msg/detail/mpc_performance_indices__traits.hpp"

namespace ocs2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MpcFlattenedController & msg,
  std::ostream & out)
{
  out << "{";
  // member: controller_type
  {
    out << "controller_type: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_type, out);
    out << ", ";
  }

  // member: init_observation
  {
    out << "init_observation: ";
    to_flow_style_yaml(msg.init_observation, out);
    out << ", ";
  }

  // member: plan_target_trajectories
  {
    out << "plan_target_trajectories: ";
    to_flow_style_yaml(msg.plan_target_trajectories, out);
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
    out << ", ";
  }

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

  // member: post_event_indices
  {
    if (msg.post_event_indices.size() == 0) {
      out << "post_event_indices: []";
    } else {
      out << "post_event_indices: [";
      size_t pending_items = msg.post_event_indices.size();
      for (auto item : msg.post_event_indices) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mode_schedule
  {
    out << "mode_schedule: ";
    to_flow_style_yaml(msg.mode_schedule, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: performance_indices
  {
    out << "performance_indices: ";
    to_flow_style_yaml(msg.performance_indices, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MpcFlattenedController & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: controller_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_type: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_type, out);
    out << "\n";
  }

  // member: init_observation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_observation:\n";
    to_block_style_yaml(msg.init_observation, out, indentation + 2);
  }

  // member: plan_target_trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_target_trajectories:\n";
    to_block_style_yaml(msg.plan_target_trajectories, out, indentation + 2);
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

  // member: post_event_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.post_event_indices.size() == 0) {
      out << "post_event_indices: []\n";
    } else {
      out << "post_event_indices:\n";
      for (auto item : msg.post_event_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mode_schedule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_schedule:\n";
    to_block_style_yaml(msg.mode_schedule, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: performance_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "performance_indices:\n";
    to_block_style_yaml(msg.performance_indices, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MpcFlattenedController & msg, bool use_flow_style = false)
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
  const ocs2_msgs::msg::MpcFlattenedController & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocs2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocs2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ocs2_msgs::msg::MpcFlattenedController & msg)
{
  return ocs2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ocs2_msgs::msg::MpcFlattenedController>()
{
  return "ocs2_msgs::msg::MpcFlattenedController";
}

template<>
inline const char * name<ocs2_msgs::msg::MpcFlattenedController>()
{
  return "ocs2_msgs/msg/MpcFlattenedController";
}

template<>
struct has_fixed_size<ocs2_msgs::msg::MpcFlattenedController>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ocs2_msgs::msg::MpcFlattenedController>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ocs2_msgs::msg::MpcFlattenedController>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__TRAITS_HPP_
