from csv import reader
import ast
import cv2
import os

#self note: i need to not code at 2 am
#MUST BE IN FOLDER WITH IMAGE FRAMES AND CSV OF YOLOv5 DETECTIONS

#YOLO BOUNDING BOX PRINTER BY COLE RADETICH

#OUR DATA FRAME FOR RAW INPUTS
file_index = []
filename = []
min_pts = []
max_pts = []
conf = []
name = []

#CSV read driver, this parses the csv and gives us some lists (could have done a dictionary but I like my sanity)

if(os.path.isfile('detections.csv')): 
    with open('detections.csv', 'r') as detections:
        detection_list = reader(detections)
        i = 0
        for index in detection_list:
            i+=1
            print("READING CSV LINE #", i)
            file_index.append(int(index[1]))
            filename.append(index[0])
            min_pts.append((int(ast.literal_eval(index[2])["xmin"]), int(ast.literal_eval(index[2])["ymin"])))
            max_pts.append((int(ast.literal_eval(index[2])["xmax"]), int(ast.literal_eval(index[2])["ymax"])))
            conf.append(ast.literal_eval(index[2])["confidence"])
            name.append(ast.literal_eval(index[2])["name"])
else:
    print("DETECTIONS FILE NOT PRESENT")

#print image driver
for i in range(len(file_index)-1):
    print("PROCESSING DETECTION #", i)
    if(file_index[i] == 0):
        if(os.path.isfile(filename[i])): 
            tf = cv2.imread(filename[i])
            tf = cv2.rectangle(tf, min_pts[i], max_pts[i], (255, 0, 0), 2) 
            tf = cv2.putText(tf, "Name: "+name[i]+" Confidence: "+ str(100*conf[i])+"%", (int((min_pts[i][0] + max_pts[i][0])/2),int((min_pts[i][1] + max_pts[i][1])/2)), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2, cv2.LINE_AA)
            cv2.imwrite(filename[i][90:], tf)
        else:
            print("FILE NOT FOUND")

    else:
        if(os.path.isfile(filename[i][90:])): 
            tf = cv2.imread(filename[i][90:])
            tf = cv2.rectangle(tf, min_pts[i], max_pts[i], (255, 0, 0), 2) 
            tf = cv2.putText(tf, "Name: "+name[i]+" Confidence: "+ str(100*conf[i])+"%", (int((min_pts[i][0] + max_pts[i][0])/2),int((min_pts[i][1] + max_pts[i][1])/2)), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2, cv2.LINE_AA)
            cv2.imwrite(filename[i][90:], tf)
        else:
            print("FILE NOT FOUND")




#HERE IS HOW WE MAKE A BOUNDING BOX

#image = cv2.imread(filename[1]) 

#start_point = min_pts[1]
#end_point = max_pts[1]
  
# Blue color in BGR 
#color = (255, 0, 0) 
  
# Line thickness of 2 px 
#thickness = 2
  
# Using cv2.rectangle() method 
# Draw a rectangle with blue line borders of thickness of 2 px 
#image = cv2.rectangle(image, start_point, end_point, color, thickness) 
#cv2.imwrite('test2.jpg', image) 

#AND THE TEXT

# font
#font = cv2.FONT_HERSHEY_SIMPLEX
  
# org
#org = (50, 50)
  
# fontScale
#fontScale = 1
   
# Blue color in BGR
#color = (255, 0, 0)
  
# Line thickness of 2 px
#thickness = 2
   
# Using cv2.putText() method
#image = cv2.putText(image, 'OpenCV', org, font, fontScale, color, thickness, cv2.LINE_AA)