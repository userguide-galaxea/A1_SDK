;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::Mask)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'Mask (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::MASK")
  (make-package "MOBIMAN_MSGS::MASK"))

(in-package "ROS")
;;//! \htmlinclude Mask.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass mobiman_msgs::Mask
  :super ros::object
  :slots (_header _height _width _data _mask_types _instance_description ))

(defmethod mobiman_msgs::Mask
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:height __height) 0)
    ((:width __width) 0)
    ((:data __data) (make-array 0 :initial-element 0 :element-type :char))
    ((:mask_types __mask_types) (make-array 0 :initial-element 0 :element-type :char))
    ((:instance_description __instance_description) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _height (round __height))
   (setq _width (round __width))
   (setq _data __data)
   (setq _mask_types __mask_types)
   (setq _instance_description __instance_description)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:mask_types
   (&optional __mask_types)
   (if __mask_types (setq _mask_types __mask_types)) _mask_types)
  (:instance_description
   (&optional __instance_description)
   (if __instance_description (setq _instance_description __instance_description)) _instance_description)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint16 _height
    2
    ;; uint16 _width
    2
    ;; uint8[] _data
    (* 1    (length _data)) 4
    ;; uint8[] _mask_types
    (* 1    (length _mask_types)) 4
    ;; string[] _instance_description
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _instance_description)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint16 _height
       (write-word _height s)
     ;; uint16 _width
       (write-word _width s)
     ;; uint8[] _data
     (write-long (length _data) s)
     (princ _data s)
     ;; uint8[] _mask_types
     (write-long (length _mask_types) s)
     (princ _mask_types s)
     ;; string[] _instance_description
     (write-long (length _instance_description) s)
     (dolist (elem _instance_description)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint16 _height
     (setq _height (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _width
     (setq _width (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint8[] _data
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _data (make-array n :element-type :char))
     (replace _data buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _mask_types
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _mask_types (make-array n :element-type :char))
     (replace _mask_types buf :start2 ptr-) (incf ptr- n))
   ;; string[] _instance_description
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _instance_description (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _instance_description i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(setf (get mobiman_msgs::Mask :md5sum-) "a960000413df3e0030443cb5c9082a94")
(setf (get mobiman_msgs::Mask :datatype-) "mobiman_msgs/Mask")
(setf (get mobiman_msgs::Mask :definition-)
      "Header header
uint16 height
uint16 width
uint8[] data # size h * w, array of mask instance
uint8[] mask_types # size number of instance
string[] instance_description # size number of instance
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



(provide :mobiman_msgs/Mask "a960000413df3e0030443cb5c9082a94")


