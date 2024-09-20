from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.substitutions import FindPackageShare
import os

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('serial_port_path', default_value='/dev/ttyACM0'),
        DeclareLaunchArgument('joint_states_topic', default_value='/joint_states_host'),
        DeclareLaunchArgument('gripper_feedback_topic', default_value='/gripper_stroke_host'),
        DeclareLaunchArgument('control_topic', default_value='/arm_joint_command_host'),
        DeclareLaunchArgument('arm_status_topic', default_value='/arm_status_host'),
        DeclareLaunchArgument('gripper_topic', default_value='/gripper_aloha_command_host'),
        DeclareLaunchArgument('joint_names', default_value='arm_joint1,arm_joint2,arm_joint3,arm_joint4,arm_joint5,arm_joint6,gripper'),
        DeclareLaunchArgument('gripper_force_control_topic', default_value='/gripper_force_control_host'),
        DeclareLaunchArgument('gripper_position_control_topic', default_value='/gripper_position_control_host'),
        DeclareLaunchArgument('baud_rate', default_value='1000000'),

        Node(
            package='signal_arm',
            executable='signal_arm',
            name='iarm_node',
            output='screen',
            parameters=[{
                'serial_port_path': LaunchConfiguration('serial_port_path'),
                'joint_states_topic': LaunchConfiguration('joint_states_topic'),
                'gripper_feedback_topic': LaunchConfiguration('gripper_feedback_topic'),
                'control_topic': LaunchConfiguration('control_topic'),
                'arm_status_topic': LaunchConfiguration('arm_status_topic'),
                'gripper_topic': LaunchConfiguration('gripper_topic'),
                'joint_names': LaunchConfiguration('joint_names'),
                'gripper_force_control_topic': LaunchConfiguration('gripper_force_control_topic'),
                'gripper_position_control_topic': LaunchConfiguration('gripper_position_control_topic'),
                'baud_rate': LaunchConfiguration('baud_rate'),
            }],
        ),
    ])
