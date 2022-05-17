cmake_minimum_required(VERSION 3.10)

# should we use our own math functions
option(USE_MYSQRT "Use tutorial provided math implementation" ON)

# configure a header file to pass some of the CMake settings to the source code
configure_file(step3.h.in step3.h)

# add the MathFunctions library
if(USE_MYSQRT)
  add_subdirectory(mysqrtlib)
  list(APPEND EXTRA_LIBS mysqrtlib)
endif()

add_executable(step3 step3.cxx)
target_link_libraries(step3 PUBLIC ${EXTRA_LIBS})
target_include_directories(step3 PUBLIC "${PROJECT_BINARY_DIR}")