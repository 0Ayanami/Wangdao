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
include CMakeFiles/ky36.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ky36.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ky36.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ky36.dir/flags.make

CMakeFiles/ky36.dir/ky/ky36.cpp.obj: CMakeFiles/ky36.dir/flags.make
CMakeFiles/ky36.dir/ky/ky36.cpp.obj: ../ky/ky36.cpp
CMakeFiles/ky36.dir/ky/ky36.cpp.obj: CMakeFiles/ky36.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ky36.dir/ky/ky36.cpp.obj"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ky36.dir/ky/ky36.cpp.obj -MF CMakeFiles\ky36.dir\ky\ky36.cpp.obj.d -o CMakeFiles\ky36.dir\ky\ky36.cpp.obj -c D:\cppExam\ky\ky36.cpp

CMakeFiles/ky36.dir/ky/ky36.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ky36.dir/ky/ky36.cpp.i"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cppExam\ky\ky36.cpp > CMakeFiles\ky36.dir\ky\ky36.cpp.i

CMakeFiles/ky36.dir/ky/ky36.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ky36.dir/ky/ky36.cpp.s"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cppExam\ky\ky36.cpp -o CMakeFiles\ky36.dir\ky\ky36.cpp.s

# Object files for target ky36
ky36_OBJECTS = \
"CMakeFiles/ky36.dir/ky/ky36.cpp.obj"

# External object files for target ky36
ky36_EXTERNAL_OBJECTS =

ky36.exe: CMakeFiles/ky36.dir/ky/ky36.cpp.obj
ky36.exe: CMakeFiles/ky36.dir/build.make
ky36.exe: CMakeFiles/ky36.dir/linklibs.rsp
ky36.exe: CMakeFiles/ky36.dir/objects1.rsp
ky36.exe: CMakeFiles/ky36.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ky36.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ky36.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ky36.dir/build: ky36.exe
.PHONY : CMakeFiles/ky36.dir/build

CMakeFiles/ky36.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ky36.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ky36.dir/clean

CMakeFiles/ky36.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cppExam D:\cppExam D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug\CMakeFiles\ky36.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ky36.dir/depend

