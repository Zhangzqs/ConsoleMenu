cmake_minimum_required(VERSION 3.17)
project(ConsoleMenu)

set(CMAKE_CXX_STANDARD 17)

add_executable(ConsoleMenu
        Menu.hpp
        Scanner.hpp
        main.cpp)