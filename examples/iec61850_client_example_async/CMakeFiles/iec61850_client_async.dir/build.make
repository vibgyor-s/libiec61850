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
include examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/depend.make

# Include the progress variables for this target.
include examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/progress.make

# Include the compile flags for this target's objects.
include examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/flags.make

examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/client_example_async.c.o: examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/flags.make
examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/client_example_async.c.o: examples/iec61850_client_example_async/client_example_async.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/ws_vibsin/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/client_example_async.c.o"
	cd /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/iec61850_client_async.dir/client_example_async.c.o -c /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async/client_example_async.c

examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/client_example_async.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/iec61850_client_async.dir/client_example_async.c.i"
	cd /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async/client_example_async.c > CMakeFiles/iec61850_client_async.dir/client_example_async.c.i

examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/client_example_async.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/iec61850_client_async.dir/client_example_async.c.s"
	cd /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async/client_example_async.c -o CMakeFiles/iec61850_client_async.dir/client_example_async.c.s

# Object files for target iec61850_client_async
iec61850_client_async_OBJECTS = \
"CMakeFiles/iec61850_client_async.dir/client_example_async.c.o"

# External object files for target iec61850_client_async
iec61850_client_async_EXTERNAL_OBJECTS =

examples/iec61850_client_example_async/iec61850_client_async: examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/client_example_async.c.o
examples/iec61850_client_example_async/iec61850_client_async: examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/build.make
examples/iec61850_client_example_async/iec61850_client_async: src/libiec61850.a
examples/iec61850_client_example_async/iec61850_client_async: hal/libhal.a
examples/iec61850_client_example_async/iec61850_client_async: examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/ws_vibsin/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable iec61850_client_async"
	cd /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/iec61850_client_async.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/build: examples/iec61850_client_example_async/iec61850_client_async

.PHONY : examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/build

examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/clean:
	cd /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async && $(CMAKE_COMMAND) -P CMakeFiles/iec61850_client_async.dir/cmake_clean.cmake
.PHONY : examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/clean

examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/depend:
	cd /home/pi/ws_vibsin/libiec61850 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/ws_vibsin/libiec61850 /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async /home/pi/ws_vibsin/libiec61850 /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async /home/pi/ws_vibsin/libiec61850/examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/iec61850_client_example_async/CMakeFiles/iec61850_client_async.dir/depend

