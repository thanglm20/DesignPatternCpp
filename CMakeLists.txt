

cmake_minimum_required(VERSION 3.10)

project(PatternDesign)


set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall --std=c++14 -O0 -fPIC" )

add_subdirectory(Creational/FactoryMethod)
add_subdirectory(Creational/Singleton)
add_subdirectory(Creational/Builder)

add_subdirectory(Behavioral/Observer)
add_subdirectory(Behavioral/Strategy)
add_subdirectory(Behavioral/TemplateMethod)
add_subdirectory(Behavioral/Iterator)
add_subdirectory(Behavioral/Command)
add_subdirectory(Behavioral/Interpreter)
add_subdirectory(Behavioral/Visitor)

add_subdirectory(Structural/Decorator)
add_subdirectory(Structural/Adapter)
add_subdirectory(Structural/Facade)
add_subdirectory(Structural/Proxy)
add_subdirectory(Structural/Bridge)
add_subdirectory(Structural/Composite)

add_subdirectory(MultiThread)

add_subdirectory(Idioms)

add_executable(${PROJECT_NAME} main.cpp)