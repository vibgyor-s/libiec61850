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
CMAKE_SOURCE_DIR = /home/pi/ws/libiec61850

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/ws/libiec61850

# Include any dependencies generated for this target.
include examples/server_example_control/CMakeFiles/server_example_control.dir/depend.make

# Include the progress variables for this target.
include examples/server_example_control/CMakeFiles/server_example_control.dir/progress.make

# Include the compile flags for this target's objects.
include examples/server_example_control/CMakeFiles/server_example_control.dir/flags.make

examples/server_example_control/CMakeFiles/server_example_control.dir/server_example_control.c.o: examples/server_example_control/CMakeFiles/server_example_control.dir/flags.make
examples/server_example_control/CMakeFiles/server_example_control.dir/server_example_control.c.o: examples/server_example_control/server_example_control.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/ws/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/server_example_control/CMakeFiles/server_example_control.dir/server_example_control.c.o"
	cd /home/pi/ws/libiec61850/examples/server_example_control && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/server_example_control.dir/server_example_control.c.o -c /home/pi/ws/libiec61850/examples/server_example_control/server_example_control.c

examples/server_example_control/CMakeFiles/server_example_control.dir/server_example_control.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/server_example_control.dir/server_example_control.c.i"
	cd /home/pi/ws/libiec61850/examples/server_example_control && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/ws/libiec61850/examples/server_example_control/server_example_control.c > CMakeFiles/server_example_control.dir/server_example_control.c.i

examples/server_example_control/CMakeFiles/server_example_control.dir/server_example_control.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/server_example_control.dir/server_example_control.c.s"
	cd /home/pi/ws/libiec61850/examples/server_example_control && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/ws/libiec61850/examples/server_example_control/server_example_control.c -o CMakeFiles/server_example_control.dir/server_example_control.c.s

examples/server_example_control/CMakeFiles/server_example_control.dir/static_model.c.o: examples/server_example_control/CMakeFiles/server_example_control.dir/flags.make
examples/server_example_control/CMakeFiles/server_example_control.dir/static_model.c.o: examples/server_example_control/static_model.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/ws/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object examples/server_example_control/CMakeFiles/server_example_control.dir/static_model.c.o"
	cd /home/pi/ws/libiec61850/examples/server_example_control && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/server_example_control.dir/static_model.c.o -c /home/pi/ws/libiec61850/examples/server_example_control/static_model.c

examples/server_example_control/CMakeFiles/server_example_control.dir/static_model.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/server_example_control.dir/static_model.c.i"
	cd /home/pi/ws/libiec61850/examples/server_example_control && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/ws/libiec61850/examples/server_example_control/static_model.c > CMakeFiles/server_example_control.dir/static_model.c.i

examples/server_example_control/CMakeFiles/server_example_control.dir/static_model.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/server_example_control.dir/static_model.c.s"
	cd /home/pi/ws/libiec61850/examples/server_example_control && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/ws/libiec61850/examples/server_example_control/static_model.c -o CMakeFiles/server_example_control.dir/static_model.c.s

# Object files for target server_example_control
server_example_control_OBJECTS = \
"CMakeFiles/server_example_control.dir/server_example_control.c.o" \
"CMakeFiles/server_example_control.dir/static_model.c.o"

# External object files for target server_example_control
server_example_control_EXTERNAL_OBJECTS =

examples/server_example_control/server_example_control: examples/server_example_control/CMakeFiles/server_example_control.dir/server_example_control.c.o
examples/server_example_control/server_example_control: examples/server_example_control/CMakeFiles/server_example_control.dir/static_model.c.o
examples/server_example_control/server_example_control: examples/server_example_control/CMakeFiles/server_example_control.dir/build.make
examples/server_example_control/server_example_control: src/libiec61850.a
examples/server_example_control/server_example_control: hal/libhal.a
examples/server_example_control/server_example_control: examples/server_example_control/CMakeFiles/server_example_control.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/ws/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable server_example_control"
	cd /home/pi/ws/libiec61850/examples/server_example_control && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server_example_control.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/server_example_control/CMakeFiles/server_example_control.dir/build: examples/server_example_control/server_example_control

.PHONY : examples/server_example_control/CMakeFiles/server_example_control.dir/build

examples/server_example_control/CMakeFiles/server_example_control.dir/clean:
	cd /home/pi/ws/libiec61850/examples/server_example_control && $(CMAKE_COMMAND) -P CMakeFiles/server_example_control.dir/cmake_clean.cmake
.PHONY : examples/server_example_control/CMakeFiles/server_example_control.dir/clean

examples/server_example_control/CMakeFiles/server_example_control.dir/depend:
	cd /home/pi/ws/libiec61850 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/ws/libiec61850 /home/pi/ws/libiec61850/examples/server_example_control /home/pi/ws/libiec61850 /home/pi/ws/libiec61850/examples/server_example_control /home/pi/ws/libiec61850/examples/server_example_control/CMakeFiles/server_example_control.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/server_example_control/CMakeFiles/server_example_control.dir/depend

