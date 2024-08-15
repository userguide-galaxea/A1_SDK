;; Auto-generated. Do not edit!


(when (boundp 'signal_arm::status)
  (if (not (find-package "SIGNAL_ARM"))
    (make-package "SIGNAL_ARM"))
  (shadow 'status (find-package "SIGNAL_ARM")))
(unless (find-package "SIGNAL_ARM::STATUS")
  (make-package "SIGNAL_ARM::STATUS"))

(in-package "ROS")
;;//! \htmlinclude status.msg.html


(defclass signal_arm::status
  :super ros::object
  :slots (_name _motor_errors ))

(defmethod signal_arm::status
  (:init
   (&key
    ((:name __name) (let (r) (dotimes (i 0) (push "" r)) r))
    ((:motor_errors __motor_errors) ())
    )
   (send-super :init)
   (setq _name __name)
   (setq _motor_errors __motor_errors)
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:motor_errors
   (&rest __motor_errors)
   (if (keywordp (car __motor_errors))
       (send* _motor_errors __motor_errors)
     (progn
       (if __motor_errors (setq _motor_errors (car __motor_errors)))
       _motor_errors)))
  (:serialization-length
   ()
   (+
    ;; string[] _name
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _name)) 4
    ;; signal_arm/motor_error[] _motor_errors
    (apply #'+ (send-all _motor_errors :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string[] _name
     (write-long (length _name) s)
     (dolist (elem _name)
       (write-long (length elem) s) (princ elem s)
       )
     ;; signal_arm/motor_error[] _motor_errors
     (write-long (length _motor_errors) s)
     (dolist (elem _motor_errors)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string[] _name
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _name (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _name i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;; signal_arm/motor_error[] _motor_errors
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _motor_errors (let (r) (dotimes (i n) (push (instance signal_arm::motor_error :init) r)) r))
     (dolist (elem- _motor_errors)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get signal_arm::status :md5sum-) "39b832c9a7480392677ff5c66f1fabe0")
(setf (get signal_arm::status :datatype-) "signal_arm/status")
(setf (get signal_arm::status :definition-)
      "string[] name
motor_error[] motor_errors
================================================================================
MSG: signal_arm/motor_error
uint32 error_code
string[] error_description
")



(provide :signal_arm/status "39b832c9a7480392677ff5c66f1fabe0")


