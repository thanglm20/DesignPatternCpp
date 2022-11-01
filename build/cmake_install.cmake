# Install script for directory: D:/ThangLM/Proejcts/PatternDesign

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/PatternDesign")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/ThangLM/Proejcts/PatternDesign/build/Creational/FactoryMethod/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Creational/Singleton/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Creational/Builder/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Behavioral/Observer/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Behavioral/Strategy/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Behavioral/TemplateMethod/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Behavioral/Iterator/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Behavioral/Command/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Behavioral/Interpreter/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Behavioral/Visitor/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Structural/Decorator/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Structural/Adapter/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Structural/Facade/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Structural/Proxy/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Structural/Bridge/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/Structural/Composite/cmake_install.cmake")
  include("D:/ThangLM/Proejcts/PatternDesign/build/MultiThread/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/ThangLM/Proejcts/PatternDesign/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
