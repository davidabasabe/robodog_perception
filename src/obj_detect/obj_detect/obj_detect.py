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

        self.label_lookup = {
            0: "arrow_left",
            1: "arrow_right",
            2: "patch",
            3: "lava",
            4: "path"
        }

    def listener_callback(self, msg):
        image = self.cvbridge.imgmsg_to_cv2(img_msg=msg, desired_encoding="bgr8")
        result = self.yolo_model.predict(image)[0].cpu()

        result_prob = [box.conf.item() for box in result.boxes]
        #print("Probabilities:", result_prob)

        result_coords = [box.xyxy for box in result.boxes]
        #print("Bounding Box Coordinates:", result_coords)

        result_labels = [box.cls.item() for box in result.boxes]
        #print("Class Indices (Labels):", result_labels)

        #print(result_prob)
        self.publisher_.publish(self.cvbridge.cv2_to_imgmsg(result.plot()))

        boxes = [{
            "label": self.label_lookup[int(box.cls.item())],
            "conf": box.conf.item(),
            "box": box.xyxy.tolist()[0]
        } for box in result.boxes]
        print(boxes)



def main(args=None):
    rclpy.init(args=args)
    image_processor = ImageProcessor()
    rclpy.spin(image_processor)
    image_processor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()