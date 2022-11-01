

cmake_minimum_required(VERSION 3.10)

project(singleton_factory)

file(GLOB SOURCES *.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

