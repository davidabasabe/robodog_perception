from ultralytics import YOLO

# Load your custom model
model = YOLO("yolo11n.pt")
# Predict on an image
results = model("https://cdn.pixabay.com/photo/2024/09/19/07/30/horses-9057949_960_720.jpg")