cmake_minimum_required(VERSION 4.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "C:\\Qt\\6.12.0\\mingw_64")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

project(Qt-course-beginner)

find_package(Qt6Core REQUIRED)

add_executable(
        Qt-Course-beginner
        main.cpp
)


target_link_libraries(Qt-Course-beginner Qt6::Core)