cmake_minimum_required(VERSION 3.9)
project(qttest)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")


find_package(Qt5Widgets)

include_directories(scintilla/include)
include_directories(scintilla/qt/ScintillaEditBase)
link_libraries("/home/syys/CLionProjects/qttest/scintilla/bin/libScintillaEdit.so.4.0.3")


add_executable(qttest main.cpp notepad.h notepad.cpp Utils.h Utils.cpp QBuffer.h config.h Utf8.h)

target_link_libraries(qttest Qt5::Widgets)