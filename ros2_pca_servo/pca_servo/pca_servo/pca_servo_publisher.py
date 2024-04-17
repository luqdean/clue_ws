import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class ServoParameterPublisher(Node):

    def __init__(self):
        super().__init__('servo_parameter_publisher')
        self._servo_id = 1
        self._direction = 90
        self._publisher = self.create_publisher(Int32, 'servo_parameters', 10)
        self._timer = self.create_timer(1.0, self.publish_servo_parameters)

    def publish_servo_parameters(self):
        msg = Int32()
        msg.data = self._servo_id
        self._publisher.publish(msg)
        msg.data = self._direction
        self._publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    servo_parameter_publisher = ServoParameterPublisher()
    rclpy.spin(servo_parameter_publisher)
    servo_parameter_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
