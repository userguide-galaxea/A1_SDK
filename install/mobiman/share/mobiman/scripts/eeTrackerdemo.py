import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Header

class PoseStampedPublisher(Node):
    def __init__(self):
        super().__init__('pose_stamped_publisher')
        self.publisher_ = self.create_publisher(PoseStamped, '/a1_ee_target', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)  # Timer set for 1 second
        self.pose_msg = PoseStamped()
        self.pose_msg.header.frame_id = 'world'
        self.pose_msg.pose.position.x = 0.08
        self.pose_msg.pose.position.y = 0.0
        self.pose_msg.pose.position.z = 0.5
        self.pose_msg.pose.orientation.x = 0.5
        self.pose_msg.pose.orientation.y = 0.5
        self.pose_msg.pose.orientation.z = 0.5
        self.pose_msg.pose.orientation.w = 0.5

    def timer_callback(self):
        self.pose_msg.header.stamp = self.get_clock().now().to_msg()
        self.publisher_.publish(self.pose_msg)
        self.get_logger().info("Published PoseStamped message to /a1_ee_target")
        rclpy.shutdown()  # Shutdown after publishing

def main(args=None):
    rclpy.init(args=args)
    pose_stamped_publisher = PoseStampedPublisher()
    rclpy.spin(pose_stamped_publisher)

if __name__ == '__main__':
    main()
