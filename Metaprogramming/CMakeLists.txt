

cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)

project(idioms)

file(GLOB SOURCES *.cpp)

set(SOURCES variadic_template remove_const concepts)
foreach (var ${SOURCES})
    add_executable(${var} ${var}.cpp)
endforeach ()

