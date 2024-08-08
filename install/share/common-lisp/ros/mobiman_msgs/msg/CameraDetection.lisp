; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-msg)


;//! \htmlinclude CameraDetection.msg.html

(cl:defclass <CameraDetection> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (source_img
    :reader source_img
    :initarg :source_img
    :type sensor_msgs-msg:Image
    :initform (cl:make-instance 'sensor_msgs-msg:Image))
   (mask
    :reader mask
    :initarg :mask
    :type mobiman_msgs-msg:Mask
    :initform (cl:make-instance 'mobiman_msgs-msg:Mask)))
)

(cl:defclass CameraDetection (<CameraDetection>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CameraDetection>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CameraDetection)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-msg:<CameraDetection> is deprecated: use mobiman_msgs-msg:CameraDetection instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <CameraDetection>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:header-val is deprecated.  Use mobiman_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'source_img-val :lambda-list '(m))
(cl:defmethod source_img-val ((m <CameraDetection>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:source_img-val is deprecated.  Use mobiman_msgs-msg:source_img instead.")
  (source_img m))

(cl:ensure-generic-function 'mask-val :lambda-list '(m))
(cl:defmethod mask-val ((m <CameraDetection>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:mask-val is deprecated.  Use mobiman_msgs-msg:mask instead.")
  (mask m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CameraDetection>) ostream)
  "Serializes a message object of type '<CameraDetection>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'source_img) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'mask) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CameraDetection>) istream)
  "Deserializes a message object of type '<CameraDetection>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'source_img) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'mask) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CameraDetection>)))
  "Returns string type for a message object of type '<CameraDetection>"
  "mobiman_msgs/CameraDetection")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CameraDetection)))
  "Returns string type for a message object of type 'CameraDetection"
  "mobiman_msgs/CameraDetection")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CameraDetection>)))
  "Returns md5sum for a message object of type '<CameraDetection>"
  "a9d0a9437372acb4fb00e7aff83be190")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CameraDetection)))
  "Returns md5sum for a message object of type 'CameraDetection"
  "a9d0a9437372acb4fb00e7aff83be190")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CameraDetection>)))
  "Returns full string definition for message of type '<CameraDetection>"
  (cl:format cl:nil "Header header~%sensor_msgs/Image source_img~%Mask mask~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of camera~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: mobiman_msgs/Mask~%Header header~%uint16 height~%uint16 width~%uint8[] data # size h * w, array of mask instance~%uint8[] mask_types # size number of instance~%string[] instance_description # size number of instance~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CameraDetection)))
  "Returns full string definition for message of type 'CameraDetection"
  (cl:format cl:nil "Header header~%sensor_msgs/Image source_img~%Mask mask~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of camera~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: mobiman_msgs/Mask~%Header header~%uint16 height~%uint16 width~%uint8[] data # size h * w, array of mask instance~%uint8[] mask_types # size number of instance~%string[] instance_description # size number of instance~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CameraDetection>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'source_img))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'mask))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CameraDetection>))
  "Converts a ROS message object to a list"
  (cl:list 'CameraDetection
    (cl:cons ':header (header msg))
    (cl:cons ':source_img (source_img msg))
    (cl:cons ':mask (mask msg))
))
