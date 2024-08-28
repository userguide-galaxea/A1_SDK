;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::ButtonSemantics)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'ButtonSemantics (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::BUTTONSEMANTICS")
  (make-package "MOBIMAN_MSGS::BUTTONSEMANTICS"))

(in-package "ROS")
;;//! \htmlinclude ButtonSemantics.msg.html


(defclass mobiman_msgs::ButtonSemantics
  :super ros::object
  :slots (_name _button_status ))

(defmethod mobiman_msgs::ButtonSemantics
  (:init
   (&key
    ((:name __name) "")
    ((:button_status __button_status) 0)
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _button_status (round __button_status))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:button_status
   (&optional __button_status)
   (if __button_status (setq _button_status __button_status)) _button_status)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; uint8 _button_status
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; uint8 _button_status
       (write-byte _button_status s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _button_status
     (setq _button_status (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get mobiman_msgs::ButtonSemantics :md5sum-) "d1a817089c894e9e4413de25d5c745b7")
(setf (get mobiman_msgs::ButtonSemantics :datatype-) "mobiman_msgs/ButtonSemantics")
(setf (get mobiman_msgs::ButtonSemantics :definition-)
      "string name
uint8 button_status

")



(provide :mobiman_msgs/ButtonSemantics "d1a817089c894e9e4413de25d5c745b7")


