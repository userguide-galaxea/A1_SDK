#!/usr/bin/env python3
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
    pose_msg.pose.position.x = 0.08
    pose_msg.pose.position.y = 0.0
    pose_msg.pose.position.z = 0.5
    pose_msg.pose.orientation.x = 0.5
    pose_msg.pose.orientation.y = 0.5
    pose_msg.pose.orientation.z = 0.5
    pose_msg.pose.orientation.w = 0.5
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