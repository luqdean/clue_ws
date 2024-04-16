import rclpy
from rclpy.action import ActionClient
from pca_servo_interface.action import PCAServo as PCAServo_Action #rename
from rclpy.node import Node

class PCAServoClient(Node):

    def __init__(self):
        super().__init__('pca_servo_client')
        self._action_client = ActionClient(self, PCAServo_Action, 'pca_servo_server')

    def send_goal(self, servo_id, direction):
        goal_msg = PCAServo_Action.Goal()
        goal_msg.direction = f"{servo_id},{direction}"

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

    # Example: sending a goal
    servo_id = 1
    direction = 90
    pca_servo_client.send_goal(servo_id, direction)

    rclpy.spin(pca_servo_client)

    pca_servo_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
