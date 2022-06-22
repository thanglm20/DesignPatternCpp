

cmake_minimum_required(VERSION 3.10)

project(PatternDesign)

add_subdirectory(Creational/FactoryMethod)
add_subdirectory(Creational/Singleton)
add_subdirectory(Creational/Builder)

add_subdirectory(Behavioral/Observer)
add_subdirectory(Behavioral/Strategy)
add_subdirectory(Behavioral/TemplateMethod)
add_subdirectory(Behavioral/Iterator)

add_subdirectory(Structural/Decorator)
add_subdirectory(Structural/Adapter)
add_subdirectory(Structural/Facade)
add_subdirectory(Structural/Proxy)

add_executable(${PROJECT_NAME} main.cpp)