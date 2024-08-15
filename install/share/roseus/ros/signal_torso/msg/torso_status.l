;; Auto-generated. Do not edit!


(when (boundp 'signal_torso::torso_status)
  (if (not (find-package "SIGNAL_TORSO"))
    (make-package "SIGNAL_TORSO"))
  (shadow 'torso_status (find-package "SIGNAL_TORSO")))
(unless (find-package "SIGNAL_TORSO::TORSO_STATUS")
  (make-package "SIGNAL_TORSO::TORSO_STATUS"))

(in-package "ROS")
;;//! \htmlinclude torso_status.msg.html


(defclass signal_torso::torso_status
  :super ros::object
  :slots (_name _motor_temperature _braking_state _motor_voltage _error_code ))

(defmethod signal_torso::torso_status
  (:init
   (&key
    ((:name __name) (let (r) (dotimes (i 0) (push "" r)) r))
    ((:motor_temperature __motor_temperature) (make-array 0 :initial-element 0 :element-type :char))
    ((:braking_state __braking_state) (make-array 0 :initial-element 0 :element-type :char))
    ((:motor_voltage __motor_voltage) (make-array 0 :initial-element 0 :element-type :integer))
    ((:error_code __error_code) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _name __name)
   (setq _motor_temperature __motor_temperature)
   (setq _braking_state __braking_state)
   (setq _motor_voltage __motor_voltage)
   (setq _error_code __error_code)
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:motor_temperature
   (&optional __motor_temperature)
   (if __motor_temperature (setq _motor_temperature __motor_temperature)) _motor_temperature)
  (:braking_state
   (&optional __braking_state)
   (if __braking_state (setq _braking_state __braking_state)) _braking_state)
  (:motor_voltage
   (&optional __motor_voltage)
   (if __motor_voltage (setq _motor_voltage __motor_voltage)) _motor_voltage)
  (:error_code
   (&optional __error_code)
   (if __error_code (setq _error_code __error_code)) _error_code)
  (:serialization-length
   ()
   (+
    ;; string[] _name
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _name)) 4
    ;; uint8[] _motor_temperature
    (* 1    (length _motor_temperature)) 4
    ;; uint8[] _braking_state
    (* 1    (length _braking_state)) 4
    ;; uint16[] _motor_voltage
    (* 2    (length _motor_voltage)) 4
    ;; uint16[] _error_code
    (* 2    (length _error_code)) 4
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
     ;; uint8[] _motor_temperature
     (write-long (length _motor_temperature) s)
     (princ _motor_temperature s)
     ;; uint8[] _braking_state
     (write-long (length _braking_state) s)
     (princ _braking_state s)
     ;; uint16[] _motor_voltage
     (write-long (length _motor_voltage) s)
     (dotimes (i (length _motor_voltage))
       (write-word (elt _motor_voltage i) s)
       )
     ;; uint16[] _error_code
     (write-long (length _error_code) s)
     (dotimes (i (length _error_code))
       (write-word (elt _error_code i) s)
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
   ;; uint8[] _motor_temperature
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _motor_temperature (make-array n :element-type :char))
     (replace _motor_temperature buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _braking_state
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _braking_state (make-array n :element-type :char))
     (replace _braking_state buf :start2 ptr-) (incf ptr- n))
   ;; uint16[] _motor_voltage
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _motor_voltage (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _motor_voltage i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     ))
   ;; uint16[] _error_code
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _error_code (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _error_code i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     ))
   ;;
   self)
  )

(setf (get signal_torso::torso_status :md5sum-) "3302cf44c7333c5f9df707eac2f97f07")
(setf (get signal_torso::torso_status :datatype-) "signal_torso/torso_status")
(setf (get signal_torso::torso_status :definition-)
      "string[] name
uint8[] motor_temperature
uint8[] braking_state
uint16[] motor_voltage
uint16[] error_code
")



(provide :signal_torso/torso_status "3302cf44c7333c5f9df707eac2f97f07")


