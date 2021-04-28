cmake_minimum_required(VERSION 3.0)
project(Game VERSION 1.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/library)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_executable(Game main.cpp)
target_link_libraries(Game Library)
