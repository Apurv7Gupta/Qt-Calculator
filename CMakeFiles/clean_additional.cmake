# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CALCULATOR_autogen"
  "CMakeFiles\\CALCULATOR_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CALCULATOR_autogen.dir\\ParseCache.txt"
  )
endif()
