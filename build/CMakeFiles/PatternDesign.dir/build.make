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
include CMakeFiles/PatternDesign.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PatternDesign.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PatternDesign.dir/flags.make

CMakeFiles/PatternDesign.dir/main.cpp.o: CMakeFiles/PatternDesign.dir/flags.make
CMakeFiles/PatternDesign.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PatternDesign.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PatternDesign.dir/main.cpp.o -c /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/main.cpp

CMakeFiles/PatternDesign.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PatternDesign.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/main.cpp > CMakeFiles/PatternDesign.dir/main.cpp.i

CMakeFiles/PatternDesign.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PatternDesign.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/main.cpp -o CMakeFiles/PatternDesign.dir/main.cpp.s

# Object files for target PatternDesign
PatternDesign_OBJECTS = \
"CMakeFiles/PatternDesign.dir/main.cpp.o"

# External object files for target PatternDesign
PatternDesign_EXTERNAL_OBJECTS =

PatternDesign: CMakeFiles/PatternDesign.dir/main.cpp.o
PatternDesign: CMakeFiles/PatternDesign.dir/build.make
PatternDesign: CMakeFiles/PatternDesign.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PatternDesign"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PatternDesign.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PatternDesign.dir/build: PatternDesign

.PHONY : CMakeFiles/PatternDesign.dir/build

CMakeFiles/PatternDesign.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PatternDesign.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PatternDesign.dir/clean

CMakeFiles/PatternDesign.dir/depend:
	cd /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/thanglm/Data/ThangLM/Proejcts/PatternDesign /media/thanglm/Data/ThangLM/Proejcts/PatternDesign /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build /media/thanglm/Data/ThangLM/Proejcts/PatternDesign/build/CMakeFiles/PatternDesign.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PatternDesign.dir/depend

