import rclpy, cv2, heapq
from cv_bridge import CvBridge
from rclpy.node import Node
from sensor_msgs.msg import Image
from ultralytics import YOLO
from matplotlib import pyplot as plt
import numpy as np
from robot_interfaces.msg import Intrinsics
import pyrealsense2 as rs


class ImageProcessor(Node):
    def __init__(self):
        super().__init__('image_processor')
        self.subscriber_ = self.create_subscription(Image, '/rs/Image/Color', self.listener_callback, 10)
        self.depth_subscriber = self.create_subscription(Image, '/rs/Image/Depth', self.depth_callback, 10)
        self.subscriber_rs_intrinsics = self.create_subscription(Intrinsics, '/rs/Intrinsics', self.rs_intrinsics_callback, 1)
        self.publisher_ = self.create_publisher(Image, '/TeamB/rs/Image/Color/Prediction', 10)
        self.cutout_publisher_ = self.create_publisher(Image, '/TeamB/cutout', 10)
        self.depth_publisher_ = self.create_publisher(Image, '/TeamB/depth', 10)
        self.yolo_model = YOLO("/home/Team-B/ros2_ws/src/runs/detect/train/weights/best.pt")
        self.cvbridge = CvBridge()
        self.depth_intrinsics = rs.pyrealsense2.intrinsics()
        
    def listener_callback(self, msg):
        image = self.cvbridge.imgmsg_to_cv2(img_msg=msg, desired_encoding="bgr8")
        self.image = image
        result = self.yolo_model.predict(image)[0].cpu()
        self.publisher_.publish(self.cvbridge.cv2_to_imgmsg(result.plot()))

        corners = self.get_corners(result)
        if corners:
            self.corners = corners
            x1, y1, x2, y2 = corners
            lava_img = result.orig_img[y1:y2, x1:x2].copy()
            lava_img = self.segment_lava(lava_img)
            self.cutout_publisher_.publish(self.cvbridge.cv2_to_imgmsg(lava_img))

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

    def pub_depth_image(self):
        depth_normalized = cv2.normalize(self.depth_array, None, 0, 255, cv2.NORM_MINMAX)
        depth_grayscale = np.uint8(depth_normalized)
        depth_grayscale = self.cvbridge.cv2_to_imgmsg(depth_grayscale)
        self.depth_publisher_.publish(depth_grayscale)
        

    def segment_lava(self, lava_img):
        Z = lava_img.reshape((-1,3))
        Z = np.float32(Z)
        K = 2
        max_iter = 10
        epsilon = 1.0
        criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, max_iter, epsilon)
        attempts = 10
        compactness, labels, centers = cv2.kmeans(Z, K, None, criteria, attempts, cv2.KMEANS_RANDOM_CENTERS)
        center = np.uint8(centers)
        res = center[labels.flatten()]
        img_seg = res.reshape((lava_img.shape))
        
        red_vals_cols = img_seg[:, :, 0].mean(axis=0)
        n = 100
        n_smallest = heapq.nsmallest(n, range(len(red_vals_cols)), key=red_vals_cols.__getitem__)
        x_gap = int(np.median(n_smallest))
        red_vals_rows = img_seg[:, :, 0].mean(axis=1)
        n = 100
        n_largest = heapq.nlargest(n, range(len(red_vals_rows)), key=red_vals_rows.__getitem__)
        y_gap = int(np.median(n_largest))

        cv2.putText(img_seg, "#", (x_gap, y_gap), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 0, 0), 2)

        depth_at_gap = self.depth_array[self.corners[1]+y_gap, self.corners[0]+x_gap]
        self.show_depth_at_point(self.corners[1]+y_gap, self.corners[0]+x_gap, depth_at_gap)

        coordinate = rs.rs2_deproject_pixel_to_point(
            self.depth_intrinsics,
            [self.corners[1]+y_gap, self.corners[0]+x_gap],
            self.depth_array[self.corners[1]+y_gap, self.corners[0]+x_gap]*self.depth_scale
            )
        print(coordinate)

        return img_seg

    def get_corners(self, result):
        result_prob = [box.conf.item() for box in result.boxes]
        if result_prob and max(result_prob) >= 0.8:
            result = result[result_prob.index(max(result_prob))]
            if result and int(result.boxes.cls) == 2: # Lava
                x1, y1, x2, y2 = result.boxes.xyxy.cpu().to(int).numpy()[0, :]
                return x1, y1, x2, y2
        return None

    def show_depth_at_point(self, x, y, depth):
        img = self.image.copy()
        cv2.putText(img, str(int(depth)), (y, x), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 0, 0), 2)
        img = self.cvbridge.cv2_to_imgmsg(img)
        self.depth_publisher_.publish(img)

def main(args=None):
    rclpy.init(args=args)
    image_processor = ImageProcessor()
    rclpy.spin(image_processor)
    image_processor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()