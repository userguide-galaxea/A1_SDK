;; Auto-generated. Do not edit!


(when (boundp 'signal_chassis::DrivetrainStamped_r1)
  (if (not (find-package "SIGNAL_CHASSIS"))
    (make-package "SIGNAL_CHASSIS"))
  (shadow 'DrivetrainStamped_r1 (find-package "SIGNAL_CHASSIS")))
(unless (find-package "SIGNAL_CHASSIS::DRIVETRAINSTAMPED_R1")
  (make-package "SIGNAL_CHASSIS::DRIVETRAINSTAMPED_R1"))

(in-package "ROS")
;;//! \htmlinclude DrivetrainStamped_r1.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass signal_chassis::DrivetrainStamped_r1
  :super ros::object
  :slots (_header _data ))

(defmethod signal_chassis::DrivetrainStamped_r1
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:data __data) (instance signal_chassis::Drivetrain_r1 :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _data __data)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:data
   (&rest __data)
   (if (keywordp (car __data))
       (send* _data __data)
     (progn
       (if __data (setq _data (car __data)))
       _data)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; signal_chassis/Drivetrain_r1 _data
    (send _data :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; signal_chassis/Drivetrain_r1 _data
       (send _data :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; signal_chassis/Drivetrain_r1 _data
     (send _data :deserialize buf ptr-) (incf ptr- (send _data :serialization-length))
   ;;
   self)
  )

(setf (get signal_chassis::DrivetrainStamped_r1 :md5sum-) "b20aade53af85c908f293bec189beeed")
(setf (get signal_chassis::DrivetrainStamped_r1 :datatype-) "signal_chassis/DrivetrainStamped_r1")
(setf (get signal_chassis::DrivetrainStamped_r1 :definition-)
      "std_msgs/Header header
Drivetrain_r1 data
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
MSG: signal_chassis/Drivetrain_r1
float32 steer_angle_front_left
float32 steer_angle_front_right
float32 steer_angle_rear
float32 drive_speed_front_left
float32 drive_speed_front_right
float32 drive_speed_rear
float32 drive_angular_speed_front_left
float32 drive_angular_speed_front_right
float32 drive_angular_speed_rear
")



(provide :signal_chassis/DrivetrainStamped_r1 "b20aade53af85c908f293bec189beeed")


