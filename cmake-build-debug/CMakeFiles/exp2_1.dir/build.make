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
include CMakeFiles/exp2_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/exp2_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/exp2_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exp2_1.dir/flags.make

CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.obj: CMakeFiles/exp2_1.dir/flags.make
CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.obj: ../ch2/exp2_1.cpp
CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.obj: CMakeFiles/exp2_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.obj"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.obj -MF CMakeFiles\exp2_1.dir\ch2\exp2_1.cpp.obj.d -o CMakeFiles\exp2_1.dir\ch2\exp2_1.cpp.obj -c D:\cppExam\ch2\exp2_1.cpp

CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.i"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cppExam\ch2\exp2_1.cpp > CMakeFiles\exp2_1.dir\ch2\exp2_1.cpp.i

CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.s"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cppExam\ch2\exp2_1.cpp -o CMakeFiles\exp2_1.dir\ch2\exp2_1.cpp.s

# Object files for target exp2_1
exp2_1_OBJECTS = \
"CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.obj"

# External object files for target exp2_1
exp2_1_EXTERNAL_OBJECTS =

exp2_1.exe: CMakeFiles/exp2_1.dir/ch2/exp2_1.cpp.obj
exp2_1.exe: CMakeFiles/exp2_1.dir/build.make
exp2_1.exe: CMakeFiles/exp2_1.dir/linklibs.rsp
exp2_1.exe: CMakeFiles/exp2_1.dir/objects1.rsp
exp2_1.exe: CMakeFiles/exp2_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exp2_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exp2_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exp2_1.dir/build: exp2_1.exe
.PHONY : CMakeFiles/exp2_1.dir/build

CMakeFiles/exp2_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exp2_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exp2_1.dir/clean

CMakeFiles/exp2_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cppExam D:\cppExam D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug\CMakeFiles\exp2_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exp2_1.dir/depend

