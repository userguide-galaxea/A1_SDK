import rospy
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Joy

#!/usr/bin/env python
import rospy
import numpy as np

from geometry_msgs.msg import Twist, Vector3
from sensor_msgs.msg import Joy
from mobiman_msgs.msg import ChassisCommand

cmd_msg = ChassisCommand()

def callback_controller(data):
    global cmd_msg
    # cmd_msg.header.stamp = rospy.Time.now()

    u = data.axes[1] * 15  # left stick y-axis

    delta = data.axes[2] * 0.5 # right stick x-axis
    drivetrain_input = double_ackerman(u, delta)
    
    if not data.buttons[6] :
        cmd_msg.wheel_speed = drivetrain_input[:4]
        cmd_msg.steer_angles = drivetrain_input[4:]
    else:
        cmd_msg.wheel_speed = [0]*4
        cmd_msg.steer_angles = [0]*4
    
def double_ackerman(u, delta):
    """
    inputs: 
        u: linear speed [-3, 3]
        delta: turn angle [-pi, pi]
    """
    L = 0.490 # wheelbase
    d = 0.365 # track
    r = 0.0935 # wheel radius
    
    if abs(delta) < 0.001: # turning radius too big
        return [u, u, u, u, 0.0, 0.0, 0.0, 0.0]
    else:
        R = L / (2*np.tan(delta))
        Rl = R - d/2
        Rr = R + d/2

        delta_fl =  np.arctan(L / (2*R - d))
        delta_rl = -delta_fl
        delta_fr =  np.arctan(L / (2*R + d))
        delta_rr = -delta_fr

        u_fl = u * Rl / (R*np.cos(delta_fl))
        u_rl = u_fl
        u_fr = u * Rr / (R*np.cos(delta_fr))
        u_rr = u_fr
        return [u_fl, u_fr, u_rl, u_rr, delta_fl, delta_fr, delta_rl, delta_rr]

def commander():
    global cmd_msg

    pub = rospy.Publisher('chassis_command', ChassisCommand, queue_size = 1)
    rate = rospy.Rate(50)

    while not rospy.is_shutdown():
        pub.publish(cmd_msg)
        rate.sleep()


if __name__ == '__main__':
    rospy.init_node('commander', anonymous=True)
    rospy.Subscriber("joy0", Joy, callback_controller)
    commander()
    rospy.loginfo("Started joy control of the chassis...")
    rospy.spin()