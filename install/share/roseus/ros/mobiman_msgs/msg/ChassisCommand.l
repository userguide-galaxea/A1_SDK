;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::ChassisCommand)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'ChassisCommand (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::CHASSISCOMMAND")
  (make-package "MOBIMAN_MSGS::CHASSISCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude ChassisCommand.msg.html


(defclass mobiman_msgs::ChassisCommand
  :super ros::object
  :slots (_steer_angles _wheel_speed ))

(defmethod mobiman_msgs::ChassisCommand
  (:init
   (&key
    ((:steer_angles __steer_angles) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:wheel_speed __wheel_speed) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _steer_angles __steer_angles)
   (setq _wheel_speed __wheel_speed)
   self)
  (:steer_angles
   (&optional __steer_angles)
   (if __steer_angles (setq _steer_angles __steer_angles)) _steer_angles)
  (:wheel_speed
   (&optional __wheel_speed)
   (if __wheel_speed (setq _wheel_speed __wheel_speed)) _wheel_speed)
  (:serialization-length
   ()
   (+
    ;; float32[] _steer_angles
    (* 4    (length _steer_angles)) 4
    ;; float32[] _wheel_speed
    (* 4    (length _wheel_speed)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _steer_angles
     (write-long (length _steer_angles) s)
     (dotimes (i (length _steer_angles))
       (sys::poke (elt _steer_angles i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _wheel_speed
     (write-long (length _wheel_speed) s)
     (dotimes (i (length _wheel_speed))
       (sys::poke (elt _wheel_speed i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _steer_angles
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _steer_angles (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _steer_angles i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _wheel_speed
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _wheel_speed (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _wheel_speed i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get mobiman_msgs::ChassisCommand :md5sum-) "913eccfc8322dbc90f30c89655e26445")
(setf (get mobiman_msgs::ChassisCommand :datatype-) "mobiman_msgs/ChassisCommand")
(setf (get mobiman_msgs::ChassisCommand :definition-)
      "# for 4w4s vehicles, the order is [fl, fr, rl ,rr]
float32[] steer_angles
float32[] wheel_speed
")



(provide :mobiman_msgs/ChassisCommand "913eccfc8322dbc90f30c89655e26445")


