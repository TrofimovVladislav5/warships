cmake_minimum_required(VERSION 3.22.1)
project(warships)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(warships 
        src/main.cpp
        src/ShipManager.cpp
        src/Ship.cpp
        src/Segment.cpp
        src/GameField.cpp
        src/Structures.cpp
        src/GameFieldView.cpp
        src/ShipManagerView.cpp
)