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
CMAKE_SOURCE_DIR = /media/thanglm/Thanglm/Proejcts/PatternDesign

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/thanglm/Thanglm/Proejcts/PatternDesign/build

# Include any dependencies generated for this target.
include MethodFactory/CMakeFiles/method_factory.dir/depend.make

# Include the progress variables for this target.
include MethodFactory/CMakeFiles/method_factory.dir/progress.make

# Include the compile flags for this target's objects.
include MethodFactory/CMakeFiles/method_factory.dir/flags.make

MethodFactory/CMakeFiles/method_factory.dir/main.cpp.o: MethodFactory/CMakeFiles/method_factory.dir/flags.make
MethodFactory/CMakeFiles/method_factory.dir/main.cpp.o: ../MethodFactory/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/thanglm/Thanglm/Proejcts/PatternDesign/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object MethodFactory/CMakeFiles/method_factory.dir/main.cpp.o"
	cd /media/thanglm/Thanglm/Proejcts/PatternDesign/build/MethodFactory && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/method_factory.dir/main.cpp.o -c /media/thanglm/Thanglm/Proejcts/PatternDesign/MethodFactory/main.cpp

MethodFactory/CMakeFiles/method_factory.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/method_factory.dir/main.cpp.i"
	cd /media/thanglm/Thanglm/Proejcts/PatternDesign/build/MethodFactory && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/thanglm/Thanglm/Proejcts/PatternDesign/MethodFactory/main.cpp > CMakeFiles/method_factory.dir/main.cpp.i

MethodFactory/CMakeFiles/method_factory.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/method_factory.dir/main.cpp.s"
	cd /media/thanglm/Thanglm/Proejcts/PatternDesign/build/MethodFactory && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/thanglm/Thanglm/Proejcts/PatternDesign/MethodFactory/main.cpp -o CMakeFiles/method_factory.dir/main.cpp.s

# Object files for target method_factory
method_factory_OBJECTS = \
"CMakeFiles/method_factory.dir/main.cpp.o"

# External object files for target method_factory
method_factory_EXTERNAL_OBJECTS =

MethodFactory/method_factory: MethodFactory/CMakeFiles/method_factory.dir/main.cpp.o
MethodFactory/method_factory: MethodFactory/CMakeFiles/method_factory.dir/build.make
MethodFactory/method_factory: MethodFactory/CMakeFiles/method_factory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/thanglm/Thanglm/Proejcts/PatternDesign/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable method_factory"
	cd /media/thanglm/Thanglm/Proejcts/PatternDesign/build/MethodFactory && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/method_factory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
MethodFactory/CMakeFiles/method_factory.dir/build: MethodFactory/method_factory

.PHONY : MethodFactory/CMakeFiles/method_factory.dir/build

MethodFactory/CMakeFiles/method_factory.dir/clean:
	cd /media/thanglm/Thanglm/Proejcts/PatternDesign/build/MethodFactory && $(CMAKE_COMMAND) -P CMakeFiles/method_factory.dir/cmake_clean.cmake
.PHONY : MethodFactory/CMakeFiles/method_factory.dir/clean

MethodFactory/CMakeFiles/method_factory.dir/depend:
	cd /media/thanglm/Thanglm/Proejcts/PatternDesign/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/thanglm/Thanglm/Proejcts/PatternDesign /media/thanglm/Thanglm/Proejcts/PatternDesign/MethodFactory /media/thanglm/Thanglm/Proejcts/PatternDesign/build /media/thanglm/Thanglm/Proejcts/PatternDesign/build/MethodFactory /media/thanglm/Thanglm/Proejcts/PatternDesign/build/MethodFactory/CMakeFiles/method_factory.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : MethodFactory/CMakeFiles/method_factory.dir/depend
