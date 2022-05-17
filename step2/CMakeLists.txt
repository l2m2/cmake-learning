cmake_minimum_required(VERSION 3.10)

# should we use our own math functions
option(USE_MYSQRT "Use tutorial provided math implementation" ON)

# configure a header file to pass some of the CMake settings to the source code
configure_file(step2.h.in step2.h)

# add the MathFunctions library
if(USE_MYSQRT)
  add_subdirectory(mysqrtlib)
  list(APPEND EXTRA_LIBS mysqrtlib)
  list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/mysqrtlib")
endif()

add_executable(step2 step2.cxx)

target_link_libraries(step2 PUBLIC ${EXTRA_LIBS})

target_include_directories(step2 PUBLIC "${PROJECT_BINARY_DIR}" ${EXTRA_INCLUDES})