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
include Behavioral/Interpreter/CMakeFiles/interpreter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Behavioral/Interpreter/CMakeFiles/interpreter.dir/compiler_depend.make

# Include the progress variables for this target.
include Behavioral/Interpreter/CMakeFiles/interpreter.dir/progress.make

# Include the compile flags for this target's objects.
include Behavioral/Interpreter/CMakeFiles/interpreter.dir/flags.make

Behavioral/Interpreter/CMakeFiles/interpreter.dir/main.cpp.obj: Behavioral/Interpreter/CMakeFiles/interpreter.dir/flags.make
Behavioral/Interpreter/CMakeFiles/interpreter.dir/main.cpp.obj: ../Behavioral/Interpreter/main.cpp
Behavioral/Interpreter/CMakeFiles/interpreter.dir/main.cpp.obj: Behavioral/Interpreter/CMakeFiles/interpreter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\ThangLM\Proejcts\PatternDesign\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Behavioral/Interpreter/CMakeFiles/interpreter.dir/main.cpp.obj"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Interpreter && D:\ThangLM\Setups\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Behavioral/Interpreter/CMakeFiles/interpreter.dir/main.cpp.obj -MF CMakeFiles\interpreter.dir\main.cpp.obj.d -o CMakeFiles\interpreter.dir\main.cpp.obj -c D:\ThangLM\Proejcts\PatternDesign\Behavioral\Interpreter\main.cpp

Behavioral/Interpreter/CMakeFiles/interpreter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/interpreter.dir/main.cpp.i"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Interpreter && D:\ThangLM\Setups\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\ThangLM\Proejcts\PatternDesign\Behavioral\Interpreter\main.cpp > CMakeFiles\interpreter.dir\main.cpp.i

Behavioral/Interpreter/CMakeFiles/interpreter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/interpreter.dir/main.cpp.s"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Interpreter && D:\ThangLM\Setups\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\ThangLM\Proejcts\PatternDesign\Behavioral\Interpreter\main.cpp -o CMakeFiles\interpreter.dir\main.cpp.s

# Object files for target interpreter
interpreter_OBJECTS = \
"CMakeFiles/interpreter.dir/main.cpp.obj"

# External object files for target interpreter
interpreter_EXTERNAL_OBJECTS =

Behavioral/Interpreter/interpreter.exe: Behavioral/Interpreter/CMakeFiles/interpreter.dir/main.cpp.obj
Behavioral/Interpreter/interpreter.exe: Behavioral/Interpreter/CMakeFiles/interpreter.dir/build.make
Behavioral/Interpreter/interpreter.exe: Behavioral/Interpreter/CMakeFiles/interpreter.dir/linklibs.rsp
Behavioral/Interpreter/interpreter.exe: Behavioral/Interpreter/CMakeFiles/interpreter.dir/objects1.rsp
Behavioral/Interpreter/interpreter.exe: Behavioral/Interpreter/CMakeFiles/interpreter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\ThangLM\Proejcts\PatternDesign\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable interpreter.exe"
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Interpreter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\interpreter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Behavioral/Interpreter/CMakeFiles/interpreter.dir/build: Behavioral/Interpreter/interpreter.exe
.PHONY : Behavioral/Interpreter/CMakeFiles/interpreter.dir/build

Behavioral/Interpreter/CMakeFiles/interpreter.dir/clean:
	cd /d D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Interpreter && $(CMAKE_COMMAND) -P CMakeFiles\interpreter.dir\cmake_clean.cmake
.PHONY : Behavioral/Interpreter/CMakeFiles/interpreter.dir/clean

Behavioral/Interpreter/CMakeFiles/interpreter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\ThangLM\Proejcts\PatternDesign D:\ThangLM\Proejcts\PatternDesign\Behavioral\Interpreter D:\ThangLM\Proejcts\PatternDesign\build D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Interpreter D:\ThangLM\Proejcts\PatternDesign\build\Behavioral\Interpreter\CMakeFiles\interpreter.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Behavioral/Interpreter/CMakeFiles/interpreter.dir/depend
