# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\ThangLM\Proejcts\PatternDesign

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\ThangLM\Proejcts\PatternDesign\build

# Include any dependencies generated for this target.
include Structural/Composite/CMakeFiles/composite.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Structural/Composite/CMakeFiles/composite.dir/compiler_depend.make

# Include the progress variables for this target.
include Structural/Composite/CMakeFiles/composite.dir/progress.make

# Include the compile flags for this target's objects.
include Structural/Composite/CMakeFiles/composite.dir/flags.make

Structural/Composite/CMakeFiles/composite.dir/main.cpp.obj: Structural/Composite/CMakeFiles/composite.dir/flags.make
Structural/Composite/CMakeFiles/composite.dir/main.cpp.obj: ../Structural/Composite/main.cpp
Structural/Composite/CMakeFiles/composite.dir/main.cpp.obj: Structural/Composite/CMakeFiles/composite.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\ThangLM\Proejcts\PatternDesign\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Structural/Composite/CMakeFiles/composite.dir/main.cpp.obj"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Structural\Composite && D:\ThangLM\Setups\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Structural/Composite/CMakeFiles/composite.dir/main.cpp.obj -MF CMakeFiles\composite.dir\main.cpp.obj.d -o CMakeFiles\composite.dir\main.cpp.obj -c D:\ThangLM\Proejcts\PatternDesign\Structural\Composite\main.cpp

Structural/Composite/CMakeFiles/composite.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/composite.dir/main.cpp.i"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Structural\Composite && D:\ThangLM\Setups\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\ThangLM\Proejcts\PatternDesign\Structural\Composite\main.cpp > CMakeFiles\composite.dir\main.cpp.i

Structural/Composite/CMakeFiles/composite.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/composite.dir/main.cpp.s"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Structural\Composite && D:\ThangLM\Setups\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\ThangLM\Proejcts\PatternDesign\Structural\Composite\main.cpp -o CMakeFiles\composite.dir\main.cpp.s

# Object files for target composite
composite_OBJECTS = \
"CMakeFiles/composite.dir/main.cpp.obj"

# External object files for target composite
composite_EXTERNAL_OBJECTS =

Structural/Composite/composite.exe: Structural/Composite/CMakeFiles/composite.dir/main.cpp.obj
Structural/Composite/composite.exe: Structural/Composite/CMakeFiles/composite.dir/build.make
Structural/Composite/composite.exe: Structural/Composite/CMakeFiles/composite.dir/linklibs.rsp
Structural/Composite/composite.exe: Structural/Composite/CMakeFiles/composite.dir/objects1.rsp
Structural/Composite/composite.exe: Structural/Composite/CMakeFiles/composite.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\ThangLM\Proejcts\PatternDesign\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable composite.exe"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Structural\Composite && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\composite.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Structural/Composite/CMakeFiles/composite.dir/build: Structural/Composite/composite.exe
.PHONY : Structural/Composite/CMakeFiles/composite.dir/build

Structural/Composite/CMakeFiles/composite.dir/clean:
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Structural\Composite && $(CMAKE_COMMAND) -P CMakeFiles\composite.dir\cmake_clean.cmake
.PHONY : Structural/Composite/CMakeFiles/composite.dir/clean

Structural/Composite/CMakeFiles/composite.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\ThangLM\Proejcts\PatternDesign D:\ThangLM\Proejcts\PatternDesign\Structural\Composite D:\ThangLM\Proejcts\PatternDesign\build D:\ThangLM\Proejcts\PatternDesign\build\Structural\Composite D:\ThangLM\Proejcts\PatternDesign\build\Structural\Composite\CMakeFiles\composite.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Structural/Composite/CMakeFiles/composite.dir/depend

