cmake_minimum_required(VERSION 3.10)
project(src_server)

set(CMAKE_CXX_STANDARD 11)

add_executable(src_server main.cpp)

find_package(OpenCV REQUIRED)
target_link_libraries(src_server ${OpenCV_LIBS})