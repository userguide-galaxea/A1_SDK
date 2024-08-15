;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::multiplier)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'multiplier (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::MULTIPLIER")
  (make-package "OCS2_MSGS::MULTIPLIER"))

(in-package "ROS")
;;//! \htmlinclude multiplier.msg.html


(defclass ocs2_msgs::multiplier
  :super ros::object
  :slots (_time _penalty _lagrangian ))

(defmethod ocs2_msgs::multiplier
  (:init
   (&key
    ((:time __time) 0.0)
    ((:penalty __penalty) 0.0)
    ((:lagrangian __lagrangian) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _time (float __time))
   (setq _penalty (float __penalty))
   (setq _lagrangian __lagrangian)
   self)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:penalty
   (&optional __penalty)
   (if __penalty (setq _penalty __penalty)) _penalty)
  (:lagrangian
   (&optional __lagrangian)
   (if __lagrangian (setq _lagrangian __lagrangian)) _lagrangian)
  (:serialization-length
   ()
   (+
    ;; float32 _time
    4
    ;; float32 _penalty
    4
    ;; float32[] _lagrangian
    (* 4    (length _lagrangian)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _time
       (sys::poke _time (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _penalty
       (sys::poke _penalty (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32[] _lagrangian
     (write-long (length _lagrangian) s)
     (dotimes (i (length _lagrangian))
       (sys::poke (elt _lagrangian i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _time
     (setq _time (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _penalty
     (setq _penalty (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32[] _lagrangian
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _lagrangian (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _lagrangian i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get ocs2_msgs::multiplier :md5sum-) "8284394e15f2038e54705abd91aee001")
(setf (get ocs2_msgs::multiplier :datatype-) "ocs2_msgs/multiplier")
(setf (get ocs2_msgs::multiplier :definition-)
      "# MPC multiplier

float32   time
float32   penalty
float32[] lagrangian
")



(provide :ocs2_msgs/multiplier "8284394e15f2038e54705abd91aee001")


