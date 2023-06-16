cmake_minimum_required(VERSION 3.5)

project(Adapter LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5 COMPONENTS Widgets REQUIRED)

file(GLOB_RECURSE SRC_FILES
    "*.h"
    "*.cpp")

add_executable(Adapter ${SRC_FILES})

target_link_libraries(Adapter PRIVATE Qt5::Widgets)
