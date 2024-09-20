from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.substitutions import FindPackageShare
import os

def generate_launch_description():
    # 生成URDF文件的绝对路径
    urdf_file_path = os.path.join(
        FindPackageShare('mobiman').find('mobiman'),
        'urdf/A1/urdf/A1_URDF_0607_0028_no_gripper.urdf'
    )

    return LaunchDescription([
        # 声明启动参数
        DeclareLaunchArgument('urdfFile', default_value=urdf_file_path),
        DeclareLaunchArgument('taskFile', default_value=os.path.join(
            FindPackageShare('mobiman').find('mobiman'),
            'config/task.info'
        )),
        DeclareLaunchArgument('libFolder', default_value=os.path.join(
            FindPackageShare('mobiman').find('mobiman'),
            'auto_generated/x1_robot'
        )),
        DeclareLaunchArgument('eePose_sub_topic', default_value='/joint_states_host'),
        DeclareLaunchArgument('eePose_pub_topic', default_value='/end_effector_pose'),
        DeclareLaunchArgument('joint_states_sub_topic', default_value='/joint_states_host'),
        DeclareLaunchArgument('arm_joint_command_topic', default_value='/arm_joint_command_host'),
        DeclareLaunchArgument('a1_ee_target', default_value='/a1_ee_target'),

        Node(
            package='mobiman',
            executable='eeTracker_demo_node',
            name='eeTracker_demo_node',
            output='screen',
            parameters=[{
                'joint_states_sub_topic': LaunchConfiguration('joint_states_sub_topic'),
                'arm_joint_command_topic': LaunchConfiguration('arm_joint_command_topic'),
                'a1_ee_target': LaunchConfiguration('a1_ee_target'),
                'taskFile': LaunchConfiguration('taskFile'),
                'urdfFile': LaunchConfiguration('urdfFile'),
                'libFolder': LaunchConfiguration('libFolder'),
            }],

        ),
        Node(
            package='ocs2_mobile_manipulator_ros',
            executable='mobile_manipulator_target',
            name='mobile_manipulator_target',
            output='screen',
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_tf',
            output='screen',
            arguments=['0', '0', '0', '0', '0', '0', 'world', 'base_link']
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{
                'robot_description': open(urdf_file_path, 'r').read()
            }]
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz',
            output='screen'
        ),
    ])
