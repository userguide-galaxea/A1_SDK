;; Auto-generated. Do not edit!


(when (boundp 'signal_chassis::Drivetrain)
  (if (not (find-package "SIGNAL_CHASSIS"))
    (make-package "SIGNAL_CHASSIS"))
  (shadow 'Drivetrain (find-package "SIGNAL_CHASSIS")))
(unless (find-package "SIGNAL_CHASSIS::DRIVETRAIN")
  (make-package "SIGNAL_CHASSIS::DRIVETRAIN"))

(in-package "ROS")
;;//! \htmlinclude Drivetrain.msg.html


(defclass signal_chassis::Drivetrain
  :super ros::object
  :slots (_steer_angle_fl _steer_angle_fr _steer_angle_rl _steer_angle_rr _drive_speed_fl _drive_speed_fr _drive_speed_rl _drive_speed_rr _drive_angular_speed_fl _drive_angular_speed_fr _drive_angular_speed_rl _drive_angular_speed_rr _motion_mode ))

(defmethod signal_chassis::Drivetrain
  (:init
   (&key
    ((:steer_angle_fl __steer_angle_fl) 0.0)
    ((:steer_angle_fr __steer_angle_fr) 0.0)
    ((:steer_angle_rl __steer_angle_rl) 0.0)
    ((:steer_angle_rr __steer_angle_rr) 0.0)
    ((:drive_speed_fl __drive_speed_fl) 0.0)
    ((:drive_speed_fr __drive_speed_fr) 0.0)
    ((:drive_speed_rl __drive_speed_rl) 0.0)
    ((:drive_speed_rr __drive_speed_rr) 0.0)
    ((:drive_angular_speed_fl __drive_angular_speed_fl) 0.0)
    ((:drive_angular_speed_fr __drive_angular_speed_fr) 0.0)
    ((:drive_angular_speed_rl __drive_angular_speed_rl) 0.0)
    ((:drive_angular_speed_rr __drive_angular_speed_rr) 0.0)
    ((:motion_mode __motion_mode) 0)
    )
   (send-super :init)
   (setq _steer_angle_fl (float __steer_angle_fl))
   (setq _steer_angle_fr (float __steer_angle_fr))
   (setq _steer_angle_rl (float __steer_angle_rl))
   (setq _steer_angle_rr (float __steer_angle_rr))
   (setq _drive_speed_fl (float __drive_speed_fl))
   (setq _drive_speed_fr (float __drive_speed_fr))
   (setq _drive_speed_rl (float __drive_speed_rl))
   (setq _drive_speed_rr (float __drive_speed_rr))
   (setq _drive_angular_speed_fl (float __drive_angular_speed_fl))
   (setq _drive_angular_speed_fr (float __drive_angular_speed_fr))
   (setq _drive_angular_speed_rl (float __drive_angular_speed_rl))
   (setq _drive_angular_speed_rr (float __drive_angular_speed_rr))
   (setq _motion_mode (round __motion_mode))
   self)
  (:steer_angle_fl
   (&optional __steer_angle_fl)
   (if __steer_angle_fl (setq _steer_angle_fl __steer_angle_fl)) _steer_angle_fl)
  (:steer_angle_fr
   (&optional __steer_angle_fr)
   (if __steer_angle_fr (setq _steer_angle_fr __steer_angle_fr)) _steer_angle_fr)
  (:steer_angle_rl
   (&optional __steer_angle_rl)
   (if __steer_angle_rl (setq _steer_angle_rl __steer_angle_rl)) _steer_angle_rl)
  (:steer_angle_rr
   (&optional __steer_angle_rr)
   (if __steer_angle_rr (setq _steer_angle_rr __steer_angle_rr)) _steer_angle_rr)
  (:drive_speed_fl
   (&optional __drive_speed_fl)
   (if __drive_speed_fl (setq _drive_speed_fl __drive_speed_fl)) _drive_speed_fl)
  (:drive_speed_fr
   (&optional __drive_speed_fr)
   (if __drive_speed_fr (setq _drive_speed_fr __drive_speed_fr)) _drive_speed_fr)
  (:drive_speed_rl
   (&optional __drive_speed_rl)
   (if __drive_speed_rl (setq _drive_speed_rl __drive_speed_rl)) _drive_speed_rl)
  (:drive_speed_rr
   (&optional __drive_speed_rr)
   (if __drive_speed_rr (setq _drive_speed_rr __drive_speed_rr)) _drive_speed_rr)
  (:drive_angular_speed_fl
   (&optional __drive_angular_speed_fl)
   (if __drive_angular_speed_fl (setq _drive_angular_speed_fl __drive_angular_speed_fl)) _drive_angular_speed_fl)
  (:drive_angular_speed_fr
   (&optional __drive_angular_speed_fr)
   (if __drive_angular_speed_fr (setq _drive_angular_speed_fr __drive_angular_speed_fr)) _drive_angular_speed_fr)
  (:drive_angular_speed_rl
   (&optional __drive_angular_speed_rl)
   (if __drive_angular_speed_rl (setq _drive_angular_speed_rl __drive_angular_speed_rl)) _drive_angular_speed_rl)
  (:drive_angular_speed_rr
   (&optional __drive_angular_speed_rr)
   (if __drive_angular_speed_rr (setq _drive_angular_speed_rr __drive_angular_speed_rr)) _drive_angular_speed_rr)
  (:motion_mode
   (&optional __motion_mode)
   (if __motion_mode (setq _motion_mode __motion_mode)) _motion_mode)
  (:serialization-length
   ()
   (+
    ;; float32 _steer_angle_fl
    4
    ;; float32 _steer_angle_fr
    4
    ;; float32 _steer_angle_rl
    4
    ;; float32 _steer_angle_rr
    4
    ;; float32 _drive_speed_fl
    4
    ;; float32 _drive_speed_fr
    4
    ;; float32 _drive_speed_rl
    4
    ;; float32 _drive_speed_rr
    4
    ;; float32 _drive_angular_speed_fl
    4
    ;; float32 _drive_angular_speed_fr
    4
    ;; float32 _drive_angular_speed_rl
    4
    ;; float32 _drive_angular_speed_rr
    4
    ;; int32 _motion_mode
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _steer_angle_fl
       (sys::poke _steer_angle_fl (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steer_angle_fr
       (sys::poke _steer_angle_fr (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steer_angle_rl
       (sys::poke _steer_angle_rl (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steer_angle_rr
       (sys::poke _steer_angle_rr (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_speed_fl
       (sys::poke _drive_speed_fl (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_speed_fr
       (sys::poke _drive_speed_fr (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_speed_rl
       (sys::poke _drive_speed_rl (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_speed_rr
       (sys::poke _drive_speed_rr (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_angular_speed_fl
       (sys::poke _drive_angular_speed_fl (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_angular_speed_fr
       (sys::poke _drive_angular_speed_fr (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_angular_speed_rl
       (sys::poke _drive_angular_speed_rl (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _drive_angular_speed_rr
       (sys::poke _drive_angular_speed_rr (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int32 _motion_mode
       (write-long _motion_mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _steer_angle_fl
     (setq _steer_angle_fl (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steer_angle_fr
     (setq _steer_angle_fr (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steer_angle_rl
     (setq _steer_angle_rl (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steer_angle_rr
     (setq _steer_angle_rr (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_speed_fl
     (setq _drive_speed_fl (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_speed_fr
     (setq _drive_speed_fr (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_speed_rl
     (setq _drive_speed_rl (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_speed_rr
     (setq _drive_speed_rr (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_angular_speed_fl
     (setq _drive_angular_speed_fl (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_angular_speed_fr
     (setq _drive_angular_speed_fr (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_angular_speed_rl
     (setq _drive_angular_speed_rl (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _drive_angular_speed_rr
     (setq _drive_angular_speed_rr (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int32 _motion_mode
     (setq _motion_mode (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get signal_chassis::Drivetrain :md5sum-) "46db51bd1f2094081def30cd2e74f33b")
(setf (get signal_chassis::Drivetrain :datatype-) "signal_chassis/Drivetrain")
(setf (get signal_chassis::Drivetrain :definition-)
      "float32 steer_angle_fl
float32 steer_angle_fr
float32 steer_angle_rl
float32 steer_angle_rr
float32 drive_speed_fl
float32 drive_speed_fr
float32 drive_speed_rl
float32 drive_speed_rr
float32 drive_angular_speed_fl
float32 drive_angular_speed_fr
float32 drive_angular_speed_rl
float32 drive_angular_speed_rr
int32 motion_mode
")



(provide :signal_chassis/Drivetrain "46db51bd1f2094081def30cd2e74f33b")


