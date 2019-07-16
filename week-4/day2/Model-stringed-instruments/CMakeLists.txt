cmake_minimum_required(VERSION 3.14)
project(Model_stringed_instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(Model_stringed_instruments StringedInstruments.h Instrument.cpp Instrument.h StringedInstruments.cpp StringedInstruments.h ElectricGuitar.cpp ElectricGuitar.h BassGuitar.cpp BassGuitar.h Violin.cpp Violin.h main.cpp)