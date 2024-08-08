;; Auto-generated. Do not edit!


(when (boundp 'signal_chassis::Drivetrain_r1)
  (if (not (find-package "SIGNAL_CHASSIS"))
    (make-package "SIGNAL_CHASSIS"))
  (shadow 'Drivetrain_r1 (find-package "SIGNAL_CHASSIS")))
(unless (find-package "SIGNAL_CHASSIS::DRIVETRAIN_R1")
  (make-package "SIGNAL_CHASSIS::DRIVETRAIN_R1"))

(in-package "ROS")
;;//! \htmlinclude Drivetrain_r1.msg.html


(defclass signal_chassis::Drivetrain_r1
  :super ros::object
  :slots (_steer_angle_front_left _steer_angle_front_right _steer_angle_rear _drive_speed_front_left _drive_speed_front_right _drive_speed_rear _drive_angular_speed_front_left _drive_angular_speed_front_right _drive_angular_speed_rear ))

(defmethod signal_chassis::Drivetrain_r1
  (:init
   (&key
    ((:steer_angle_front_left __steer_angle_front_left) 0.0)
    ((:steer_angle_front_right __steer_angle_front_right) 0.0)
    ((:steer_angle_rear __steer_angle_rear) 0.0)
    ((:drive_speed_front_left __drive_speed_front_left) 0.0)
    ((:drive_speed_front_right __drive_speed_front_right) 0.0)
    ((:drive_speed_rear __drive_speed_rear) 0.0)
    ((:drive_angular_speed_front_left __drive_angular_speed_front_left) 0.0)
    ((:drive_angular_speed_front_right __drive_angular_speed_front_right) 0.0)
    ((:drive_angular_speed_rear __drive_angular_speed_rear) 0.0)
    )
   (send-super :init)
   (setq _steer_angle_front_left (float __steer_angle_front_left))
   (setq _steer_angle_front_right (float __steer_angle_front_right))
   (setq _steer_angle_rear (float __steer_angle_rear))
   (setq _drive_speed_front_left (float __drive_speed_front_left))
   (setq _drive_speed_front_right (float __drive_speed_front_right))
   (setq _drive_speed_rear (float __drive_speed_rear))
   (setq _drive_angular_speed_front_left (float __drive_angular_speed_front_left))
   (setq _drive_angular_speed_front_right (float __drive_angular_speed_front_right))
   (setq _drive_angular_speed_rear (float __drive_angular_speed_rear))
   self)
  (:steer_angle_front_left
   (&optional __steer_angle_front_left)
   (if __steer_angle_front_left (setq _steer_angle_front_left __steer_angle_front_left)) _steer_angle_front_left)
  (:steer_angle_front_right
   (&optional __steer_angle_front_right)
   (if __steer_angle_front_right (setq _steer_angle_front_right __steer_angle_front_right)) _steer_angle_front_right)
  (:steer_angle_rear
   (&optional __steer_angle_rear)
   (if __steer_angle_rear (setq _steer_angle_rear __steer_angle_rear)) _steer_angle_rear)
  (:drive_speed_front_left
   (&optional __drive_speed_front_left)
   (if __drive_speed_front_left (setq _drive_speed_front_left __drive_speed_front_left)) _drive_speed_front_left)
  (:drive_speed_front_right
   (&optional __drive_speed_front_right)
   (if __drive_speed_front_right (setq _drive_speed_front_right __drive_speed_front_right)) _drive_speed_front_right)
  (:drive_speed_rear
   (&optional __drive_speed_rear)
   (if __drive_speed_rear (setq _drive_speed_rear __drive_speed_rear)) _drive_speed_rear)
  (:drive_angular_speed_front_left
   (&optional __drive_angular_speed_front_left)
   (if __drive_angular_speed_front_left (setq _drive_angular_speed_front_left __drive_angular_speed_front_left)) _drive_angular_speed_front_left)
  (:drive_angular_speed_front_right
   (&optional __drive_angular_speed_front_right)
   (if __drive_angular_speed_front_right (setq _drive_angular_speed_front_right __drive_angular_speed_front_right)) _drive_angular_speed_front_right)
  (:drive_angular_speed_rear
   (&optional __drive_angular_speed_rear)
   (if __drive_angular_speed_rear (setq _drive_angular_speed_rear __drive_angular_speed_rear)) _drive_angular_speed_rear)
  (:serialization-length
   ()
   (+
    ;; float32 _steer_angle_front_left
    4
    ;; float32 _steer_angle_front_right
    4
    ;; float32 _steer_angle_rear
    4
    ;; float32 _drive_speed_front_left
    4
    ;; float32 _drive_speed_front_right
    4
    ;; float32 _drive_speed_rear
    4
    ;; float32 _drive_angular_speed_front_left
    4
    ;; float32 _drive_angular_speed_front_right
    4
    ;; float32 _drive_angular_speed_rear
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _steer_angle_front_left
       (sys::poke _steer_angle_front_left (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steer_angle_front_right
       (sys::poke _steer_angle_front_right (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steer_angle_rear
       (sys::poke _steer_angle_rear (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_speed_front_left
       (sys::poke _drive_speed_front_left (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_speed_front_right
       (sys::poke _drive_speed_front_right (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_speed_rear
       (sys::poke _drive_speed_rear (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_angular_speed_front_left
       (sys::poke _drive_angular_speed_front_left (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_angular_speed_front_right
       (sys::poke _drive_angular_speed_front_right (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_angular_speed_rear
       (sys::poke _drive_angular_speed_rear (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _steer_angle_front_left
     (setq _steer_angle_front_left (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steer_angle_front_right
     (setq _steer_angle_front_right (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steer_angle_rear
     (setq _steer_angle_rear (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_speed_front_left
     (setq _drive_speed_front_left (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_speed_front_right
     (setq _drive_speed_front_right (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_speed_rear
     (setq _drive_speed_rear (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_angular_speed_front_left
     (setq _drive_angular_speed_front_left (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_angular_speed_front_right
     (setq _drive_angular_speed_front_right (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_angular_speed_rear
     (setq _drive_angular_speed_rear (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get signal_chassis::Drivetrain_r1 :md5sum-) "d64ee0e637d15c359801b97bc246779d")
(setf (get signal_chassis::Drivetrain_r1 :datatype-) "signal_chassis/Drivetrain_r1")
(setf (get signal_chassis::Drivetrain_r1 :definition-)
      "float32 steer_angle_front_left
float32 steer_angle_front_right
float32 steer_angle_rear
float32 drive_speed_front_left
float32 drive_speed_front_right
float32 drive_speed_rear
float32 drive_angular_speed_front_left
float32 drive_angular_speed_front_right
float32 drive_angular_speed_rear
")



(provide :signal_chassis/Drivetrain_r1 "d64ee0e637d15c359801b97bc246779d")


