      
#!/usr/bin/env python3

import rospy
from sensor_msgs.msg import JointState
from filterpy.kalman import KalmanFilter
import numpy as np

class ArmStateEstimator:
    def __init__(self, joint_indices=None, topic_name=None):
        dim_x = 12
        dim_z = 6
        self.kf = KalmanFilter(dim_x=dim_x, dim_z=dim_z)
        
        dt = 1 / 180.0
        self.kf.F = np.eye(dim_x)
        self.kf.F[0:6, 6:12] = np.eye(6) * dt
        
        self.kf.H = np.block([np.eye(6), np.zeros((6,6))])

        self.kf.Q = np.diag(np.hstack([np.ones(6) * 1e-6, np.ones(6) * 1e-6]))
        
        self.kf.R = np.diag(np.ones(dim_z) * 0.005**2)

        self.kf.x = np.zeros(dim_x)
        self.kf.P = np.eye(dim_x) * 0.0001

        if topic_name is None:
            self.joint_state_sub_ = rospy.Subscriber("/joint_states", JointState, self.joint_states_callback, queue_size=5)
        else:
            self.joint_state_sub_ = rospy.Subscriber(topic_name, JointState, self.joint_states_callback, queue_size=5)
        
        self.joint_indices = joint_indices
        self.joint_state_est_pub_ = rospy.Publisher("/joint_states_estimate", JointState, queue_size=5)
        
    def joint_states_callback(self, msg : JointState):
        if self.joint_indices is None:
            current_joint_positions = np.array(msg.position[:6])
        else:
            current_joint_positions = np.array(msg.position)[self.joint_indices]

        self.kf.predict()
        self.kf.update(current_joint_positions)
        jpos_est = self.kf.x[0:6]
        jspeed_est = self.kf.x[6:12]
        est_msg = JointState()
        est_msg.header.stamp = msg.header.stamp
        est_msg.position = jpos_est
        est_msg.velocity = jspeed_est
        self.joint_state_est_pub_.publish(est_msg)

def main():
    rospy.init_node('arm_state_estimator')
    rospy.loginfo("Starting arm joint state estimator...")
    # joint_indices = np.arange(2,8).astype(np.int64)
    joint_indices = None
    
    estimator = ArmStateEstimator(joint_indices=joint_indices)
    
    rospy.spin()

if __name__ == '__main__':
    main()

    