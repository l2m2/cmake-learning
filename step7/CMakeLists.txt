cmake_minimum_required(VERSION 3.10)

project(Step7 VERSION 1.0)

# should we use our own math functions
option(USE_MYSQRT "Use tutorial provided math implementation" ON)

# configure a header file to pass some of the CMake settings to the source code
configure_file(step7_config.h.in step7_config.h)

# add the MathFunctions library
if(USE_MYSQRT)
  add_subdirectory(mysqrtlib)
  list(APPEND EXTRA_LIBS mysqrtlib)
endif()

add_executable(step7 step7.cxx)
target_link_libraries(step7 PUBLIC ${EXTRA_LIBS})
target_include_directories(step7 PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS step7 DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/step7_config.h" DESTINATION include)

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${Step7_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${Step7_VERSION_MINOR}")
set(CPACK_SOURCE_GENERATOR "ZIP")
include(CPack)
