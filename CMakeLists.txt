cmake_minimum_required(VERSION 3.0.0)    # CMake version check
project(maintest)                        # Create project "simple_example"
set(CMAKE_CXX_STANDARD 20)

# Add main.cpp file of the project root directory as a source file
set(SOURCE_FILES src/main.cpp src/teste.cpp)

add_executable(maintest ${SOURCE_FILES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)