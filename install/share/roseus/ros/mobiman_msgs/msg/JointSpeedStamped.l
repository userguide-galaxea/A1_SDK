;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::JointSpeedStamped)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'JointSpeedStamped (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::JOINTSPEEDSTAMPED")
  (make-package "MOBIMAN_MSGS::JOINTSPEEDSTAMPED"))

(in-package "ROS")
;;//! \htmlinclude JointSpeedStamped.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass mobiman_msgs::JointSpeedStamped
  :super ros::object
  :slots (_header _speed ))

(defmethod mobiman_msgs::JointSpeedStamped
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:speed __speed) (instance mobiman_msgs::JointSpeed :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _speed __speed)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:speed
   (&rest __speed)
   (if (keywordp (car __speed))
       (send* _speed __speed)
     (progn
       (if __speed (setq _speed (car __speed)))
       _speed)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; mobiman_msgs/JointSpeed _speed
    (send _speed :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; mobiman_msgs/JointSpeed _speed
       (send _speed :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; mobiman_msgs/JointSpeed _speed
     (send _speed :deserialize buf ptr-) (incf ptr- (send _speed :serialization-length))
   ;;
   self)
  )

(setf (get mobiman_msgs::JointSpeedStamped :md5sum-) "1627a98ed9651b259c8deabb0e0965fd")
(setf (get mobiman_msgs::JointSpeedStamped :datatype-) "mobiman_msgs/JointSpeedStamped")
(setf (get mobiman_msgs::JointSpeedStamped :definition-)
      "Header header
JointSpeed speed
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
MSG: mobiman_msgs/JointSpeed
float32[] speed
")



(provide :mobiman_msgs/JointSpeedStamped "1627a98ed9651b259c8deabb0e0965fd")


