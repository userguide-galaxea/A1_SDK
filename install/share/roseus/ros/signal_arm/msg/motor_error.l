;; Auto-generated. Do not edit!


(when (boundp 'signal_arm::motor_error)
  (if (not (find-package "SIGNAL_ARM"))
    (make-package "SIGNAL_ARM"))
  (shadow 'motor_error (find-package "SIGNAL_ARM")))
(unless (find-package "SIGNAL_ARM::MOTOR_ERROR")
  (make-package "SIGNAL_ARM::MOTOR_ERROR"))

(in-package "ROS")
;;//! \htmlinclude motor_error.msg.html


(defclass signal_arm::motor_error
  :super ros::object
  :slots (_error_code _error_description ))

(defmethod signal_arm::motor_error
  (:init
   (&key
    ((:error_code __error_code) 0)
    ((:error_description __error_description) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _error_code (round __error_code))
   (setq _error_description __error_description)
   self)
  (:error_code
   (&optional __error_code)
   (if __error_code (setq _error_code __error_code)) _error_code)
  (:error_description
   (&optional __error_description)
   (if __error_description (setq _error_description __error_description)) _error_description)
  (:serialization-length
   ()
   (+
    ;; uint32 _error_code
    4
    ;; string[] _error_description
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _error_description)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _error_code
       (write-long _error_code s)
     ;; string[] _error_description
     (write-long (length _error_description) s)
     (dolist (elem _error_description)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _error_code
     (setq _error_code (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string[] _error_description
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _error_description (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _error_description i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(setf (get signal_arm::motor_error :md5sum-) "1a94173f8a054221ce910317553c671d")
(setf (get signal_arm::motor_error :datatype-) "signal_arm/motor_error")
(setf (get signal_arm::motor_error :definition-)
      "uint32 error_code
string[] error_description
")



(provide :signal_arm/motor_error "1a94173f8a054221ce910317553c671d")


