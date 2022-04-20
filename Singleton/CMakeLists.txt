

cmake_minimum_required(VERSION 3.10)

project(singleton)

file(GLOB SOURCES *.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} -lpthread)

