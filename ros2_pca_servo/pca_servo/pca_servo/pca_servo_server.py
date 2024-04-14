import threading
import time
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from pca_servo_interface.action import PCAServo as PCAServo_Action #rename
from adafruit_servokit import ServoKit



class PCA9685Servo():
    kit = ServoKit(channels=16)

    def __init__(self, servo_id):
        self.servo_id = servo_id
        print("Setting servo " + str(self.servo_id))
        time.sleep(0.1)

    def set_servo(self, direction):
        if direction < 0:
            direction = 0
        elif direction > 180:
            direction = 180
        self.kit.servo[self.servo_id].angle = direction
        time.sleep(1)
        self.kit.servo[self.servo_id].angle = direction
        print("Change direction to ", direction)
        time.sleep(1)

class PCAServoNode(Node):

    def __init__(self):
        super().__init__('pca_servo_server')
        self._goal_handle = None
        self._goal_lock = threading.Lock()
        #Node, action_type, action_name, execute_callback
        self._action_server = ActionServer(
            self,
            PCAServo_Action,#interface
            'pca_servo_server',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback,
            callback_group=ReentrantCallbackGroup())

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()

    def goal_callback(self, goal_request):
        self.get_logger().info('Received goal request')
        return GoalResponse.ACCEPT

    def handle_accepted_callback(self, goal_handle):
        with self._goal_lock:
            if self._goal_handle is not None and self._goal_handle.is_active:
                self.get_logger().info('Aborting previous goal')
                self._goal_handle.abort()
            self._goal_handle = goal_handle

        goal_handle.execute()

    def cancel_callback(self, goal):
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        """Executes the goal."""
        self.get_logger().info('Executing goal...')

        # Populate goal message
        goal_msg = goal_handle.request.direction

        # Populate feedback message
        feedback_msg = PCAServo_Action.Feedback()
        feedback_msg.feedback = 1

        # Populate result message
        result = PCAServo_Action.Result()

        if not goal_handle.is_active:
            self.get_logger().info('Goal aborted')
            return PCAServo_Action.Result()

        if goal_handle.is_cancel_requested:
            goal_handle.canceled()
            self.get_logger().info('Goal canceled')
            return PCAServo_Action.Result()

        # Publish the feedback
        goal_handle.publish_feedback(feedback_msg)
        servo_id, direction = goal_msg.split(',')
        servo_id = int(servo_id)  
        direction = int(direction)    
        self.servo_dic[servo_id].set_servo(direction)
        time.sleep(0.1)
        result.value = 3
        goal_handle.succeed()
        return result

def main(args=None):
    rclpy.init(args=args)

    action_server = PCAServoNode()

    executor = MultiThreadedExecutor()
    rclpy.spin(action_server, executor=executor)

    action_server.destroy()
      
    rclpy.shutdown()

if __name__ == '__main__':
    main()
