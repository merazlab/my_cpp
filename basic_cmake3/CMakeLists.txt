project( first_project ) # Mandatory.
cmake_minimum_required(VERSION 3.1) # Mandatory.

#message(STATUS ${PROJECT_SOURCE_DIR})
add_library(tools tools.cpp)
add_executable(main main.cpp)
target_link_libraries(main tools)
