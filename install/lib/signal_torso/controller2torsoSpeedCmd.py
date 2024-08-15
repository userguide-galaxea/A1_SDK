#!/usr/bin/env python3

import rospy
from sensor_msgs.msg import Joy
from signal_chassis.msg import controller_signal_stamped
from geometry_msgs.msg import Twist
import math

def map_value(input_value, input_min, input_max, output_min, output_max):
    # 将输入值映射到[0, 1]范围内
    normalized_input = (input_value - input_min) / (input_max - input_min)
    # 将归一化后的值映射到输出范围内
    output_value = output_min + normalized_input * (output_max - output_min)
    return output_value

def mapping_function(input_value, min,max):
    return map_value(input_value, 240, 1807, min, max)
def joy_callback(data):
    # 将手柄输入转换为速度命令
    cmd_vel = Twist()
    data_left_x = data.data.left_x_axis
    data_left_y = data.data.left_y_axis
    data_right_x = data.data.right_x_axis
    data_right_y = data.data.right_y_axis
    cmd_vel.linear.x = mapping_function(data_left_x, 1, -1) * 0.0 # 将手柄的左摇杆上下方向映射到机器人的线速度
    cmd_vel.linear.y = mapping_function(data_left_y, -1, 1) * 0.2
    cmd_vel.angular.y = mapping_function(data_right_x, 1, -1) * 1
    cmd_vel.angular.x = mapping_function(data_right_y, -1, 1) * 1 # 将手柄的左摇杆左右方向映射到机器人的角速度
    if abs(cmd_vel.linear.x) < 0.01:
        cmd_vel.linear.x = 0
    if abs(cmd_vel.linear.y) < 0.01:
        cmd_vel.linear.y = 0
    if abs(cmd_vel.angular.y) < 0.1:
        cmd_vel.angular.y = 0
    if abs(cmd_vel.angular.x) < 0.1:
        cmd_vel.angular.x = 0

    # 发布速度命令到 /cmd_vel 话题上
    pub.publish(cmd_vel)

if __name__ == '__main__':
    # 初始化 ROS 节点
    rospy.init_node('joy_to_cmd_vel_node')

    # 订阅 joy 话题
    rospy.Subscriber("/controller", controller_signal_stamped, joy_callback)

    # 创建一个发布者，发布速度命令到 /cmd_vel 话题上
    pub = rospy.Publisher('/target_torso_speed', Twist, queue_size=10)

    # 循环等待回调
    rospy.spin()
