;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::ArmBasicCommand)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'ArmBasicCommand (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::ARMBASICCOMMAND")
  (make-package "MOBIMAN_MSGS::ARMBASICCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude ArmBasicCommand.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass mobiman_msgs::ArmBasicCommand
  :super ros::object
  :slots (_header _jpos _jspeed ))

(defmethod mobiman_msgs::ArmBasicCommand
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:jpos __jpos) (instance mobiman_msgs::JointPosition :init))
    ((:jspeed __jspeed) (instance mobiman_msgs::JointSpeed :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _jpos __jpos)
   (setq _jspeed __jspeed)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:jpos
   (&rest __jpos)
   (if (keywordp (car __jpos))
       (send* _jpos __jpos)
     (progn
       (if __jpos (setq _jpos (car __jpos)))
       _jpos)))
  (:jspeed
   (&rest __jspeed)
   (if (keywordp (car __jspeed))
       (send* _jspeed __jspeed)
     (progn
       (if __jspeed (setq _jspeed (car __jspeed)))
       _jspeed)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; mobiman_msgs/JointPosition _jpos
    (send _jpos :serialization-length)
    ;; mobiman_msgs/JointSpeed _jspeed
    (send _jspeed :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; mobiman_msgs/JointPosition _jpos
       (send _jpos :serialize s)
     ;; mobiman_msgs/JointSpeed _jspeed
       (send _jspeed :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; mobiman_msgs/JointPosition _jpos
     (send _jpos :deserialize buf ptr-) (incf ptr- (send _jpos :serialization-length))
   ;; mobiman_msgs/JointSpeed _jspeed
     (send _jspeed :deserialize buf ptr-) (incf ptr- (send _jspeed :serialization-length))
   ;;
   self)
  )

(setf (get mobiman_msgs::ArmBasicCommand :md5sum-) "fcfbc58fb13093c333eea9319796c877")
(setf (get mobiman_msgs::ArmBasicCommand :datatype-) "mobiman_msgs/ArmBasicCommand")
(setf (get mobiman_msgs::ArmBasicCommand :definition-)
      "Header header

JointPosition jpos
JointSpeed jspeed
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
MSG: mobiman_msgs/JointPosition
float32[] pos
================================================================================
MSG: mobiman_msgs/JointSpeed
float32[] speed
")



(provide :mobiman_msgs/ArmBasicCommand "fcfbc58fb13093c333eea9319796c877")


