

cmake_minimum_required(VERSION 3.10)

project(idioms)

file(GLOB SOURCES *.cpp)

set(SOURCES variadic_template)
foreach (var ${SOURCES})
    add_executable(${var} ${var}.cpp)
endforeach ()

