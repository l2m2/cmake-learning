cmake_minimum_required(VERSION 3.10)

# should we use our own math functions
option(USE_MYSQRT "Use tutorial provided math implementation" ON)

# configure a header file to pass some of the CMake settings to the source code
configure_file(step4_config.h.in step4_config.h)

# add the MathFunctions library
if(USE_MYSQRT)
  add_subdirectory(mysqrtlib)
  list(APPEND EXTRA_LIBS mysqrtlib)
endif()

add_executable(step4 step4.cxx)
target_link_libraries(step4 PUBLIC ${EXTRA_LIBS})
target_include_directories(step4 PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS step4 DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/step4_config.h" DESTINATION include)