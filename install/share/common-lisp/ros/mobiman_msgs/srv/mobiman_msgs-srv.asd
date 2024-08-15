
(cl:in-package :asdf)

(defsystem "mobiman_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "PoseArrayService" :depends-on ("_package_PoseArrayService"))
    (:file "_package_PoseArrayService" :depends-on ("_package"))
  ))