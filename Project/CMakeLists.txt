cmake_minimum_required(VERSION 3.0)
project(Game VERSION 1.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_FILES ${PROJECT_SOURCE_DIR}/main.cpp
        ${PROJECT_SOURCE_DIR}/Game/ComposeUnits.cpp
        ${PROJECT_SOURCE_DIR}/Game/Human.cpp
        ${PROJECT_SOURCE_DIR}/Game/Knight.cpp
        ${PROJECT_SOURCE_DIR}/Game/Magician.cpp
        ${PROJECT_SOURCE_DIR}/Game/Monster.cpp
        ${PROJECT_SOURCE_DIR}/Game/Princess.cpp
        ${PROJECT_SOURCE_DIR}/Game/Unit.cpp
        ${PROJECT_SOURCE_DIR}/Game/UnitFactory.cpp)

#add_subdirectory(${PROJECT_SOURCE_DIR}/Game ${PROJECT_SOURCE_DIR}/build)
add_executable(Game ${SOURCE_FILES})
#target_link_libraries(Game Library)
