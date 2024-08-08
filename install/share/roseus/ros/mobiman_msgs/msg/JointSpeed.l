;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::JointSpeed)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'JointSpeed (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::JOINTSPEED")
  (make-package "MOBIMAN_MSGS::JOINTSPEED"))

(in-package "ROS")
;;//! \htmlinclude JointSpeed.msg.html


(defclass mobiman_msgs::JointSpeed
  :super ros::object
  :slots (_speed ))

(defmethod mobiman_msgs::JointSpeed
  (:init
   (&key
    ((:speed __speed) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _speed __speed)
   self)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:serialization-length
   ()
   (+
    ;; float32[] _speed
    (* 4    (length _speed)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _speed
     (write-long (length _speed) s)
     (dotimes (i (length _speed))
       (sys::poke (elt _speed i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _speed
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _speed (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _speed i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get mobiman_msgs::JointSpeed :md5sum-) "c2d600321673904df95b6b086e7cca22")
(setf (get mobiman_msgs::JointSpeed :datatype-) "mobiman_msgs/JointSpeed")
(setf (get mobiman_msgs::JointSpeed :definition-)
      "float32[] speed
")



(provide :mobiman_msgs/JointSpeed "c2d600321673904df95b6b086e7cca22")


