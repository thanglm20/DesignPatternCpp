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
include Behavioral/Strategy/CMakeFiles/strategy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Behavioral/Strategy/CMakeFiles/strategy.dir/compiler_depend.make

# Include the progress variables for this target.
include Behavioral/Strategy/CMakeFiles/strategy.dir/progress.make

# Include the compile flags for this target's objects.
include Behavioral/Strategy/CMakeFiles/strategy.dir/flags.make

Behavioral/Strategy/CMakeFiles/strategy.dir/main.cpp.obj: Behavioral/Strategy/CMakeFiles/strategy.dir/flags.make
Behavioral/Strategy/CMakeFiles/strategy.dir/main.cpp.obj: ../Behavioral/Strategy/main.cpp
Behavioral/Strategy/CMakeFiles/strategy.dir/main.cpp.obj: Behavioral/Strategy/CMakeFiles/strategy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\ThangLM\Proejcts\PatternDesign\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Behavioral/Strategy/CMakeFiles/strategy.dir/main.cpp.obj"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Strategy && D:\ThangLM\Setups\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Behavioral/Strategy/CMakeFiles/strategy.dir/main.cpp.obj -MF CMakeFiles\strategy.dir\main.cpp.obj.d -o CMakeFiles\strategy.dir\main.cpp.obj -c D:\ThangLM\Proejcts\PatternDesign\Behavioral\Strategy\main.cpp

Behavioral/Strategy/CMakeFiles/strategy.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/strategy.dir/main.cpp.i"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Strategy && D:\ThangLM\Setups\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\ThangLM\Proejcts\PatternDesign\Behavioral\Strategy\main.cpp > CMakeFiles\strategy.dir\main.cpp.i

Behavioral/Strategy/CMakeFiles/strategy.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/strategy.dir/main.cpp.s"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Strategy && D:\ThangLM\Setups\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\ThangLM\Proejcts\PatternDesign\Behavioral\Strategy\main.cpp -o CMakeFiles\strategy.dir\main.cpp.s

# Object files for target strategy
strategy_OBJECTS = \
"CMakeFiles/strategy.dir/main.cpp.obj"

# External object files for target strategy
strategy_EXTERNAL_OBJECTS =

Behavioral/Strategy/strategy.exe: Behavioral/Strategy/CMakeFiles/strategy.dir/main.cpp.obj
Behavioral/Strategy/strategy.exe: Behavioral/Strategy/CMakeFiles/strategy.dir/build.make
Behavioral/Strategy/strategy.exe: Behavioral/Strategy/CMakeFiles/strategy.dir/linklibs.rsp
Behavioral/Strategy/strategy.exe: Behavioral/Strategy/CMakeFiles/strategy.dir/objects1.rsp
Behavioral/Strategy/strategy.exe: Behavioral/Strategy/CMakeFiles/strategy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\ThangLM\Proejcts\PatternDesign\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable strategy.exe"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Strategy && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\strategy.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Behavioral/Strategy/CMakeFiles/strategy.dir/build: Behavioral/Strategy/strategy.exe
.PHONY : Behavioral/Strategy/CMakeFiles/strategy.dir/build

Behavioral/Strategy/CMakeFiles/strategy.dir/clean:
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Strategy && $(CMAKE_COMMAND) -P CMakeFiles\strategy.dir\cmake_clean.cmake
.PHONY : Behavioral/Strategy/CMakeFiles/strategy.dir/clean

Behavioral/Strategy/CMakeFiles/strategy.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\ThangLM\Proejcts\PatternDesign D:\ThangLM\Proejcts\PatternDesign\Behavioral\Strategy D:\ThangLM\Proejcts\PatternDesign\build D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Strategy D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Strategy\CMakeFiles\strategy.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Behavioral/Strategy/CMakeFiles/strategy.dir/depend

