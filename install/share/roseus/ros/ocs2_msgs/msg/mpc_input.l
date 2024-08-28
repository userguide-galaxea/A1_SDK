;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::mpc_input)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'mpc_input (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::MPC_INPUT")
  (make-package "OCS2_MSGS::MPC_INPUT"))

(in-package "ROS")
;;//! \htmlinclude mpc_input.msg.html


(defclass ocs2_msgs::mpc_input
  :super ros::object
  :slots (_value ))

(defmethod ocs2_msgs::mpc_input
  (:init
   (&key
    ((:value __value) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _value __value)
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; float32[] _value
    (* 4    (length _value)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _value
     (write-long (length _value) s)
     (dotimes (i (length _value))
       (sys::poke (elt _value i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
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

(setf (get ocs2_msgs::mpc_input :md5sum-) "1becc0cb8362a822e3753aa6cf42cf70")
(setf (get ocs2_msgs::mpc_input :datatype-) "ocs2_msgs/mpc_input")
(setf (get ocs2_msgs::mpc_input :definition-)
      "# MPC internal model input vector 

float32[] value
")



(provide :ocs2_msgs/mpc_input "1becc0cb8362a822e3753aa6cf42cf70")


