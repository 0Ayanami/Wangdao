# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = D:\CLion\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\CLion\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\cppExam

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\cppExam\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pra9_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pra9_2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pra9_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pra9_2.dir/flags.make

CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.obj: CMakeFiles/pra9_2.dir/flags.make
CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.obj: ../ch9/pra9_2.cpp
CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.obj: CMakeFiles/pra9_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.obj"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.obj -MF CMakeFiles\pra9_2.dir\ch9\pra9_2.cpp.obj.d -o CMakeFiles\pra9_2.dir\ch9\pra9_2.cpp.obj -c D:\cppExam\ch9\pra9_2.cpp

CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.i"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cppExam\ch9\pra9_2.cpp > CMakeFiles\pra9_2.dir\ch9\pra9_2.cpp.i

CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.s"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cppExam\ch9\pra9_2.cpp -o CMakeFiles\pra9_2.dir\ch9\pra9_2.cpp.s

# Object files for target pra9_2
pra9_2_OBJECTS = \
"CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.obj"

# External object files for target pra9_2
pra9_2_EXTERNAL_OBJECTS =

pra9_2.exe: CMakeFiles/pra9_2.dir/ch9/pra9_2.cpp.obj
pra9_2.exe: CMakeFiles/pra9_2.dir/build.make
pra9_2.exe: CMakeFiles/pra9_2.dir/linklibs.rsp
pra9_2.exe: CMakeFiles/pra9_2.dir/objects1.rsp
pra9_2.exe: CMakeFiles/pra9_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pra9_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pra9_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pra9_2.dir/build: pra9_2.exe
.PHONY : CMakeFiles/pra9_2.dir/build

CMakeFiles/pra9_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pra9_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pra9_2.dir/clean

CMakeFiles/pra9_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cppExam D:\cppExam D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug\CMakeFiles\pra9_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pra9_2.dir/depend

