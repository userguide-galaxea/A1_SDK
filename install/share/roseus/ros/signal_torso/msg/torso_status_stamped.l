;; Auto-generated. Do not edit!


(when (boundp 'signal_torso::torso_status_stamped)
  (if (not (find-package "SIGNAL_TORSO"))
    (make-package "SIGNAL_TORSO"))
  (shadow 'torso_status_stamped (find-package "SIGNAL_TORSO")))
(unless (find-package "SIGNAL_TORSO::TORSO_STATUS_STAMPED")
  (make-package "SIGNAL_TORSO::TORSO_STATUS_STAMPED"))

(in-package "ROS")
;;//! \htmlinclude torso_status_stamped.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass signal_torso::torso_status_stamped
  :super ros::object
  :slots (_header _status ))

(defmethod signal_torso::torso_status_stamped
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:status __status) (instance signal_torso::torso_status :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _status __status)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:status
   (&rest __status)
   (if (keywordp (car __status))
       (send* _status __status)
     (progn
       (if __status (setq _status (car __status)))
       _status)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; signal_torso/torso_status _status
    (send _status :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; signal_torso/torso_status _status
       (send _status :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; signal_torso/torso_status _status
     (send _status :deserialize buf ptr-) (incf ptr- (send _status :serialization-length))
   ;;
   self)
  )

(setf (get signal_torso::torso_status_stamped :md5sum-) "0131c1b125296bd68a121c0755f75986")
(setf (get signal_torso::torso_status_stamped :datatype-) "signal_torso/torso_status_stamped")
(setf (get signal_torso::torso_status_stamped :definition-)
      "std_msgs/Header header
torso_status status
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
MSG: signal_torso/torso_status
string[] name
uint8[] motor_temperature
uint8[] braking_state
uint16[] motor_voltage
uint16[] error_code
")



(provide :signal_torso/torso_status_stamped "0131c1b125296bd68a121c0755f75986")


