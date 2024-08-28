;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::JointPositionStamped)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'JointPositionStamped (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::JOINTPOSITIONSTAMPED")
  (make-package "MOBIMAN_MSGS::JOINTPOSITIONSTAMPED"))

(in-package "ROS")
;;//! \htmlinclude JointPositionStamped.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass mobiman_msgs::JointPositionStamped
  :super ros::object
  :slots (_header _pos ))

(defmethod mobiman_msgs::JointPositionStamped
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:pos __pos) (instance mobiman_msgs::JointPosition :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _pos __pos)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:pos
   (&rest __pos)
   (if (keywordp (car __pos))
       (send* _pos __pos)
     (progn
       (if __pos (setq _pos (car __pos)))
       _pos)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; mobiman_msgs/JointPosition _pos
    (send _pos :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; mobiman_msgs/JointPosition _pos
       (send _pos :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; mobiman_msgs/JointPosition _pos
     (send _pos :deserialize buf ptr-) (incf ptr- (send _pos :serialization-length))
   ;;
   self)
  )

(setf (get mobiman_msgs::JointPositionStamped :md5sum-) "a1eb4f699de878b57462959a77fb2410")
(setf (get mobiman_msgs::JointPositionStamped :datatype-) "mobiman_msgs/JointPositionStamped")
(setf (get mobiman_msgs::JointPositionStamped :definition-)
      "Header header
JointPosition pos
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
")



(provide :mobiman_msgs/JointPositionStamped "a1eb4f699de878b57462959a77fb2410")


