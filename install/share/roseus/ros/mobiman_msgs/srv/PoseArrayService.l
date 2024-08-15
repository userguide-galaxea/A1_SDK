;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::PoseArrayService)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'PoseArrayService (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::POSEARRAYSERVICE")
  (make-package "MOBIMAN_MSGS::POSEARRAYSERVICE"))
(unless (find-package "MOBIMAN_MSGS::POSEARRAYSERVICEREQUEST")
  (make-package "MOBIMAN_MSGS::POSEARRAYSERVICEREQUEST"))
(unless (find-package "MOBIMAN_MSGS::POSEARRAYSERVICERESPONSE")
  (make-package "MOBIMAN_MSGS::POSEARRAYSERVICERESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass mobiman_msgs::PoseArrayServiceRequest
  :super ros::object
  :slots (_poses ))

(defmethod mobiman_msgs::PoseArrayServiceRequest
  (:init
   (&key
    ((:poses __poses) (instance geometry_msgs::PoseArray :init))
    )
   (send-super :init)
   (setq _poses __poses)
   self)
  (:poses
   (&rest __poses)
   (if (keywordp (car __poses))
       (send* _poses __poses)
     (progn
       (if __poses (setq _poses (car __poses)))
       _poses)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PoseArray _poses
    (send _poses :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PoseArray _poses
       (send _poses :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PoseArray _poses
     (send _poses :deserialize buf ptr-) (incf ptr- (send _poses :serialization-length))
   ;;
   self)
  )

(defclass mobiman_msgs::PoseArrayServiceResponse
  :super ros::object
  :slots (_success ))

(defmethod mobiman_msgs::PoseArrayServiceResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass mobiman_msgs::PoseArrayService
  :super ros::object
  :slots ())

(setf (get mobiman_msgs::PoseArrayService :md5sum-) "248320f22709534d9c1f1e28f3b6fa63")
(setf (get mobiman_msgs::PoseArrayService :datatype-) "mobiman_msgs/PoseArrayService")
(setf (get mobiman_msgs::PoseArrayService :request) mobiman_msgs::PoseArrayServiceRequest)
(setf (get mobiman_msgs::PoseArrayService :response) mobiman_msgs::PoseArrayServiceResponse)

(defmethod mobiman_msgs::PoseArrayServiceRequest
  (:response () (instance mobiman_msgs::PoseArrayServiceResponse :init)))

(setf (get mobiman_msgs::PoseArrayServiceRequest :md5sum-) "248320f22709534d9c1f1e28f3b6fa63")
(setf (get mobiman_msgs::PoseArrayServiceRequest :datatype-) "mobiman_msgs/PoseArrayServiceRequest")
(setf (get mobiman_msgs::PoseArrayServiceRequest :definition-)
      "geometry_msgs/PoseArray poses

================================================================================
MSG: geometry_msgs/PoseArray
# An array of poses with a header for global reference.

Header header

Pose[] poses

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

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
---
bool success


")

(setf (get mobiman_msgs::PoseArrayServiceResponse :md5sum-) "248320f22709534d9c1f1e28f3b6fa63")
(setf (get mobiman_msgs::PoseArrayServiceResponse :datatype-) "mobiman_msgs/PoseArrayServiceResponse")
(setf (get mobiman_msgs::PoseArrayServiceResponse :definition-)
      "geometry_msgs/PoseArray poses

================================================================================
MSG: geometry_msgs/PoseArray
# An array of poses with a header for global reference.

Header header

Pose[] poses

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

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
---
bool success


")



(provide :mobiman_msgs/PoseArrayService "248320f22709534d9c1f1e28f3b6fa63")


