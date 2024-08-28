;; Auto-generated. Do not edit!


(when (boundp 'signal_arm::gripper_joint_command)
  (if (not (find-package "SIGNAL_ARM"))
    (make-package "SIGNAL_ARM"))
  (shadow 'gripper_joint_command (find-package "SIGNAL_ARM")))
(unless (find-package "SIGNAL_ARM::GRIPPER_JOINT_COMMAND")
  (make-package "SIGNAL_ARM::GRIPPER_JOINT_COMMAND"))

(in-package "ROS")
;;//! \htmlinclude gripper_joint_command.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass signal_arm::gripper_joint_command
  :super ros::object
  :slots (_header _gripper_force ))

(defmethod signal_arm::gripper_joint_command
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:gripper_force __gripper_force) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _gripper_force (float __gripper_force))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:gripper_force
   (&optional __gripper_force)
   (if __gripper_force (setq _gripper_force __gripper_force)) _gripper_force)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _gripper_force
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _gripper_force
       (sys::poke _gripper_force (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _gripper_force
     (setq _gripper_force (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get signal_arm::gripper_joint_command :md5sum-) "19416ab4f14f2a0774e2bcefcc994034")
(setf (get signal_arm::gripper_joint_command :datatype-) "signal_arm/gripper_joint_command")
(setf (get signal_arm::gripper_joint_command :definition-)
      "std_msgs/Header header

float32 gripper_force
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



(provide :signal_arm/gripper_joint_command "19416ab4f14f2a0774e2bcefcc994034")


