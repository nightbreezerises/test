cmake_minimum_required(VERSION 3.14)
project(test)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/workspace/exec)

include_directories($(PROJECT_SOURCE_DIR)/include)

set(CMAKE_CXX_STANDARD 17)

add_executable(app ${SRC})
