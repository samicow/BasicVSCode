cmake_minimum_required(VERSION 3.0.0)
project(maintest)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_FILES main.cpp teste.cpp)

add_executable(maintest ${SOURCE_FILES})

target_include_directories(maintest PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
