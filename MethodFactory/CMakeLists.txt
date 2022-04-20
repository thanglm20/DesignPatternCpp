

cmake_minimum_required(VERSION 3.10)

project(method_factory)

file(GLOB SOURCES *.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

