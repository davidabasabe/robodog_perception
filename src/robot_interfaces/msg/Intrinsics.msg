# Video Stream Intrinsics of Intel RealSense
uint16 width # Width of the image in pixels
uint16 height # Height of the image in pixels
float64 ppx # Horizontal coordinate of the principal point of the image, as a pixel offset from the left edge
float64 ppy # Vertical coordinate of the principal point of the image, as a pixel offset from the top edge
float64 fx # Focal length of the image plane, as a multiple of pixel width
float64 fy # Focal length of the image plane, as a multiple of pixel height
float64 depth_scale # Depth Scale for real distance value in meters
string model # Distortion model of the image
float64[] coeffs # Distortion coefficients