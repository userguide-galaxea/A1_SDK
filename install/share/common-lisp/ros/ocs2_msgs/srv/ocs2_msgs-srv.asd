
(cl:in-package :asdf)

(defsystem "ocs2_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :ocs2_msgs-msg
)
  :components ((:file "_package")
    (:file "reset" :depends-on ("_package_reset"))
    (:file "_package_reset" :depends-on ("_package"))
  ))