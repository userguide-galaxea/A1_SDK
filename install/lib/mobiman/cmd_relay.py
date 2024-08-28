#!/usr/bin/python3
import rospy
from mobiman_msgs.msg import ArmBasicCommand
from rm_msgs.msg import JointPos

class RelayNode():
    def __init__(self) -> None:
        rospy.loginfo("setting up pub...")
        self.pub_ = rospy.Publisher("/rm_driver/JointPos", JointPos, queue_size=1)

        rospy.loginfo("setting up sub...")
        self.sub_ = rospy.Subscriber("/arm_joint_command", ArmBasicCommand, self.cmd_callback)
        

    def cmd_callback(self, msg: ArmBasicCommand):
        jpos = msg.jpos.pos
        out_msg = JointPos()
        out_msg.joint = [*jpos]
        # rospy.loginfo(f"relaying msg.. {out_msg}")
        self.pub_.publish(out_msg)

def main():
    rospy.init_node("jpos_test")    
    node = RelayNode()
    rospy.spin()

if __name__=="__main__":
    main()
    
