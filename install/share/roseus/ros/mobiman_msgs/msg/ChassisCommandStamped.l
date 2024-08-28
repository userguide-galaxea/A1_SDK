;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::ChassisCommandStamped)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'ChassisCommandStamped (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::CHASSISCOMMANDSTAMPED")
  (make-package "MOBIMAN_MSGS::CHASSISCOMMANDSTAMPED"))

(in-package "ROS")
;;//! \htmlinclude ChassisCommandStamped.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass mobiman_msgs::ChassisCommandStamped
  :super ros::object
  :slots (_header _command ))

(defmethod mobiman_msgs::ChassisCommandStamped
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:command __command) (instance mobiman_msgs::ChassisCommand :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _command __command)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:command
   (&rest __command)
   (if (keywordp (car __command))
       (send* _command __command)
     (progn
       (if __command (setq _command (car __command)))
       _command)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; mobiman_msgs/ChassisCommand _command
    (send _command :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; mobiman_msgs/ChassisCommand _command
       (send _command :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; mobiman_msgs/ChassisCommand _command
     (send _command :deserialize buf ptr-) (incf ptr- (send _command :serialization-length))
   ;;
   self)
  )

(setf (get mobiman_msgs::ChassisCommandStamped :md5sum-) "123c2e06ca5169bd3a46b31694b50130")
(setf (get mobiman_msgs::ChassisCommandStamped :datatype-) "mobiman_msgs/ChassisCommandStamped")
(setf (get mobiman_msgs::ChassisCommandStamped :definition-)
      "Header header
ChassisCommand command
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
MSG: mobiman_msgs/ChassisCommand
# for 4w4s vehicles, the order is [fl, fr, rl ,rr]
float32[] steer_angles
float32[] wheel_speed
")



(provide :mobiman_msgs/ChassisCommandStamped "123c2e06ca5169bd3a46b31694b50130")


