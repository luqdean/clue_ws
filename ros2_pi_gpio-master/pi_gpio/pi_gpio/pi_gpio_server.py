import threading
import time
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from pi_gpio_interface.action import GPIO as GPIO_Action #rename
import lgpio as GPIO



# class RaspberryPIGPIO():
#     def __init__(self, pin_id):
#         self.pin_id = pin_id
#         GPIO.setwarnings(False)
#         GPIO.setmode(GPIO.BCM)
#         GPIO.setup(pin_id, GPIO.OUT) #Set pin as output
#         print ("Setting GPIO " + str(self.pin_id))
#         time.sleep(0.1)
#         self.pwm = GPIO.PWM(self.pin_id, 50)
#         self.pwm.start(0)

    
#     def set_pin(self,direction):

#         if direction < 0:
#             direction = 0
#         elif direction > 180:
#             direction = 180

#         a = 10 
#         b = 2

#         duty = a / 180 * direction + b

#         self.pwm.ChangeDutyCycle(duty)

#         print("direction ="), direction, "-> duty =", duty
#         time.sleep(1) 
class RaspberryPIGPIO():
    def __init__(self, pin_id):
        self.pin_id = pin_id
        self.h = GPIO.gpiochip_open(0)  
        GPIO.tx_pwm(self.h, self.pin_id, 50, 0)  
        print("Setting GPIO " + str(self.pin_id))
        time.sleep(0.1)

    def set_pin(self, direction):
        if direction < 0:
            direction = 0
        elif direction > 360:
            direction = 360
        a = 10
        b = 2
        duty = (a / 360) * direction + b
        GPIO.tx_pwm(self.h, self.pin_id, 50, duty)

        print("Change direction to ", direction, "-> duty =", duty)
        time.sleep(1)

class GPIOActionServer(Node):

    def __init__(self):
        super().__init__('pi_gpio_server')
        pin_id=11
        self.pin_dic = {}
        self.pin_dic[pin_id] =  RaspberryPIGPIO(pin_id)

        self._goal_handle = None
        self._goal_lock = threading.Lock()

        #Node, action_type, action_name, execute_callback
        self._action_server = ActionServer(
            self,
            GPIO_Action,#interface
            'pi_gpio_server',
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
        feedback_msg = GPIO_Action.Feedback()
        feedback_msg.feedback = 1

        # Populate result message
        result = GPIO_Action.Result()

        if not goal_handle.is_active:
            self.get_logger().info('Goal aborted')
            return GPIO_Action.Result()

        if goal_handle.is_cancel_requested:
            goal_handle.canceled()
            self.get_logger().info('Goal canceled')
            return GPIO_Action.Result()

        # Publish the feedback
        goal_handle.publish_feedback(feedback_msg)

        direction = goal_msg  
        self.pin_dic[11].set_pin(direction)
        time.sleep(0.1)
        result.value = 3
        
        goal_handle.succeed()
        return result

def main(args=None):
    rclpy.init(args=args)

    action_server = GPIOActionServer()

    executor = MultiThreadedExecutor()
    rclpy.spin(action_server, executor=executor)

    action_server.destroy()
    
    GPIO.cleanup()
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()
