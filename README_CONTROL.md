# Joint and End-Effector Movement Interface

## Table of Contents
- [Joint and End-Effector Movement Interface](#joint-and-end-effector-movement-interface)
  - [Table of Contents](#table-of-contents)
  - [Project Introduction](#project-introduction)
  - [End-Effector Movement Example](#end-effector-movement-example)
    - [As Shown in the Video](#as-shown-in-the-video)
  - [End-Effector Trajectory Movement Example](#end-effector-trajectory-movement-example)
    - [Actual Effect as Shown in the Video](#actual-effect-as-shown-in-the-video)
  - [Joint Movement Example](#joint-movement-example)

## Project Introduction
This project aims to provide control interfaces for the joints and end-effector movement of the A1 robotic arm, implemented through the ROS system for efficient control of the robotic arm. Whether for end-effector movement or joint movement, you must first start the DRIVER interface; refer to the DRIVER documentation for detailed operations. This project includes the following main functionalities:
- **End-Effector Movement**: Allows users to control the position and orientation of the robotic arm's end-effector by publishing target pose messages, suitable for applications requiring precise positioning.
- **End-Effector Trajectory Movement**: Achieves movement of the end-effector along a specific trajectory by publishing a series of pose messages, suitable for complex path planning and execution.
- **Joint Movement**: Provides joint-level control interfaces, allowing users to set target positions for each joint, thus achieving coordinated movement of the robotic arm.

## End-Effector Movement Example
Start the end-effector movement script first. This will launch an RViz instance for the A1 robotic arm, with joints initially at zero position.

```bash
sudo apt install ros-noetic-trac-ik
cd install/
source setup.bash
roslaunch mobiman eeTrackerdemo.launch
```

In the launch file:
```xml
<param name="joint_states_sub_topic" value="/joint_states" />
```
`/joint_states` represents the topic for obtaining simulation values.
```xml
<param name="arm_joint_command_topic" value="/arm_joint_command_host" />
```
`/arm_joint_command_host` represents the topic to publish motor commands.

Publish messages to the end-effector movement. The message name is `/a1_ee_target`, which is non-blocking and can be continuously published. The end-effector of the robotic arm can move continuously, but ensure it does not deviate too far from the current end-effector position.

```bash
rostopic pub /a1_ee_target geometry_msgs/PoseStamped "{
header: {
seq: 0,
stamp: {secs: 0, nsecs: 0},
frame_id: 'world'
},
pose: {
position: {x: 0.08, y: 0.0, z: 0.5},
orientation: {x: 0.5, y: 0.5, z: 0.5, w: 0.5}
}
}"
```

```python
#!/usr/bin/env python
import rospy
from geometry_msgs.msg import PoseStamped

def publish_pose():
    rospy.init_node('pose_stamped_publisher', anonymous=True)
    pose_pub = rospy.Publisher('/a1_ee_target', PoseStamped, queue_size=10)
    # Create PoseStamped message
    pose_msg = PoseStamped()
    pose_msg.header.seq = 0
    pose_msg.header.stamp = rospy.Time.now()
    pose_msg.header.frame_id = 'world'
    pose_msg.pose.position.x = 0.
    pose_msg.pose.position.y = 0.
    pose_msg.pose.position.z = 0.
    pose_msg.pose.orientation.x = 0.
    pose_msg.pose.orientation.y = 0.
    pose_msg.pose.orientation.z = 0.
    pose_msg.pose.orientation.w = 0.
    # Wait for subscribers to connect
    rospy.sleep(1)
    # Publish message
    pose_pub.publish(pose_msg)
    rospy.loginfo("Published PoseStamped message to /a1_ee_target")

if __name__ == '__main__':
    try:
        publish_pose()
    except rospy.ROSInterruptException:
        pass
```

### As Shown in the Video
<video width="600" controls>
  <source src="resource/eeDemo.mp4" type="video/mp4">
</video>

## End-Effector Trajectory Movement Example
Start the end-effector trajectory movement script first. This will launch an RViz instance for the A1 robotic arm, with joints initially at zero position.

```bash
cd release/install
source setup.bash
roslaunch mobiman eeTrajTrackerdemo.launch
```

In the launch file:
```xml
<param name="joint_states_sub_topic" value="/joint_states" />
```
`/joint_states` represents the topic for obtaining simulation values.
```xml
<param name="arm_joint_command_topic" value="/arm_joint_command_host" />
```
`/arm_joint_command_host` represents the topic to publish motor commands.

Publish messages for end-effector trajectory movement. Ensure the trajectory does not deviate from the current end-effector position. The message name is `/arm_target_trajectory`, which is non-blocking and can be continuously published. However, it is recommended to wait for the trajectory movement to complete before publishing to avoid inaccurate tracking.

```cpp
int main(int argc, char** argv)
{
    ros::init(argc, argv, "pose_array_publisher");
    ros::NodeHandle nh;
    ros::Publisher pose_pub = nh.advertise<geometry_msgs::PoseArray>("/arm_target_trajectory", 10);
    // Wait for subscribers to connect
    ros::Rate wait_rate(10);
    while (pose_pub.getNumSubscribers() == 0)
    {
        wait_rate.sleep();
    }
    geometry_msgs::PoseArray poseArrayMsg;
    geometry_msgs::Pose pose1;
    pose1.position.x = 0.08;
    pose1.position.y = 0.0;
    pose1.position.z = 0.3;
    pose1.orientation.w = 0.5;
    pose1.orientation.x = 0.5;
    pose1.orientation.y = 0.5;
    pose1.orientation.z = 0.5;
    geometry_msgs::Pose pose2;
    pose2.position.x = 0.08;
    pose2.position.y = 0.0;
    pose2.position.z = 0.4;
    pose2.orientation.w = 0.5;
    pose2.orientation.x = 0.5;
    pose2.orientation.y = 0.5;
    pose2.orientation.z = 0.5;
    geometry_msgs::Pose pose3;
    pose3.position.x = 0.08;
    pose3.position.y = 0.0;
    pose3.position.z = 0.54;
    pose3.orientation.w = 0.5;
    pose3.orientation.x = 0.5;
    pose3.orientation.y = 0.5;
    pose3.orientation.z = 0.5;
    poseArrayMsg.poses.push_back(pose1);
    poseArrayMsg.poses.push_back(pose2);
    poseArrayMsg.poses.push_back(pose3);
    pose_pub.publish(poseArrayMsg);
    ROS_INFO("Published PoseArray with 3 poses");
    return 0;
}
```

### Actual Effect as Shown in the Video
<video width="600" controls>
  <source src="resource/eeTrajTrackerdemo.mp4" type="video/mp4">
</video>

## Joint Movement Example
Start the joint movement script first. This will launch an RViz instance for the A1 robotic arm, with joints initially at zero position.

```bash
cd release/install
source setup.bash
roslaunch mobiman jointTrackerdemo.launch
```

In the launch file:
```xml
<param name="joint_states_sub_topic" value="/joint_states" />
```
`/joint_states` represents the topic for obtaining simulation values.
```xml
<param name="arm_joint_command_topic" value="/arm_joint_command_host" />
```
`/arm_joint_command_host` represents the topic to publish motor commands.

Publish messages for joint movement. The message name is `/arm_joint_target_position`, which is non-blocking and can be continuously published. The robotic arm joints can move continuously.

```python
import rospy
from sensor_msgs.msg import JointState

def publish_joint_state():
    rospy.init_node('joint_state_publisher', anonymous=True)
    pub = rospy.Publisher('/arm_joint_target_position', JointState, queue_size=10)
    rate = rospy.Rate(10) # 10 Hz
    joint_state = JointState()
    joint_state.header.seq = 0
    joint_state.header.stamp = rospy.Time.now()
    joint_state.header.frame_id = 'world'
    joint_state.name = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6']
    joint_state.velocity = []
    joint_state.effort = []
    # Initialize positions to zeros
    joint_state.position = [0, 0, 0, 0, 0, 0]
    steps = 100 # Number of steps

 to reach the target position
    target_position = [0.5, 0, 0, 0, 0, 0]
    step_increment = [(target - current) / steps for target, current in zip(target_position, joint_state.position)]
    for step in range(steps):
        joint_state.header.stamp = rospy.Time.now() # Update the timestamp
        joint_state.position = [current + increment for current, increment in zip(joint_state.position, step_increment)]
        pub.publish(joint_state)
        rate.sleep()
    rospy.loginfo("Published JointState message to /arm_joint_target_position")

if __name__ == '__main__':
    try:
        publish_joint_state()
    except rospy.ROSInterruptException:
        pass