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
include CMakeFiles/pra15.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pra15.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pra15.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pra15.dir/flags.make

CMakeFiles/pra15.dir/hust/pra15.cpp.obj: CMakeFiles/pra15.dir/flags.make
CMakeFiles/pra15.dir/hust/pra15.cpp.obj: ../hust/pra15.cpp
CMakeFiles/pra15.dir/hust/pra15.cpp.obj: CMakeFiles/pra15.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pra15.dir/hust/pra15.cpp.obj"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pra15.dir/hust/pra15.cpp.obj -MF CMakeFiles\pra15.dir\hust\pra15.cpp.obj.d -o CMakeFiles\pra15.dir\hust\pra15.cpp.obj -c D:\cppExam\hust\pra15.cpp

CMakeFiles/pra15.dir/hust/pra15.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pra15.dir/hust/pra15.cpp.i"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cppExam\hust\pra15.cpp > CMakeFiles\pra15.dir\hust\pra15.cpp.i

CMakeFiles/pra15.dir/hust/pra15.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pra15.dir/hust/pra15.cpp.s"
	D:\x86_64-8.1.0-release-win32-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cppExam\hust\pra15.cpp -o CMakeFiles\pra15.dir\hust\pra15.cpp.s

# Object files for target pra15
pra15_OBJECTS = \
"CMakeFiles/pra15.dir/hust/pra15.cpp.obj"

# External object files for target pra15
pra15_EXTERNAL_OBJECTS =

pra15.exe: CMakeFiles/pra15.dir/hust/pra15.cpp.obj
pra15.exe: CMakeFiles/pra15.dir/build.make
pra15.exe: CMakeFiles/pra15.dir/linklibs.rsp
pra15.exe: CMakeFiles/pra15.dir/objects1.rsp
pra15.exe: CMakeFiles/pra15.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cppExam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pra15.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pra15.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pra15.dir/build: pra15.exe
.PHONY : CMakeFiles/pra15.dir/build

CMakeFiles/pra15.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pra15.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pra15.dir/clean

CMakeFiles/pra15.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cppExam D:\cppExam D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug D:\cppExam\cmake-build-debug\CMakeFiles\pra15.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pra15.dir/depend

