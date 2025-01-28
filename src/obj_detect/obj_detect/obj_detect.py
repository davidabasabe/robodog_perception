import rclpy
import numpy as np
from cv_bridge import CvBridge
from rclpy.node import Node
from sensor_msgs.msg import Image
from ultralytics import YOLO
import pyrealsense2 as rs
from robot_interfaces.msg import Intrinsics, YoloDetection


class ImageProcessor(Node):
    def __init__(self):
        super().__init__('image_processor')
        self.subscriber_ = self.create_subscription(Image, '/rs/Image/Color', self.listener_callback, 10)
        self.depth_subscriber = self.create_subscription(Image, '/rs/Image/Depth', self.depth_callback, 10)
        self.subscriber_rs_intrinsics = self.create_subscription(Intrinsics, '/rs/Intrinsics', self.rs_intrinsics_callback, 1)
        self.lava_pub = self.create_publisher(YoloDetection, '/lava_detection', 10)
        self.arrow_left_pub = self.create_publisher(YoloDetection, '/arrow_left', 10)
        self.arrow_right_pub = self.create_publisher(YoloDetection, '/arrow_right', 10)
        self.yolo_model = YOLO("src/obj_detect/weights/best.pt")
        self.cvbridge = CvBridge()
        self.depth_intrinsics = rs.pyrealsense2.intrinsics()
        self.depth_scale = 0
        self.depth_array = None

        self.label_lookup = {
            0: "arrow_left",
            1: "arrow_right",
            2: "patch",
            3: "lava",
            4: "path"
        }

    def listener_callback(self, msg):
        if self.depth_array is None: return

        image = self.cvbridge.imgmsg_to_cv2(img_msg=msg, desired_encoding="bgr8")
        result = self.yolo_model.predict(image, verbose=False)[0].cpu()

        def get_midpoint(coord_list):
            x = (coord_list[0] + coord_list[2])/2
            y = (coord_list[1] + coord_list[3])/2
            return [x, y]

        boxes = [{
            "label": self.label_lookup[int(box.cls.item())],
            "conf": box.conf.item(),
            "coord": get_midpoint(box.xyxy.tolist()[0])
        } for box in result.boxes]

        def get_coords(box):
            img_x, img_y = box["coord"]
            distance = self.depth_array[int(img_y), int(img_x)]*self.depth_scale
            coords = self.pixel_to_point(int(img_x), int(img_y))
            return coords, distance
        
        classes = [e["label"] for e in boxes]

        lava_msg = YoloDetection()
        lava_msg.class_name = "lava"
        if "path" in classes:
            box = boxes[classes.index("path")]
            print(box)
            coords, dist = get_coords(box)
            lava_msg.x, lava_msg.y, lava_msg.z = coords
            lava_msg.distance = dist
            lava_msg.detected = True
        else:
            lava_msg.detected = False

        al_msg = YoloDetection()
        al_msg.class_name = "arrow_left"
        if "arrow_left" in classes:
            box = boxes[classes.index("arrow_left")]
            coords, dist = get_coords(box)
            al_msg.x, al_msg.y, al_msg.z = coords
            al_msg.distance = dist
            al_msg.detected = True
        else:
            al_msg.detected = False

        ar_msg = YoloDetection()
        ar_msg.class_name = "arrow_right"
        if "arrow_right" in classes:
            box = boxes[classes.index("arrow_right")]
            coords, dist = get_coords(box)
            ar_msg.x, ar_msg.y, ar_msg.z = coords
            ar_msg.distance = dist
            ar_msg.detected = True
        else:
            ar_msg.detected = False

        self.lava_pub.publish(lava_msg)
        self.arrow_left_pub.publish(al_msg)
        self.arrow_right_pub.publish(ar_msg)

        return      # Testing with paths class only

        labels = [e["label"] for e in boxes]
        if "path" in labels:
            path = boxes[labels.index("path")]
            path_img_x, path_img_y = path["coord"]
            path_coods = self.pixel_to_point(int(path_img_x), int(path_img_y))
            print(f"x: {path_img_x:.2f}  y: {path_img_y:.2f}  d: {self.depth_array[int(path_img_y), int(path_img_x)]*self.depth_scale:.2f}  | ", path_coods)
        

    def depth_callback(self, msg):
        depth_image = self.cvbridge.imgmsg_to_cv2(msg, desired_encoding='16UC1')
        self.depth_array = np.array(depth_image, dtype=np.uint16)

    def rs_intrinsics_callback(self, msg):
        self.depth_intrinsics.width = msg.width
        self.depth_intrinsics.height = msg.height
        self.depth_intrinsics.ppx = msg.ppx
        self.depth_intrinsics.ppy = msg.ppy
        self.depth_intrinsics.fx = msg.fx
        self.depth_intrinsics.fy = msg.fy
        self.depth_scale = msg.depth_scale
        if msg.model == "rs.pyrealsense2.distortion.inverse_brown_conrady":
            self.depth_intrinsics.model = rs.pyrealsense2.distortion.inverse_brown_conrady
        self.depth_intrinsics.coeffs = msg.coeffs

    def pixel_to_point(self, x, y):
        point = rs.rs2_deproject_pixel_to_point(
            self.depth_intrinsics,
            [y, x],
            self.depth_array[y, x]*self.depth_scale
            )
        return [point[1], point[0], point[2]]   # rs2 is kinda fucked

def main(args=None):
    rclpy.init(args=args)
    image_processor = ImageProcessor()
    rclpy.spin(image_processor)
    image_processor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()