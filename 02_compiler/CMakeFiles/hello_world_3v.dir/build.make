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
CMAKE_SOURCE_DIR = /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler

# Include any dependencies generated for this target.
include CMakeFiles/hello_world_3v.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello_world_3v.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello_world_3v.dir/flags.make

CMakeFiles/hello_world_3v.dir/func.cpp.o: CMakeFiles/hello_world_3v.dir/flags.make
CMakeFiles/hello_world_3v.dir/func.cpp.o: func.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello_world_3v.dir/func.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello_world_3v.dir/func.cpp.o -c /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/func.cpp

CMakeFiles/hello_world_3v.dir/func.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_world_3v.dir/func.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/func.cpp > CMakeFiles/hello_world_3v.dir/func.cpp.i

CMakeFiles/hello_world_3v.dir/func.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_world_3v.dir/func.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/func.cpp -o CMakeFiles/hello_world_3v.dir/func.cpp.s

CMakeFiles/hello_world_3v.dir/hello_world.cpp.o: CMakeFiles/hello_world_3v.dir/flags.make
CMakeFiles/hello_world_3v.dir/hello_world.cpp.o: hello_world.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hello_world_3v.dir/hello_world.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello_world_3v.dir/hello_world.cpp.o -c /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/hello_world.cpp

CMakeFiles/hello_world_3v.dir/hello_world.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_world_3v.dir/hello_world.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/hello_world.cpp > CMakeFiles/hello_world_3v.dir/hello_world.cpp.i

CMakeFiles/hello_world_3v.dir/hello_world.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_world_3v.dir/hello_world.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/hello_world.cpp -o CMakeFiles/hello_world_3v.dir/hello_world.cpp.s

# Object files for target hello_world_3v
hello_world_3v_OBJECTS = \
"CMakeFiles/hello_world_3v.dir/func.cpp.o" \
"CMakeFiles/hello_world_3v.dir/hello_world.cpp.o"

# External object files for target hello_world_3v
hello_world_3v_EXTERNAL_OBJECTS =

hello_world_3v: CMakeFiles/hello_world_3v.dir/func.cpp.o
hello_world_3v: CMakeFiles/hello_world_3v.dir/hello_world.cpp.o
hello_world_3v: CMakeFiles/hello_world_3v.dir/build.make
hello_world_3v: CMakeFiles/hello_world_3v.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hello_world_3v"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello_world_3v.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello_world_3v.dir/build: hello_world_3v

.PHONY : CMakeFiles/hello_world_3v.dir/build

CMakeFiles/hello_world_3v.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello_world_3v.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello_world_3v.dir/clean

CMakeFiles/hello_world_3v.dir/depend:
	cd /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler /home/shulga-va/computer_science/2022-polytech-shulga/02_compiler/CMakeFiles/hello_world_3v.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello_world_3v.dir/depend

