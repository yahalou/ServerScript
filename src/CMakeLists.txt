cmake_minimum_required(VERSION 3.24)
project(ServerScript)
set(CMAKE_CXX_STANDARD 20)

# 可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH bin)

# 头文件搜索路径
include_directories(antlr_runtime/include/antlr4-runtime)
include_directories(antlr_runtime/include)
include_directories(antlr_generate)

# 静态库搜索路径
link_directories(antlr_runtime/lib)

# 添加target
file(GLOB ANTLR_LIST antlr_generate/*.cpp)
add_executable(ServerScript main.cpp ${ANTLR_LIST})

# 连接静态库
target_link_libraries(ServerScript antlr4-runtime)

