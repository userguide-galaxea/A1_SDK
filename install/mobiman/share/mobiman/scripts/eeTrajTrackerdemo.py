import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseArray, Pose

class PoseArrayPublisher(Node):
    def __init__(self):
        super().__init__('pose_array_publisher')
        self.publisher_ = self.create_publisher(PoseArray, '/a1_ee_target_traj_1', 10)
        self.publish_pose_array()

    def publish_pose_array(self):
        pose_array_msg = PoseArray()

        pose1 = Pose()
        pose1.position.x = 0.08
        pose1.position.y = 0.0
        pose1.position.z = 0.3
        pose1.orientation.w = 0.5
        pose1.orientation.x = 0.5
        pose1.orientation.y = 0.5
        pose1.orientation.z = 0.5

        pose2 = Pose()
        pose2.position.x = 0.08
        pose2.position.y = 0.0
        pose2.position.z = 0.4
        pose2.orientation.w = 0.5
        pose2.orientation.x = 0.5
        pose2.orientation.y = 0.5
        pose2.orientation.z = 0.5

        pose3 = Pose()
        pose3.position.x = 0.08
        pose3.position.y = 0.0
        pose3.position.z = 0.54
        pose3.orientation.w = 0.5
        pose3.orientation.x = 0.5
        pose3.orientation.y = 0.5
        pose3.orientation.z = 0.5

        pose_array_msg.poses.append(pose1)
        pose_array_msg.poses.append(pose2)
        pose_array_msg.poses.append(pose3)


        self.publisher_.publish(pose_array_msg)
        self.get_logger().info('Published PoseArray with 3 poses')

def main(args=None):
    rclpy.init(args=args)
    node = PoseArrayPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
