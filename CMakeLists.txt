cmake_minimum_required(VERSION 3.24)
project(Script)
set(CMAKE_CXX_STANDARD 20)

# 代码文件夹
add_subdirectory(src ${PROJECT_SOURCE_DIR}/src/build)

# 测试文件夹
add_subdirectory(test ${PROJECT_SOURCE_DIR}/test/build)