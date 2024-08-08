;; Auto-generated. Do not edit!


(when (boundp 'signal_arm::status_stamped)
  (if (not (find-package "SIGNAL_ARM"))
    (make-package "SIGNAL_ARM"))
  (shadow 'status_stamped (find-package "SIGNAL_ARM")))
(unless (find-package "SIGNAL_ARM::STATUS_STAMPED")
  (make-package "SIGNAL_ARM::STATUS_STAMPED"))

(in-package "ROS")
;;//! \htmlinclude status_stamped.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass signal_arm::status_stamped
  :super ros::object
  :slots (_header _data ))

(defmethod signal_arm::status_stamped
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:data __data) (instance signal_arm::status :init))
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
    ;; signal_arm/status _data
    (send _data :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; signal_arm/status _data
       (send _data :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; signal_arm/status _data
     (send _data :deserialize buf ptr-) (incf ptr- (send _data :serialization-length))
   ;;
   self)
  )

(setf (get signal_arm::status_stamped :md5sum-) "6e3be6b3acaa4d25460958596a1f2bf0")
(setf (get signal_arm::status_stamped :datatype-) "signal_arm/status_stamped")
(setf (get signal_arm::status_stamped :definition-)
      "std_msgs/Header header
status data
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
MSG: signal_arm/status
string[] name
motor_error[] motor_errors
================================================================================
MSG: signal_arm/motor_error
uint32 error_code
string[] error_description
")



(provide :signal_arm/status_stamped "6e3be6b3acaa4d25460958596a1f2bf0")


