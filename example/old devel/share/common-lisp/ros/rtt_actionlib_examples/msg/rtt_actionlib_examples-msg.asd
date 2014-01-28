
(cl:in-package :asdf)

(defsystem "rtt_actionlib_examples-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "SomeActionAction" :depends-on ("_package_SomeActionAction"))
    (:file "_package_SomeActionAction" :depends-on ("_package"))
    (:file "SomeActionGoal" :depends-on ("_package_SomeActionGoal"))
    (:file "_package_SomeActionGoal" :depends-on ("_package"))
    (:file "SomeActionActionGoal" :depends-on ("_package_SomeActionActionGoal"))
    (:file "_package_SomeActionActionGoal" :depends-on ("_package"))
    (:file "SomeActionResult" :depends-on ("_package_SomeActionResult"))
    (:file "_package_SomeActionResult" :depends-on ("_package"))
    (:file "SomeActionActionResult" :depends-on ("_package_SomeActionActionResult"))
    (:file "_package_SomeActionActionResult" :depends-on ("_package"))
    (:file "SomeActionFeedback" :depends-on ("_package_SomeActionFeedback"))
    (:file "_package_SomeActionFeedback" :depends-on ("_package"))
    (:file "SomeActionActionFeedback" :depends-on ("_package_SomeActionActionFeedback"))
    (:file "_package_SomeActionActionFeedback" :depends-on ("_package"))
  ))