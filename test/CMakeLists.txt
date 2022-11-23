cmake_minimum_required(VERSION 3.24)
project(script_test)
set(CMAKE_CXX_STANDARD 20)

enable_testing()

set(EXECUTABLE_OUTPUT_PATH bin)
include_directories(googletest/include)
link_directories(googletest/build/lib)

add_executable(test test.cc)

# 链接静态库
target_link_libraries(test gtest)


