;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::IKService)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'IKService (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::IKSERVICE")
  (make-package "MOBIMAN_MSGS::IKSERVICE"))
(unless (find-package "MOBIMAN_MSGS::IKSERVICEREQUEST")
  (make-package "MOBIMAN_MSGS::IKSERVICEREQUEST"))
(unless (find-package "MOBIMAN_MSGS::IKSERVICERESPONSE")
  (make-package "MOBIMAN_MSGS::IKSERVICERESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(if (not (find-package "SENSOR_MSGS"))
  (ros::roseus-add-msgs "sensor_msgs"))


(defclass mobiman_msgs::IKServiceRequest
  :super ros::object
  :slots (_pose ))

(defmethod mobiman_msgs::IKServiceRequest
  (:init
   (&key
    ((:pose __pose) (instance geometry_msgs::Pose :init))
    )
   (send-super :init)
   (setq _pose __pose)
   self)
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Pose _pose
    (send _pose :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Pose _pose
       (send _pose :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Pose _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
   ;;
   self)
  )

(defclass mobiman_msgs::IKServiceResponse
  :super ros::object
  :slots (_joint_states ))

(defmethod mobiman_msgs::IKServiceResponse
  (:init
   (&key
    ((:joint_states __joint_states) (instance sensor_msgs::JointState :init))
    )
   (send-super :init)
   (setq _joint_states __joint_states)
   self)
  (:joint_states
   (&rest __joint_states)
   (if (keywordp (car __joint_states))
       (send* _joint_states __joint_states)
     (progn
       (if __joint_states (setq _joint_states (car __joint_states)))
       _joint_states)))
  (:serialization-length
   ()
   (+
    ;; sensor_msgs/JointState _joint_states
    (send _joint_states :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; sensor_msgs/JointState _joint_states
       (send _joint_states :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; sensor_msgs/JointState _joint_states
     (send _joint_states :deserialize buf ptr-) (incf ptr- (send _joint_states :serialization-length))
   ;;
   self)
  )

(defclass mobiman_msgs::IKService
  :super ros::object
  :slots ())

(setf (get mobiman_msgs::IKService :md5sum-) "32fb633238027c7a4108018cf3944fa3")
(setf (get mobiman_msgs::IKService :datatype-) "mobiman_msgs/IKService")
(setf (get mobiman_msgs::IKService :request) mobiman_msgs::IKServiceRequest)
(setf (get mobiman_msgs::IKService :response) mobiman_msgs::IKServiceResponse)

(defmethod mobiman_msgs::IKServiceRequest
  (:response () (instance mobiman_msgs::IKServiceResponse :init)))

(setf (get mobiman_msgs::IKServiceRequest :md5sum-) "32fb633238027c7a4108018cf3944fa3")
(setf (get mobiman_msgs::IKServiceRequest :datatype-) "mobiman_msgs/IKServiceRequest")
(setf (get mobiman_msgs::IKServiceRequest :definition-)
      "geometry_msgs/Pose pose

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
sensor_msgs/JointState joint_states

================================================================================
MSG: sensor_msgs/JointState
# This is a message that holds data to describe the state of a set of torque controlled joints. 
#
# The state of each joint (revolute or prismatic) is defined by:
#  * the position of the joint (rad or m),
#  * the velocity of the joint (rad/s or m/s) and 
#  * the effort that is applied in the joint (Nm or N).
#
# Each joint is uniquely identified by its name
# The header specifies the time at which the joint states were recorded. All the joint states
# in one message have to be recorded at the same time.
#
# This message consists of a multiple arrays, one for each part of the joint state. 
# The goal is to make each of the fields optional. When e.g. your joints have no
# effort associated with them, you can leave the effort array empty. 
#
# All arrays in this message should have the same size, or be empty.
# This is the only way to uniquely associate the joint name with the correct
# states.


Header header

string[] name
float64[] position
float64[] velocity
float64[] effort

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
")

(setf (get mobiman_msgs::IKServiceResponse :md5sum-) "32fb633238027c7a4108018cf3944fa3")
(setf (get mobiman_msgs::IKServiceResponse :datatype-) "mobiman_msgs/IKServiceResponse")
(setf (get mobiman_msgs::IKServiceResponse :definition-)
      "geometry_msgs/Pose pose

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
sensor_msgs/JointState joint_states

================================================================================
MSG: sensor_msgs/JointState
# This is a message that holds data to describe the state of a set of torque controlled joints. 
#
# The state of each joint (revolute or prismatic) is defined by:
#  * the position of the joint (rad or m),
#  * the velocity of the joint (rad/s or m/s) and 
#  * the effort that is applied in the joint (Nm or N).
#
# Each joint is uniquely identified by its name
# The header specifies the time at which the joint states were recorded. All the joint states
# in one message have to be recorded at the same time.
#
# This message consists of a multiple arrays, one for each part of the joint state. 
# The goal is to make each of the fields optional. When e.g. your joints have no
# effort associated with them, you can leave the effort array empty. 
#
# All arrays in this message should have the same size, or be empty.
# This is the only way to uniquely associate the joint name with the correct
# states.


Header header

string[] name
float64[] position
float64[] velocity
float64[] effort

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
")



(provide :mobiman_msgs/IKService "32fb633238027c7a4108018cf3944fa3")


