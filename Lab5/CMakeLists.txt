cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lab5 VERSION 1.0)
file(GLOB_RECURSE SOURCES include/*.cpp)
add_executable(lab5 main.cpp ${SOURCES})
