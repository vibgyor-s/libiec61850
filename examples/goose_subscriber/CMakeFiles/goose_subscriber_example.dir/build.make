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
include examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/depend.make

# Include the progress variables for this target.
include examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/progress.make

# Include the compile flags for this target's objects.
include examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/flags.make

examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.o: examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/flags.make
examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.o: examples/goose_subscriber/goose_subscriber_example.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/ws_vibsin/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.o"
	cd /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.o -c /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber/goose_subscriber_example.c

examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.i"
	cd /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber/goose_subscriber_example.c > CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.i

examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.s"
	cd /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber/goose_subscriber_example.c -o CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.s

# Object files for target goose_subscriber_example
goose_subscriber_example_OBJECTS = \
"CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.o"

# External object files for target goose_subscriber_example
goose_subscriber_example_EXTERNAL_OBJECTS =

examples/goose_subscriber/goose_subscriber_example: examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/goose_subscriber_example.c.o
examples/goose_subscriber/goose_subscriber_example: examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/build.make
examples/goose_subscriber/goose_subscriber_example: src/libiec61850.a
examples/goose_subscriber/goose_subscriber_example: hal/libhal.a
examples/goose_subscriber/goose_subscriber_example: examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/ws_vibsin/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable goose_subscriber_example"
	cd /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/goose_subscriber_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/build: examples/goose_subscriber/goose_subscriber_example

.PHONY : examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/build

examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/clean:
	cd /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber && $(CMAKE_COMMAND) -P CMakeFiles/goose_subscriber_example.dir/cmake_clean.cmake
.PHONY : examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/clean

examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/depend:
	cd /home/pi/ws_vibsin/libiec61850 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/ws_vibsin/libiec61850 /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber /home/pi/ws_vibsin/libiec61850 /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber /home/pi/ws_vibsin/libiec61850/examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/goose_subscriber/CMakeFiles/goose_subscriber_example.dir/depend

