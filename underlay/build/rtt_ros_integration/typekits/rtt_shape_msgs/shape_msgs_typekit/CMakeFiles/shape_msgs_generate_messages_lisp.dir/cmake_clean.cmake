FILE(REMOVE_RECURSE
  "ros_Mesh_typekit_plugin.cpp"
  "ros_MeshTriangle_typekit_plugin.cpp"
  "ros_Plane_typekit_plugin.cpp"
  "ros_SolidPrimitive_typekit_plugin.cpp"
  "ros_Mesh_transport_plugin.cpp"
  "ros_MeshTriangle_transport_plugin.cpp"
  "ros_Plane_transport_plugin.cpp"
  "ros_SolidPrimitive_transport_plugin.cpp"
  "ros_shape_msgs_typekit.cpp"
  "ros_shape_msgs_transport.cpp"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/shape_msgs"
  "CMakeFiles/shape_msgs_generate_messages_lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/shape_msgs_generate_messages_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
