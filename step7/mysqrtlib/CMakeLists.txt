add_library(mysqrtlib mysqrt.cxx)
target_include_directories(mysqrtlib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS mysqrtlib DESTINATION lib)
install(FILES mysqrt.h DESTINATION include)