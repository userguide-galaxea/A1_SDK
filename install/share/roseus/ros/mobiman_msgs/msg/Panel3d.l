;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::Panel3d)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'Panel3d (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::PANEL3D")
  (make-package "MOBIMAN_MSGS::PANEL3D"))

(in-package "ROS")
;;//! \htmlinclude Panel3d.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass mobiman_msgs::Panel3d
  :super ros::object
  :slots (_origin _normal _length _width _buttons_3d ))

(defmethod mobiman_msgs::Panel3d
  (:init
   (&key
    ((:origin __origin) (instance geometry_msgs::Point :init))
    ((:normal __normal) (instance geometry_msgs::Vector3 :init))
    ((:length __length) 0.0)
    ((:width __width) 0.0)
    ((:buttons_3d __buttons_3d) ())
    )
   (send-super :init)
   (setq _origin __origin)
   (setq _normal __normal)
   (setq _length (float __length))
   (setq _width (float __width))
   (setq _buttons_3d __buttons_3d)
   self)
  (:origin
   (&rest __origin)
   (if (keywordp (car __origin))
       (send* _origin __origin)
     (progn
       (if __origin (setq _origin (car __origin)))
       _origin)))
  (:normal
   (&rest __normal)
   (if (keywordp (car __normal))
       (send* _normal __normal)
     (progn
       (if __normal (setq _normal (car __normal)))
       _normal)))
  (:length
   (&optional __length)
   (if __length (setq _length __length)) _length)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:buttons_3d
   (&rest __buttons_3d)
   (if (keywordp (car __buttons_3d))
       (send* _buttons_3d __buttons_3d)
     (progn
       (if __buttons_3d (setq _buttons_3d (car __buttons_3d)))
       _buttons_3d)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Point _origin
    (send _origin :serialization-length)
    ;; geometry_msgs/Vector3 _normal
    (send _normal :serialization-length)
    ;; float32 _length
    4
    ;; float32 _width
    4
    ;; mobiman_msgs/Button3d[] _buttons_3d
    (apply #'+ (send-all _buttons_3d :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Point _origin
       (send _origin :serialize s)
     ;; geometry_msgs/Vector3 _normal
       (send _normal :serialize s)
     ;; float32 _length
       (sys::poke _length (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _width
       (sys::poke _width (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; mobiman_msgs/Button3d[] _buttons_3d
     (write-long (length _buttons_3d) s)
     (dolist (elem _buttons_3d)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Point _origin
     (send _origin :deserialize buf ptr-) (incf ptr- (send _origin :serialization-length))
   ;; geometry_msgs/Vector3 _normal
     (send _normal :deserialize buf ptr-) (incf ptr- (send _normal :serialization-length))
   ;; float32 _length
     (setq _length (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _width
     (setq _width (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; mobiman_msgs/Button3d[] _buttons_3d
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _buttons_3d (let (r) (dotimes (i n) (push (instance mobiman_msgs::Button3d :init) r)) r))
     (dolist (elem- _buttons_3d)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get mobiman_msgs::Panel3d :md5sum-) "a836babba9d9025b436af0ca907d0866")
(setf (get mobiman_msgs::Panel3d :datatype-) "mobiman_msgs/Panel3d")
(setf (get mobiman_msgs::Panel3d :definition-)
      "geometry_msgs/Point origin
geometry_msgs/Vector3 normal
float32 length
float32 width
Button3d[] buttons_3d
================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: mobiman_msgs/Button3d
geometry_msgs/Pose pose
ButtonSemantics button_semantics
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: mobiman_msgs/ButtonSemantics
string name
uint8 button_status

")



(provide :mobiman_msgs/Panel3d "a836babba9d9025b436af0ca907d0866")


