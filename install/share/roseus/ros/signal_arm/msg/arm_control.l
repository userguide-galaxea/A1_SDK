;; Auto-generated. Do not edit!


(when (boundp 'signal_arm::arm_control)
  (if (not (find-package "SIGNAL_ARM"))
    (make-package "SIGNAL_ARM"))
  (shadow 'arm_control (find-package "SIGNAL_ARM")))
(unless (find-package "SIGNAL_ARM::ARM_CONTROL")
  (make-package "SIGNAL_ARM::ARM_CONTROL"))

(in-package "ROS")
;;//! \htmlinclude arm_control.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass signal_arm::arm_control
  :super ros::object
  :slots (_header _p_des _v_des _kp _kd _t_ff _mode ))

(defmethod signal_arm::arm_control
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:p_des __p_des) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:v_des __v_des) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:kp __kp) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:kd __kd) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:t_ff __t_ff) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:mode __mode) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _p_des __p_des)
   (setq _v_des __v_des)
   (setq _kp __kp)
   (setq _kd __kd)
   (setq _t_ff __t_ff)
   (setq _mode (round __mode))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:p_des
   (&optional __p_des)
   (if __p_des (setq _p_des __p_des)) _p_des)
  (:v_des
   (&optional __v_des)
   (if __v_des (setq _v_des __v_des)) _v_des)
  (:kp
   (&optional __kp)
   (if __kp (setq _kp __kp)) _kp)
  (:kd
   (&optional __kd)
   (if __kd (setq _kd __kd)) _kd)
  (:t_ff
   (&optional __t_ff)
   (if __t_ff (setq _t_ff __t_ff)) _t_ff)
  (:mode
   (&optional __mode)
   (if __mode (setq _mode __mode)) _mode)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32[] _p_des
    (* 4    (length _p_des)) 4
    ;; float32[] _v_des
    (* 4    (length _v_des)) 4
    ;; float32[] _kp
    (* 4    (length _kp)) 4
    ;; float32[] _kd
    (* 4    (length _kd)) 4
    ;; float32[] _t_ff
    (* 4    (length _t_ff)) 4
    ;; uint8 _mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32[] _p_des
     (write-long (length _p_des) s)
     (dotimes (i (length _p_des))
       (sys::poke (elt _p_des i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _v_des
     (write-long (length _v_des) s)
     (dotimes (i (length _v_des))
       (sys::poke (elt _v_des i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _kp
     (write-long (length _kp) s)
     (dotimes (i (length _kp))
       (sys::poke (elt _kp i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _kd
     (write-long (length _kd) s)
     (dotimes (i (length _kd))
       (sys::poke (elt _kd i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _t_ff
     (write-long (length _t_ff) s)
     (dotimes (i (length _t_ff))
       (sys::poke (elt _t_ff i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; uint8 _mode
       (write-byte _mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32[] _p_des
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _p_des (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _p_des i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _v_des
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _v_des (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _v_des i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _kp
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _kp (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _kp i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _kd
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _kd (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _kd i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _t_ff
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _t_ff (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _t_ff i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; uint8 _mode
     (setq _mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get signal_arm::arm_control :md5sum-) "19f36ff29f95cf7a6da164ce69c0a087")
(setf (get signal_arm::arm_control :datatype-) "signal_arm/arm_control")
(setf (get signal_arm::arm_control :definition-)
      "std_msgs/Header header

float32[] p_des
float32[] v_des
float32[] kp
float32[] kd
float32[] t_ff
uint8 mode
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



(provide :signal_arm/arm_control "19f36ff29f95cf7a6da164ce69c0a087")


