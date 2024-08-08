;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::lagrangian_metrics)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'lagrangian_metrics (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::LAGRANGIAN_METRICS")
  (make-package "OCS2_MSGS::LAGRANGIAN_METRICS"))

(in-package "ROS")
;;//! \htmlinclude lagrangian_metrics.msg.html


(defclass ocs2_msgs::lagrangian_metrics
  :super ros::object
  :slots (_time _penalty _constraint ))

(defmethod ocs2_msgs::lagrangian_metrics
  (:init
   (&key
    ((:time __time) 0.0)
    ((:penalty __penalty) 0.0)
    ((:constraint __constraint) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _time (float __time))
   (setq _penalty (float __penalty))
   (setq _constraint __constraint)
   self)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:penalty
   (&optional __penalty)
   (if __penalty (setq _penalty __penalty)) _penalty)
  (:constraint
   (&optional __constraint)
   (if __constraint (setq _constraint __constraint)) _constraint)
  (:serialization-length
   ()
   (+
    ;; float32 _time
    4
    ;; float32 _penalty
    4
    ;; float32[] _constraint
    (* 4    (length _constraint)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _time
       (sys::poke _time (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _penalty
       (sys::poke _penalty (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32[] _constraint
     (write-long (length _constraint) s)
     (dotimes (i (length _constraint))
       (sys::poke (elt _constraint i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _time
     (setq _time (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _penalty
     (setq _penalty (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32[] _constraint
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _constraint (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _constraint i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get ocs2_msgs::lagrangian_metrics :md5sum-) "1734f3665afb7d38e9db59de18711863")
(setf (get ocs2_msgs::lagrangian_metrics :datatype-) "ocs2_msgs/lagrangian_metrics")
(setf (get ocs2_msgs::lagrangian_metrics :definition-)
      "# MPC Lagrangian metrics

float32   time
float32   penalty
float32[] constraint
")



(provide :ocs2_msgs/lagrangian_metrics "1734f3665afb7d38e9db59de18711863")


