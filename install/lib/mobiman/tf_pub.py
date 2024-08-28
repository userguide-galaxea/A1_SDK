import tf2_ros
import rospy
from tf.transformations import quaternion_from_euler

from geometry_msgs.msg import Pose, TransformStamped
from nav_msgs.msg import Odometry

class GazeboTfPublisher():
    def __init__(self):
        self.gazebo_robot_gt_sub_ = rospy.Subscriber('/ground_truth/state', Odometry, callback=self.gt_callback, queue_size=5)
        
        self.gazebo_target_gt_sub = rospy.Subscriber('/ground_truth/target_state', Odometry, callback=self.gt_callback, queue_size=5)
        
        self.tf_br_ = tf2_ros.TransformBroadcaster()
        
    def gt_callback(self, msg : Odometry):
        tf_msg_ = TransformStamped()
        tf_msg_.header = msg.header
        tf_msg_.child_frame_id = msg.child_frame_id
        tf_msg_.transform.translation.x = msg.pose.pose.position.x
        tf_msg_.transform.translation.y = msg.pose.pose.position.y
        tf_msg_.transform.translation.z = msg.pose.pose.position.z
        tf_msg_.transform.rotation.x = msg.pose.pose.orientation.x
        tf_msg_.transform.rotation.y = msg.pose.pose.orientation.y
        tf_msg_.transform.rotation.z = msg.pose.pose.orientation.z
        tf_msg_.transform.rotation.w = msg.pose.pose.orientation.w
        self.tf_br_.sendTransform(tf_msg_)
        
def main():
    rospy.init_node("gazebo_gt_tf_node")
    node = GazeboTfPublisher()
    rospy.loginfo("Started tf pub of gazebo GT")
    rospy.spin()
    
if __name__=="__main__":
    main()

