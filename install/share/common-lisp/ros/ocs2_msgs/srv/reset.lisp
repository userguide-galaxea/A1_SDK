; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-srv)


;//! \htmlinclude reset-request.msg.html

(cl:defclass <reset-request> (roslisp-msg-protocol:ros-message)
  ((reset
    :reader reset
    :initarg :reset
    :type cl:boolean
    :initform cl:nil)
   (targetTrajectories
    :reader targetTrajectories
    :initarg :targetTrajectories
    :type ocs2_msgs-msg:mpc_target_trajectories
    :initform (cl:make-instance 'ocs2_msgs-msg:mpc_target_trajectories)))
)

(cl:defclass reset-request (<reset-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <reset-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'reset-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-srv:<reset-request> is deprecated: use ocs2_msgs-srv:reset-request instead.")))

(cl:ensure-generic-function 'reset-val :lambda-list '(m))
(cl:defmethod reset-val ((m <reset-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-srv:reset-val is deprecated.  Use ocs2_msgs-srv:reset instead.")
  (reset m))

(cl:ensure-generic-function 'targetTrajectories-val :lambda-list '(m))
(cl:defmethod targetTrajectories-val ((m <reset-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-srv:targetTrajectories-val is deprecated.  Use ocs2_msgs-srv:targetTrajectories instead.")
  (targetTrajectories m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <reset-request>) ostream)
  "Serializes a message object of type '<reset-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'reset) 1 0)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'targetTrajectories) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <reset-request>) istream)
  "Deserializes a message object of type '<reset-request>"
    (cl:setf (cl:slot-value msg 'reset) (cl:not (cl:zerop (cl:read-byte istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'targetTrajectories) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<reset-request>)))
  "Returns string type for a service object of type '<reset-request>"
  "ocs2_msgs/resetRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'reset-request)))
  "Returns string type for a service object of type 'reset-request"
  "ocs2_msgs/resetRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<reset-request>)))
  "Returns md5sum for a message object of type '<reset-request>"
  "5d381de3cef01856decae8f3f4a35b69")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'reset-request)))
  "Returns md5sum for a message object of type 'reset-request"
  "5d381de3cef01856decae8f3f4a35b69")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<reset-request>)))
  "Returns full string definition for message of type '<reset-request>"
  (cl:format cl:nil "# Reset service ~%bool                      reset~%mpc_target_trajectories   targetTrajectories~%~%================================================================================~%MSG: ocs2_msgs/mpc_target_trajectories~%# MPC target trajectories~%~%float64[]    timeTrajectory        # MPC target time trajectory~%mpc_state[]  stateTrajectory       # MPC target state trajectory~%mpc_input[]  inputTrajectory       # MPC target input trajectory~%~%~%================================================================================~%MSG: ocs2_msgs/mpc_state~%# MPC internal model state vector~%float32[] value~%~%================================================================================~%MSG: ocs2_msgs/mpc_input~%# MPC internal model input vector ~%~%float32[] value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'reset-request)))
  "Returns full string definition for message of type 'reset-request"
  (cl:format cl:nil "# Reset service ~%bool                      reset~%mpc_target_trajectories   targetTrajectories~%~%================================================================================~%MSG: ocs2_msgs/mpc_target_trajectories~%# MPC target trajectories~%~%float64[]    timeTrajectory        # MPC target time trajectory~%mpc_state[]  stateTrajectory       # MPC target state trajectory~%mpc_input[]  inputTrajectory       # MPC target input trajectory~%~%~%================================================================================~%MSG: ocs2_msgs/mpc_state~%# MPC internal model state vector~%float32[] value~%~%================================================================================~%MSG: ocs2_msgs/mpc_input~%# MPC internal model input vector ~%~%float32[] value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <reset-request>))
  (cl:+ 0
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'targetTrajectories))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <reset-request>))
  "Converts a ROS message object to a list"
  (cl:list 'reset-request
    (cl:cons ':reset (reset msg))
    (cl:cons ':targetTrajectories (targetTrajectories msg))
))
;//! \htmlinclude reset-response.msg.html

(cl:defclass <reset-response> (roslisp-msg-protocol:ros-message)
  ((done
    :reader done
    :initarg :done
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass reset-response (<reset-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <reset-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'reset-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-srv:<reset-response> is deprecated: use ocs2_msgs-srv:reset-response instead.")))

(cl:ensure-generic-function 'done-val :lambda-list '(m))
(cl:defmethod done-val ((m <reset-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-srv:done-val is deprecated.  Use ocs2_msgs-srv:done instead.")
  (done m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <reset-response>) ostream)
  "Serializes a message object of type '<reset-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'done) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <reset-response>) istream)
  "Deserializes a message object of type '<reset-response>"
    (cl:setf (cl:slot-value msg 'done) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<reset-response>)))
  "Returns string type for a service object of type '<reset-response>"
  "ocs2_msgs/resetResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'reset-response)))
  "Returns string type for a service object of type 'reset-response"
  "ocs2_msgs/resetResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<reset-response>)))
  "Returns md5sum for a message object of type '<reset-response>"
  "5d381de3cef01856decae8f3f4a35b69")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'reset-response)))
  "Returns md5sum for a message object of type 'reset-response"
  "5d381de3cef01856decae8f3f4a35b69")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<reset-response>)))
  "Returns full string definition for message of type '<reset-response>"
  (cl:format cl:nil "bool                      done~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'reset-response)))
  "Returns full string definition for message of type 'reset-response"
  (cl:format cl:nil "bool                      done~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <reset-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <reset-response>))
  "Converts a ROS message object to a list"
  (cl:list 'reset-response
    (cl:cons ':done (done msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'reset)))
  'reset-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'reset)))
  'reset-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'reset)))
  "Returns string type for a service object of type '<reset>"
  "ocs2_msgs/reset")