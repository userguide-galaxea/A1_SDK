import rospy
import gazebo_ros
from gazebo_msgs.msg import ModelState
from gazebo_msgs.srv import SetModelState, SetModelConfiguration
from geometry_msgs.msg import Twist, PoseStamped
from nav_msgs.msg import Odometry
from sensor_msgs.msg import Joy
from tf.transformations import quaternion_from_euler, euler_from_quaternion

from ocs2_msgs.msg import mpc_target_trajectories, mpc_state, mpc_input

import numpy as np

class ModelStateSetter():
    def __init__(self):
        # self.cmd_sub_ = rospy.Subscriber("/target_cmd", Twist, self.target_cmd_callback, queue_size=10)
        self.joy_sub_ = rospy.Subscriber("/joy0", Joy, self.target_cmd_callback, queue_size=10)
        
        self.dt = 0.02
        self.target_pose = PoseStamped()
        
        self.set_state_srv_ = rospy.ServiceProxy('/gazebo/set_model_state', SetModelState)
        self.target_state_sub_ = rospy.Subscriber('/ground_truth/target_state', Odometry, self.target_state_callback, queue_size=10)
        # self.target_cmd_timer_ = rospy.Timer(rospy.Duration(0.1), self.timerCallback)
        
        self.state_msg_ = ModelState()
        self.state_msg_.model_name = "target"
        
        self.target_traj_pub_ = rospy.Publisher('/x1_robot_mpc_target', mpc_target_trajectories, queue_size=1)
        self.last_published_time_ = rospy.Time.now().to_sec()
        
    def target_cmd_callback(self, msg : Joy):
        vy = msg.axes[0]  # left stick x-axis
        vx = msg.axes[1]  # left stick y-axis
        vz = msg.axes[3]  # right stick y-axis

        delta = msg.axes[2] * 0.4 # right stick x-axis
        
        dx = vx * self.dt
        dy = vy * self.dt
        dz = vz * self.dt
        dyaw = delta * self.dt
        
        pose = self.target_pose.pose
        pose.position.x += dx
        pose.position.y += dy
        pose.position.z += dz
        
        euler_ = euler_from_quaternion([pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w, ])
        quat_ = quaternion_from_euler(euler_[0], euler_[1], euler_[2] + dyaw)
        pose.orientation.x = quat_[0]
        pose.orientation.y = quat_[1]
        pose.orientation.z = quat_[2]
        pose.orientation.w = quat_[3]
        self.state_msg_.pose = pose
        
        # rospy.wait_for_service('/gazebo/set_model_state')
        if msg.buttons[6]:
            resp = self.set_state_srv_( self.state_msg_ )
            
        if msg.buttons[7] and rospy.Time.now().to_sec() - self.last_published_time_ > .5:
            self.pub_traj_msg()
            self.last_published_time_ = rospy.Time.now().to_sec()
    
    def pub_traj_msg(self):
        traj_msgs_ = mpc_target_trajectories()
        
        input = mpc_input()
        input.value = np.zeros(6)
        traj_msgs_.inputTrajectory = [input]
        
        state = mpc_state()
        state.value = np.array([
                        self.target_pose.pose.position.x,
                        self.target_pose.pose.position.y,
                        self.target_pose.pose.position.z,
                        self.target_pose.pose.orientation.x,
                        self.target_pose.pose.orientation.y,
                        self.target_pose.pose.orientation.z,
                        self.target_pose.pose.orientation.w,])
        
        traj_msgs_.stateTrajectory = [state]
        traj_msgs_.timeTrajectory = [self.target_pose.header.stamp.to_sec()]
        
        self.target_traj_pub_.publish(traj_msgs_)
        
    def target_state_callback(self, msg: Odometry):
        self.target_pose.pose = msg.pose.pose
        self.target_pose.header = msg.header

def main():
    rospy.init_node("target_cmd_node")
    node = ModelStateSetter()
    rospy.loginfo("Started joy control of target, hold 'L1' to control the target and 'R1' to send command")
    rospy.spin()
    

if __name__=="__main__":
    main()


