;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::constraint)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'constraint (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::CONSTRAINT")
  (make-package "OCS2_MSGS::CONSTRAINT"))

(in-package "ROS")
;;//! \htmlinclude constraint.msg.html


(defclass ocs2_msgs::constraint
  :super ros::object
  :slots (_time _value ))

(defmethod ocs2_msgs::constraint
  (:init
   (&key
    ((:time __time) 0.0)
    ((:value __value) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _time (float __time))
   (setq _value __value)
   self)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; float32 _time
    4
    ;; float32[] _value
    (* 4    (length _value)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _time
       (sys::poke _time (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32[] _value
     (write-long (length _value) s)
     (dotimes (i (length _value))
       (sys::poke (elt _value i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _time
     (setq _time (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32[] _value
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _value (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _value i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get ocs2_msgs::constraint :md5sum-) "dbeb4e9009e109d77fd87752ca8b68c4")
(setf (get ocs2_msgs::constraint :datatype-) "ocs2_msgs/constraint")
(setf (get ocs2_msgs::constraint :definition-)
      "# MPC constraint

float32   time
float32[] value
")



(provide :ocs2_msgs/constraint "dbeb4e9009e109d77fd87752ca8b68c4")


