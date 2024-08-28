;; Auto-generated. Do not edit!


(when (boundp 'signal_arm::FunctionFrame)
  (if (not (find-package "SIGNAL_ARM"))
    (make-package "SIGNAL_ARM"))
  (shadow 'FunctionFrame (find-package "SIGNAL_ARM")))
(unless (find-package "SIGNAL_ARM::FUNCTIONFRAME")
  (make-package "SIGNAL_ARM::FUNCTIONFRAME"))
(unless (find-package "SIGNAL_ARM::FUNCTIONFRAMEREQUEST")
  (make-package "SIGNAL_ARM::FUNCTIONFRAMEREQUEST"))
(unless (find-package "SIGNAL_ARM::FUNCTIONFRAMERESPONSE")
  (make-package "SIGNAL_ARM::FUNCTIONFRAMERESPONSE"))

(in-package "ROS")





(defclass signal_arm::FunctionFrameRequest
  :super ros::object
  :slots (_command ))

(defmethod signal_arm::FunctionFrameRequest
  (:init
   (&key
    ((:command __command) 0)
    )
   (send-super :init)
   (setq _command (round __command))
   self)
  (:command
   (&optional __command)
   (if __command (setq _command __command)) _command)
  (:serialization-length
   ()
   (+
    ;; uint8 _command
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _command
       (write-byte _command s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _command
     (setq _command (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass signal_arm::FunctionFrameResponse
  :super ros::object
  :slots (_success _message ))

(defmethod signal_arm::FunctionFrameResponse
  (:init
   (&key
    ((:success __success) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _success __success)
   (setq _message (string __message))
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass signal_arm::FunctionFrame
  :super ros::object
  :slots ())

(setf (get signal_arm::FunctionFrame :md5sum-) "28ca10d14356fafac343096e46d08b18")
(setf (get signal_arm::FunctionFrame :datatype-) "signal_arm/FunctionFrame")
(setf (get signal_arm::FunctionFrame :request) signal_arm::FunctionFrameRequest)
(setf (get signal_arm::FunctionFrame :response) signal_arm::FunctionFrameResponse)

(defmethod signal_arm::FunctionFrameRequest
  (:response () (instance signal_arm::FunctionFrameResponse :init)))

(setf (get signal_arm::FunctionFrameRequest :md5sum-) "28ca10d14356fafac343096e46d08b18")
(setf (get signal_arm::FunctionFrameRequest :datatype-) "signal_arm/FunctionFrameRequest")
(setf (get signal_arm::FunctionFrameRequest :definition-)
      "uint8 command
---
bool success
string message

")

(setf (get signal_arm::FunctionFrameResponse :md5sum-) "28ca10d14356fafac343096e46d08b18")
(setf (get signal_arm::FunctionFrameResponse :datatype-) "signal_arm/FunctionFrameResponse")
(setf (get signal_arm::FunctionFrameResponse :definition-)
      "uint8 command
---
bool success
string message

")



(provide :signal_arm/FunctionFrame "28ca10d14356fafac343096e46d08b18")


