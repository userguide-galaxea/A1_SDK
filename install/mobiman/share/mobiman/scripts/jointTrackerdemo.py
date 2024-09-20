import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header

class JointStatePublisher(Node):
    def __init__(self):
        super().__init__('joint_state_publisher')
        self.publisher_ = self.create_publisher(JointState, '/arm_joint_target_position', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)  # 10 Hz
        self.step = 0
        self.steps = 100
        self.target_position = [0.5, 0, 0, 0, 0, 0]
        self.joint_state = JointState()
        self.joint_state.name = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6']
        self.joint_state.velocity = []
        self.joint_state.effort = []
        self.joint_state.position = [0.0] * 6  # Initialize with float values
        self.step_increment = [(target - current) / self.steps for target, current in zip(self.target_position, self.joint_state.position)]

    def timer_callback(self):
        if self.step < self.steps:
            self.joint_state.header = Header(stamp=self.get_clock().now().to_msg(), frame_id='world')
            self.joint_state.position = [float(current + increment) for current, increment in zip(self.joint_state.position, self.step_increment)]
            self.publisher_.publish(self.joint_state)
            self.step += 1
        else:
            self.get_logger().info('Published JointState message to /arm_joint_target_position')
            rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    joint_state_publisher = JointStatePublisher()
    rclpy.spin(joint_state_publisher)

if __name__ == '__main__':
    main()
