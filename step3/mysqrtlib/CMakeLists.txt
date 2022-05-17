add_library(mysqrtlib mysqrt.cxx)
target_include_directories(mysqrtlib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})