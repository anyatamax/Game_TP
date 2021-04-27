cmake_minimum_required(VERSION 3.0)
project(Game VERSION 1.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(${PROJECT_SOURCE_DIR}/Game ${PROJECT_SOURCE_DIR}/build)
add_executable(Game ${PROJECT_SOURCE_DIR}/main.cpp)
target_link_libraries(Game Library)
