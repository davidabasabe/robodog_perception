from ultralytics import YOLO

# Load a pretrained model
model = YOLO("yolo11n.pt")

# Train the model on your custom dataset
model.train(data="/home/Team-B/Course Objects 2.v3i.yolov11/data.yaml", epochs=100, imgsz=640)