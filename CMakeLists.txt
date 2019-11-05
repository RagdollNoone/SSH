cmake_minimum_required(VERSION 3.5)

project(SSH LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH /home/dendy/Tools/Qt/5.9.8/gcc_64/lib/cmake)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(SSH
  main.cpp
  sshmainwindow.cpp
  sshmainwindow.h
  sshmainwindow.ui
)

target_link_libraries(SSH PRIVATE Qt5::Widgets)
