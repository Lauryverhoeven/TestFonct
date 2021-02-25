cmake_minimum_required(VERSION 3.17)
project(TestFonct)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestFonct Factorielle/main.cpp Factorielle/demander_nombre.cpp Factorielle/demander_nombre.h)