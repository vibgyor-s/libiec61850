# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pi/ws_vibsin/libiec61850

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/ws_vibsin/libiec61850

# Include any dependencies generated for this target.
include examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/depend.make

# Include the progress variables for this target.
include examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/progress.make

# Include the compile flags for this target's objects.
include examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/flags.make

examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.o: examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/flags.make
examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.o: examples/sv_publisher/sv_publisher_example.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/ws_vibsin/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.o"
	cd /home/pi/ws_vibsin/libiec61850/examples/sv_publisher && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.o -c /home/pi/ws_vibsin/libiec61850/examples/sv_publisher/sv_publisher_example.c

examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.i"
	cd /home/pi/ws_vibsin/libiec61850/examples/sv_publisher && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/ws_vibsin/libiec61850/examples/sv_publisher/sv_publisher_example.c > CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.i

examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.s"
	cd /home/pi/ws_vibsin/libiec61850/examples/sv_publisher && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/ws_vibsin/libiec61850/examples/sv_publisher/sv_publisher_example.c -o CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.s

# Object files for target sv_publisher_example
sv_publisher_example_OBJECTS = \
"CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.o"

# External object files for target sv_publisher_example
sv_publisher_example_EXTERNAL_OBJECTS =

examples/sv_publisher/sv_publisher_example: examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/sv_publisher_example.c.o
examples/sv_publisher/sv_publisher_example: examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/build.make
examples/sv_publisher/sv_publisher_example: src/libiec61850.a
examples/sv_publisher/sv_publisher_example: hal/libhal.a
examples/sv_publisher/sv_publisher_example: examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/ws_vibsin/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sv_publisher_example"
	cd /home/pi/ws_vibsin/libiec61850/examples/sv_publisher && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sv_publisher_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/build: examples/sv_publisher/sv_publisher_example

.PHONY : examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/build

examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/clean:
	cd /home/pi/ws_vibsin/libiec61850/examples/sv_publisher && $(CMAKE_COMMAND) -P CMakeFiles/sv_publisher_example.dir/cmake_clean.cmake
.PHONY : examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/clean

examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/depend:
	cd /home/pi/ws_vibsin/libiec61850 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/ws_vibsin/libiec61850 /home/pi/ws_vibsin/libiec61850/examples/sv_publisher /home/pi/ws_vibsin/libiec61850 /home/pi/ws_vibsin/libiec61850/examples/sv_publisher /home/pi/ws_vibsin/libiec61850/examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/sv_publisher/CMakeFiles/sv_publisher_example.dir/depend

