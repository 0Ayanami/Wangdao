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
include CMakeFiles/exp6_6.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/exp6_6.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/exp6_6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exp6_6.dir/flags.make

CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.obj: CMakeFiles/exp6_6.dir/flags.make
CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.obj: ../ch6/exp6_6.cpp
CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.obj: CMakeFiles/exp6_6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.obj"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.obj -MF CMakeFiles\exp6_6.dir\ch6\exp6_6.cpp.obj.d -o CMakeFiles\exp6_6.dir\ch6\exp6_6.cpp.obj -c D:\cppExam\ch6\exp6_6.cpp

CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.i"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cppExam\ch6\exp6_6.cpp > CMakeFiles\exp6_6.dir\ch6\exp6_6.cpp.i

CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.s"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cppExam\ch6\exp6_6.cpp -o CMakeFiles\exp6_6.dir\ch6\exp6_6.cpp.s

# Object files for target exp6_6
exp6_6_OBJECTS = \
"CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.obj"

# External object files for target exp6_6
exp6_6_EXTERNAL_OBJECTS =

exp6_6.exe: CMakeFiles/exp6_6.dir/ch6/exp6_6.cpp.obj
exp6_6.exe: CMakeFiles/exp6_6.dir/build.make
exp6_6.exe: CMakeFiles/exp6_6.dir/linklibs.rsp
exp6_6.exe: CMakeFiles/exp6_6.dir/objects1.rsp
exp6_6.exe: CMakeFiles/exp6_6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exp6_6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exp6_6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exp6_6.dir/build: exp6_6.exe
.PHONY : CMakeFiles/exp6_6.dir/build

CMakeFiles/exp6_6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exp6_6.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exp6_6.dir/clean

CMakeFiles/exp6_6.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cppExam D:\cppExam D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug\CMakeFiles\exp6_6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exp6_6.dir/depend

