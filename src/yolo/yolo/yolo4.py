from ultralytics import YOLO

# Load a model
model = YOLO("runs/detect/train/weights/best.pt")  # load a custom model

# Predict with the model
results = model("yolo/yolo/go2146_jpg.rf.0a7442bf754cf6dd08efdddd8dd98444.jpg")  # predict on an image

for result in results:
    boxes = result.boxes # Boxes object for bounding box outputs
    masks = result.masks # Masks object for segmentation masks outputs
    keypoints = result.keypoints # Keypoints object for pose outputs
    probs = result.probs # Probs object for classification outputs
    obb = result.obb # Oriented boxes object for OBB outputs
    result.show() # display to screen
    result.save(filename="result.jpg") # save to disk