import rclpy
from cv_bridge import CvBridge
from rclpy.node import Node
from sensor_msgs.msg import Image
from ultralytics import YOLO


class ImageProcessor(Node):
    def __init__(self):
        super().__init__('image_processor')
        self.subscriber_ = self.create_subscription(Image, '/go2/Image', self.listener_callback, 10)
        self.publisher_ = self.create_publisher(Image, '/TeamB/go2/Image/Prediction', 10)
        self.yolo_model = YOLO("src/obj_detect/weights/best.pt")
        self.cvbridge = CvBridge()

    def listener_callback(self, msg):
        image = self.cvbridge.imgmsg_to_cv2(img_msg=msg, desired_encoding="bgr8")
        result = self.yolo_model.predict(image)[0].cpu()
        self.publisher_.publish(self.cvbridge.cv2_to_imgmsg(result.plot()))



def main(args=None):
    rclpy.init(args=args)
    image_processor = ImageProcessor()
    rclpy.spin(image_processor)
    image_processor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()