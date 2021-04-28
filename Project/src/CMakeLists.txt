cmake_minimum_required(VERSION 3.0)

project(Game VERSION 1.1.0 LANGUAGES CXX)


add_library(Library SHARED ${PROJECT_SOURCE_DIR}/Unit.cpp ${PROJECT_SOURCE_DIR}/Human.cpp
        ${PROJECT_SOURCE_DIR}/Knight.cpp ${PROJECT_SOURCE_DIR}/Magician.cpp ${PROJECT_SOURCE_DIR}/Monster.cpp ${PROJECT_SOURCE_DIR}/Princess.cpp
        ${PROJECT_SOURCE_DIR}/UnitFactory.cpp ${PROJECT_SOURCE_DIR}/ComposeUnits.cpp)