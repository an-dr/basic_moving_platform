cmake_minimum_required(VERSION 3.13)

set(CHILDS)
include(abcmake/ab.cmake)

# Test exe - if needed
add_executable(${PROJECT_NAME}_x86 BasicMovingPlatform_x86.cpp main.cpp)
target_link_libraries(${PROJECT_NAME}_x86 ${PROJECT_NAME})
