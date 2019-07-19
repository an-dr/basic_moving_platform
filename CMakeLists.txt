cmake_minimum_required(VERSION 3.13)
project(basic_moving_platform)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
add_library(basic_moving_platform BasicMovingPlatform.cpp Motor.cpp CountingSensor.cpp weak.cpp)

add_executable(test_exe test_exe.cpp)

target_link_libraries(test_exe basic_moving_platform)
