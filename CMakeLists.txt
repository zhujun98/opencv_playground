cmake_minimum_required(VERSION 3.13)

project(opencv_playground LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(OpenCV 4.1 REQUIRED)
message(STATUS "Found opencv: ${OpenCV_LIBS}")

include_directories(${OpenCV_INCLUDE_DIRS})

add_subdirectory(basic)
