cmake_minimum_required(VERSION 4.0)
project(Qt-course-beginner)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER g++) # On linux I had to specify the compiler

set(CMAKE_PREFIX_PATH "~/Qt/6.12.0/gcc_64") # Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6Core REQUIRED)

add_executable(
        Qt-Course-beginner
        main.cpp
)

target_link_libraries(Qt-Course-beginner Qt6::Core)

