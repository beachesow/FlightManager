# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Planes_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Planes_autogen.dir\\ParseCache.txt"
  "Planes_autogen"
  )
endif()
