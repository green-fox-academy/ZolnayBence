cmake_minimum_required(VERSION 3.14)
project(exam_test_Animal_protection)

set(CMAKE_CXX_STANDARD 14)

add_executable(exam_test_Animal_protection main.cpp AnimalShelter.cpp AnimalShelter.h Animal.cpp Animal.h Cat.cpp Cat.h Dog.cpp Dog.h Parrot.cpp Parrot.h)