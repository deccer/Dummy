cmake_minimum_required(VERSION 3.27)
project(Dummy)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(libs)
add_executable(Dummy main.cpp)

target_link_libraries(Dummy PRIVATE glm glfw glad)
