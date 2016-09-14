cmake_minimum_required(VERSION 3.6)
project(CLionQT)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

#打开QT的MOC功能和UI文件处理功能
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

#查找qt的库
find_package(Qt5Widgets)

set(SOURCE_FILES main.cpp MyDialog.cpp MyDialog.h)
add_executable(CLionQT ${SOURCE_FILES})
target_link_libraries(CLionQT Qt5::Widgets)