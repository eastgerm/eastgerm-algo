# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kimdong/Desktop/eastgerm-algo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kimdong/Desktop/eastgerm-algo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/eastgerm_algo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/eastgerm_algo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/eastgerm_algo.dir/flags.make

CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.o: CMakeFiles/eastgerm_algo.dir/flags.make
CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.o: ../BOJ/1000.\ A+B.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kimdong/Desktop/eastgerm-algo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.o -c "/Users/kimdong/Desktop/eastgerm-algo/BOJ/1000. A+B.cpp"

CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kimdong/Desktop/eastgerm-algo/BOJ/1000. A+B.cpp" > CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.i

CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kimdong/Desktop/eastgerm-algo/BOJ/1000. A+B.cpp" -o CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.s

# Object files for target eastgerm_algo
eastgerm_algo_OBJECTS = \
"CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.o"

# External object files for target eastgerm_algo
eastgerm_algo_EXTERNAL_OBJECTS =

eastgerm_algo: CMakeFiles/eastgerm_algo.dir/BOJ/1000._A+B.cpp.o
eastgerm_algo: CMakeFiles/eastgerm_algo.dir/build.make
eastgerm_algo: CMakeFiles/eastgerm_algo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kimdong/Desktop/eastgerm-algo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable eastgerm_algo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/eastgerm_algo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/eastgerm_algo.dir/build: eastgerm_algo

.PHONY : CMakeFiles/eastgerm_algo.dir/build

CMakeFiles/eastgerm_algo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/eastgerm_algo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/eastgerm_algo.dir/clean

CMakeFiles/eastgerm_algo.dir/depend:
	cd /Users/kimdong/Desktop/eastgerm-algo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kimdong/Desktop/eastgerm-algo /Users/kimdong/Desktop/eastgerm-algo /Users/kimdong/Desktop/eastgerm-algo/cmake-build-debug /Users/kimdong/Desktop/eastgerm-algo/cmake-build-debug /Users/kimdong/Desktop/eastgerm-algo/cmake-build-debug/CMakeFiles/eastgerm_algo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/eastgerm_algo.dir/depend

