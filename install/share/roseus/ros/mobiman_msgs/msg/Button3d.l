;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::Button3d)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'Button3d (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::BUTTON3D")
  (make-package "MOBIMAN_MSGS::BUTTON3D"))

(in-package "ROS")
;;//! \htmlinclude Button3d.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass mobiman_msgs::Button3d
  :super ros::object
  :slots (_pose _button_semantics ))

(defmethod mobiman_msgs::Button3d
  (:init
   (&key
    ((:pose __pose) (instance geometry_msgs::Pose :init))
    ((:button_semantics __button_semantics) (instance mobiman_msgs::ButtonSemantics :init))
    )
   (send-super :init)
   (setq _pose __pose)
   (setq _button_semantics __button_semantics)
   self)
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
  (:button_semantics
   (&rest __button_semantics)
   (if (keywordp (car __button_semantics))
       (send* _button_semantics __button_semantics)
     (progn
       (if __button_semantics (setq _button_semantics (car __button_semantics)))
       _button_semantics)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Pose _pose
    (send _pose :serialization-length)
    ;; mobiman_msgs/ButtonSemantics _button_semantics
    (send _button_semantics :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Pose _pose
       (send _pose :serialize s)
     ;; mobiman_msgs/ButtonSemantics _button_semantics
       (send _button_semantics :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Pose _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
   ;; mobiman_msgs/ButtonSemantics _button_semantics
     (send _button_semantics :deserialize buf ptr-) (incf ptr- (send _button_semantics :serialization-length))
   ;;
   self)
  )

(setf (get mobiman_msgs::Button3d :md5sum-) "4cebf7d3838aade9d4cfafbd7ef66592")
(setf (get mobiman_msgs::Button3d :datatype-) "mobiman_msgs/Button3d")
(setf (get mobiman_msgs::Button3d :definition-)
      "geometry_msgs/Pose pose
ButtonSemantics button_semantics
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: mobiman_msgs/ButtonSemantics
string name
uint8 button_status

")



(provide :mobiman_msgs/Button3d "4cebf7d3838aade9d4cfafbd7ef66592")


