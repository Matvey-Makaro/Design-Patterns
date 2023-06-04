cmake_minimum_required(VERSION 3.12)

project(Builder LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5 COMPONENTS Widgets REQUIRED)

file(GLOB SRC_FILES
    "*.h"
    "*.cpp")

add_executable(Builder ${SRC_FILES})


target_link_libraries(Builder PRIVATE Qt5::Widgets)
