import rclpy
from rclpy.action import ActionClient
from pca_servo_interface.action import PCAServo as PCAServo_Action
from rclpy.node import Node
from std_msgs.msg import Int32

class PCAServoClient(Node):

    def __init__(self):
        super().__init__('pca_servo_client')
        self._action_client = ActionClient(self, PCAServo_Action, 'pca_servo_server')
        self._servo_id = None
        self._direction = None
        self.create_subscription(Int32, 'servo_parameters', self.servo_parameters_callback, 10)

    def servo_parameters_callback(self, msg):
        self._servo_id = msg.data

    def send_goal(self):
        if self._servo_id is None or self._direction is None:
            self.get_logger().info('Servo parameters are not received yet.')
            return

        goal_msg = PCAServo_Action.Goal()
        goal_msg.direction = f"{self._servo_id},{self._direction}"

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

    def feedback_callback(self, feedback_msg):
        self.get_logger().info('Received feedback: {0}'.format(feedback_msg.feedback))

def main(args=None):
    rclpy.init(args=args)

    pca_servo_client = PCAServoClient()

    rclpy.spin(pca_servo_client)

    pca_servo_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
