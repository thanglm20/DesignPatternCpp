# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/thanglm/Data/ThangLM/Proejcts/PatternDesign

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build

# Include any dependencies generated for this target.
include Structural/Decorator/CMakeFiles/decorator.dir/depend.make

# Include the progress variables for this target.
include Structural/Decorator/CMakeFiles/decorator.dir/progress.make

# Include the compile flags for this target's objects.
include Structural/Decorator/CMakeFiles/decorator.dir/flags.make

Structural/Decorator/CMakeFiles/decorator.dir/main.cpp.o: Structural/Decorator/CMakeFiles/decorator.dir/flags.make
Structural/Decorator/CMakeFiles/decorator.dir/main.cpp.o: ../Structural/Decorator/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Structural/Decorator/CMakeFiles/decorator.dir/main.cpp.o"
	cd /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/Structural/Decorator && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/decorator.dir/main.cpp.o -c /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/Structural/Decorator/main.cpp

Structural/Decorator/CMakeFiles/decorator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/decorator.dir/main.cpp.i"
	cd /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/Structural/Decorator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/Structural/Decorator/main.cpp > CMakeFiles/decorator.dir/main.cpp.i

Structural/Decorator/CMakeFiles/decorator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/decorator.dir/main.cpp.s"
	cd /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/Structural/Decorator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/Structural/Decorator/main.cpp -o CMakeFiles/decorator.dir/main.cpp.s

# Object files for target decorator
decorator_OBJECTS = \
"CMakeFiles/decorator.dir/main.cpp.o"

# External object files for target decorator
decorator_EXTERNAL_OBJECTS =

Structural/Decorator/decorator: Structural/Decorator/CMakeFiles/decorator.dir/main.cpp.o
Structural/Decorator/decorator: Structural/Decorator/CMakeFiles/decorator.dir/build.make
Structural/Decorator/decorator: Structural/Decorator/CMakeFiles/decorator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable decorator"
	cd /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/Structural/Decorator && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/decorator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Structural/Decorator/CMakeFiles/decorator.dir/build: Structural/Decorator/decorator

.PHONY : Structural/Decorator/CMakeFiles/decorator.dir/build

Structural/Decorator/CMakeFiles/decorator.dir/clean:
	cd /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/Structural/Decorator && $(CMAKE_COMMAND) -P CMakeFiles/decorator.dir/cmake_clean.cmake
.PHONY : Structural/Decorator/CMakeFiles/decorator.dir/clean

Structural/Decorator/CMakeFiles/decorator.dir/depend:
	cd /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/thanglm/Data/ThangLM/Proejcts/PatternDesign /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/Structural/Decorator /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/Structural/Decorator /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/Structural/Decorator/CMakeFiles/decorator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Structural/Decorator/CMakeFiles/decorator.dir/depend

