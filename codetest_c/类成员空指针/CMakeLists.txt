cmake_minimum_required (VERSION 2.8)
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_CURRENT_LIST_DIR}/out")
#可执行文件用add_executable
project (Demo1)
add_executable(test ${CMAKE_CURRENT_LIST_DIR}/main.cpp)