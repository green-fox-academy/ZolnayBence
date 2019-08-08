cmake_minimum_required(VERSION 3.14)
project(exercises)

set(CMAKE_CXX_STANDARD 14)

add_executable(exercises main.cpp Garden.cpp Garden.h Flower.cpp Flower.h Tree.cpp Tree.h)