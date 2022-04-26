

cmake_minimum_required(VERSION 3.10)

project(builder)

file(GLOB SOURCES *.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

