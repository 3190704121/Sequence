cmake_minimum_required(VERSION 3.20)
project(Sequence)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sequence main.cpp "Static_allocation.cpp" "Static_allocation.h" Dynamic_allocation.cpp Dynamic_allocation.h Header_file.h)
