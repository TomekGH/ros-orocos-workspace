# generated from catkin/cmake/template/pkgConfig.cmake.in

# append elements to a list and remove existing duplicates from the list
# copied from catkin/cmake/list_append_deduplicate.cmake to keep pkgConfig
# self contained
macro(_list_append_deduplicate listname)
  if(NOT "${ARGN}" STREQUAL "")
    if(${listname})
      list(REMOVE_ITEM ${listname} ${ARGN})
    endif()
    list(APPEND ${listname} ${ARGN})
  endif()
endmacro()

# append elements to a list if they are not already in the list
# copied from catkin/cmake/list_append_unique.cmake to keep pkgConfig
# self contained
macro(_list_append_unique listname)
  foreach(_item ${ARGN})
    list(FIND ${listname} ${_item} _index)
    if(_index EQUAL -1)
      list(APPEND ${listname} ${_item})
    endif()
  endforeach()
endmacro()


if(rtt_stereo_msgs_CONFIG_INCLUDED)
  return()
endif()
set(rtt_stereo_msgs_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("FALSE" STREQUAL "TRUE")
  set(rtt_stereo_msgs_SOURCE_PREFIX /home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/typekits/rtt_stereo_msgs)
  set(rtt_stereo_msgs_DEVEL_PREFIX /home/tpokorsk/ros-orocos-workspace/underlay/devel)
  set(rtt_stereo_msgs_INSTALL_PREFIX "")
  set(rtt_stereo_msgs_PREFIX ${rtt_stereo_msgs_DEVEL_PREFIX})
else()
  set(rtt_stereo_msgs_SOURCE_PREFIX "")
  set(rtt_stereo_msgs_DEVEL_PREFIX "")
  set(rtt_stereo_msgs_INSTALL_PREFIX /home/tpokorsk/ros-orocos-workspace/underlay/install)
  set(rtt_stereo_msgs_PREFIX ${rtt_stereo_msgs_INSTALL_PREFIX})
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'rtt_stereo_msgs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(rtt_stereo_msgs_FOUND_CATKIN_PROJECT TRUE)

if(NOT "include" STREQUAL "")
  set(rtt_stereo_msgs_INCLUDE_DIRS "")
  set(_include_dirs "include")
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir}" STREQUAL "include")
      get_filename_component(include "${rtt_stereo_msgs_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'rtt_stereo_msgs' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  Ask the maintainer 'Orocos Developers <orocos-dev@lists.mech.kuleuven.be>' to fix it.")
      endif()
    else()
      message(FATAL_ERROR "Project 'rtt_stereo_msgs' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '/home/tpokorsk/ros-orocos-workspace/underlay/install/${idir}'.  Ask the maintainer 'Orocos Developers <orocos-dev@lists.mech.kuleuven.be>' to fix it.")
    endif()
    _list_append_unique(rtt_stereo_msgs_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "")
foreach(library ${libraries})
  # keep build configuration keywords, target names and absolute libraries as-is
  if("${library}" MATCHES "^debug|optimized|general$")
    list(APPEND rtt_stereo_msgs_LIBRARIES ${library})
  elseif(TARGET ${library})
    list(APPEND rtt_stereo_msgs_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND rtt_stereo_msgs_LIBRARIES ${library})
  else()
    set(lib_path "")
    set(lib "${library}-NOTFOUND")
    # since the path where the library is found is returned we have to iterate over the paths manually
    foreach(path /home/tpokorsk/ros-orocos-workspace/underlay/install/lib;/opt/ros/hydro/lib)
      find_library(lib ${library}
        PATHS ${path}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)
      if(lib)
        set(lib_path ${path})
        break()
      endif()
    endforeach()
    if(lib)
      _list_append_unique(rtt_stereo_msgs_LIBRARY_DIRS ${lib_path})
      list(APPEND rtt_stereo_msgs_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'rtt_stereo_msgs'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND rtt_stereo_msgs_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(rtt_stereo_msgs_EXPORTED_TARGETS "rtt-stereo_msgs-typekit;rtt-stereo_msgs-ros-transport")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${rtt_stereo_msgs_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 rtt_stereo_msgs_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${rtt_stereo_msgs_dep}_FOUND)
      find_package(${rtt_stereo_msgs_dep} REQUIRED)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${rtt_stereo_msgs_dep} REQUIRED ${depend_list})
  endif()
  _list_append_unique(rtt_stereo_msgs_INCLUDE_DIRS ${${rtt_stereo_msgs_dep}_INCLUDE_DIRS})
  _list_append_deduplicate(rtt_stereo_msgs_LIBRARIES ${${rtt_stereo_msgs_dep}_LIBRARIES})
  _list_append_unique(rtt_stereo_msgs_LIBRARY_DIRS ${${rtt_stereo_msgs_dep}_LIBRARY_DIRS})
  list(APPEND rtt_stereo_msgs_EXPORTED_TARGETS ${${rtt_stereo_msgs_dep}_EXPORTED_TARGETS})
endforeach()

set(pkg_cfg_extras "")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${rtt_stereo_msgs_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
