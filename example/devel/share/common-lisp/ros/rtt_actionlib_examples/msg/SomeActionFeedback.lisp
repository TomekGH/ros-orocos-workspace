; Auto-generated. Do not edit!


(cl:in-package rtt_actionlib_examples-msg)


;//! \htmlinclude SomeActionFeedback.msg.html

(cl:defclass <SomeActionFeedback> (roslisp-msg-protocol:ros-message)
  ((percent_complete
    :reader percent_complete
    :initarg :percent_complete
    :type cl:float
    :initform 0.0))
)

(cl:defclass SomeActionFeedback (<SomeActionFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SomeActionFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SomeActionFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rtt_actionlib_examples-msg:<SomeActionFeedback> is deprecated: use rtt_actionlib_examples-msg:SomeActionFeedback instead.")))

(cl:ensure-generic-function 'percent_complete-val :lambda-list '(m))
(cl:defmethod percent_complete-val ((m <SomeActionFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rtt_actionlib_examples-msg:percent_complete-val is deprecated.  Use rtt_actionlib_examples-msg:percent_complete instead.")
  (percent_complete m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SomeActionFeedback>) ostream)
  "Serializes a message object of type '<SomeActionFeedback>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'percent_complete))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SomeActionFeedback>) istream)
  "Deserializes a message object of type '<SomeActionFeedback>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'percent_complete) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SomeActionFeedback>)))
  "Returns string type for a message object of type '<SomeActionFeedback>"
  "rtt_actionlib_examples/SomeActionFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SomeActionFeedback)))
  "Returns string type for a message object of type 'SomeActionFeedback"
  "rtt_actionlib_examples/SomeActionFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SomeActionFeedback>)))
  "Returns md5sum for a message object of type '<SomeActionFeedback>"
  "cc6abe8bc172f00995b2c3f53015f718")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SomeActionFeedback)))
  "Returns md5sum for a message object of type 'SomeActionFeedback"
  "cc6abe8bc172f00995b2c3f53015f718")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SomeActionFeedback>)))
  "Returns full string definition for message of type '<SomeActionFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 percent_complete~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SomeActionFeedback)))
  "Returns full string definition for message of type 'SomeActionFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 percent_complete~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SomeActionFeedback>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SomeActionFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'SomeActionFeedback
    (cl:cons ':percent_complete (percent_complete msg))
))
