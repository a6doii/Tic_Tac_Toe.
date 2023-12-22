cmake_minimum_required(VERSION 3.24)
project(A3_Task2_3_B_S23_20220878)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(A3_Task2_3_B_S23_20220878
        include/BoardGame_Classes.hpp
        src/four_in_a_row.cpp
        src/GameManager.cpp
        src/Player.cpp
        src/Pyramic_X_O.cpp
        src/RandomPlayer.cpp
        src/RandomPlayer_four.cpp
        src/X_O_App.cpp
        src/X_O_Board.cpp src/AI_Player_four.cpp)
