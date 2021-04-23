cmake_minimum_required(VERSION 2.8)
project(Game)

set(CMAKE_CXX_STANDARD 20)

add_executable(Game ${PROJECT_SOURCE_DIR}/main.cpp ${PROJECT_SOURCE_DIR}/Game/Unit.cpp ${PROJECT_SOURCE_DIR}/Game/Unit.h
        ${PROJECT_SOURCE_DIR}/Game/UnitFactory.cpp ${PROJECT_SOURCE_DIR}/Game/UnitFactory.h ${PROJECT_SOURCE_DIR}/Game/Knight.cpp ${PROJECT_SOURCE_DIR}/Game/Knight.h
        ${PROJECT_SOURCE_DIR}/Game/Human.cpp ${PROJECT_SOURCE_DIR}/Game/Human.h ${PROJECT_SOURCE_DIR}/Game/Princess.cpp ${PROJECT_SOURCE_DIR}/Game/Princess.h
        ${PROJECT_SOURCE_DIR}/Game/Magician.cpp ${PROJECT_SOURCE_DIR}/Game/Magician.h ${PROJECT_SOURCE_DIR}/Game/Monster.cpp ${PROJECT_SOURCE_DIR}/Game/Monster.h)
