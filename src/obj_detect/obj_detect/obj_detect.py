import rclpy
import numpy as np
from cv_bridge import CvBridge
from rclpy.node import Node
from sensor_msgs.msg import Image
from ultralytics import YOLO


class ImageProcessor(Node):
    def __init__(self):
        super().__init__('image_processor')
        self.subscriber_ = self.create_subscription(Image, '/rs/Image/Color', self.listener_callback, 10)
        self.depth_subscriber = self.create_subscription(Image, '/rs/Image/Depth', self.depth_callback, 10)
        self.publisher_ = self.create_publisher(Image, '/TeamB/rs/Image/Prediction', 10)
        self.yolo_model = YOLO("src/obj_detect/weights/best.pt")
        self.cvbridge = CvBridge()

        self.depth_array = None

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

        def get_midpoint(coord_list):
            x = (coord_list[0] + coord_list[2])/2
            y = (coord_list[1] + coord_list[3])/2
            return [x, y]

        boxes = [{
            "label": self.label_lookup[int(box.cls.item())],
            "conf": box.conf.item(),
            "coord": get_midpoint(box.xyxy.tolist()[0])
        } for box in result.boxes]

        

        print(boxes)

    def depth_callback(self, msg):
        depth_image = self.cvbridge.imgmsg_to_cv2(msg, desired_encoding='16UC1')
        self.depth_array = np.array(depth_image, dtype=np.uint16)



def main(args=None):
    rclpy.init(args=args)
    image_processor = ImageProcessor()
    rclpy.spin(image_processor)
    image_processor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()