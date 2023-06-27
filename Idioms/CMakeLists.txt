

cmake_minimum_required(VERSION 3.10)

project(idioms)

file(GLOB SOURCES *.cpp)

set(SOURCES Piml SFINAE callback_state)
foreach (var ${SOURCES})
    message("Idioms source ${var}")
    add_executable(${var} ${var}.cpp)
endforeach ()

