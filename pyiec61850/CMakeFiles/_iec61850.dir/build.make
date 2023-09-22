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
include pyiec61850/CMakeFiles/_iec61850.dir/depend.make

# Include the progress variables for this target.
include pyiec61850/CMakeFiles/_iec61850.dir/progress.make

# Include the compile flags for this target's objects.
include pyiec61850/CMakeFiles/_iec61850.dir/flags.make

pyiec61850/CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.o: pyiec61850/CMakeFiles/_iec61850.dir/flags.make
pyiec61850/CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.o: pyiec61850/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/ws_vibsin/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object pyiec61850/CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.o"
	cd /home/pi/ws_vibsin/libiec61850/pyiec61850 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.o -c /home/pi/ws_vibsin/libiec61850/pyiec61850/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx

pyiec61850/CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.i"
	cd /home/pi/ws_vibsin/libiec61850/pyiec61850 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/ws_vibsin/libiec61850/pyiec61850/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx > CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.i

pyiec61850/CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.s"
	cd /home/pi/ws_vibsin/libiec61850/pyiec61850 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/ws_vibsin/libiec61850/pyiec61850/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx -o CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.s

# Object files for target _iec61850
_iec61850_OBJECTS = \
"CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.o"

# External object files for target _iec61850
_iec61850_EXTERNAL_OBJECTS =

pyiec61850/_iec61850.so: pyiec61850/CMakeFiles/_iec61850.dir/CMakeFiles/_iec61850.dir/iec61850PYTHON_wrap.cxx.o
pyiec61850/_iec61850.so: pyiec61850/CMakeFiles/_iec61850.dir/build.make
pyiec61850/_iec61850.so: /usr/lib/arm-linux-gnueabihf/libpython3.9.so
pyiec61850/_iec61850.so: src/libiec61850.so.1.5.2
pyiec61850/_iec61850.so: hal/libhal-shared.a
pyiec61850/_iec61850.so: pyiec61850/CMakeFiles/_iec61850.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/ws_vibsin/libiec61850/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared module _iec61850.so"
	cd /home/pi/ws_vibsin/libiec61850/pyiec61850 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_iec61850.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
pyiec61850/CMakeFiles/_iec61850.dir/build: pyiec61850/_iec61850.so

.PHONY : pyiec61850/CMakeFiles/_iec61850.dir/build

pyiec61850/CMakeFiles/_iec61850.dir/clean:
	cd /home/pi/ws_vibsin/libiec61850/pyiec61850 && $(CMAKE_COMMAND) -P CMakeFiles/_iec61850.dir/cmake_clean.cmake
.PHONY : pyiec61850/CMakeFiles/_iec61850.dir/clean

pyiec61850/CMakeFiles/_iec61850.dir/depend:
	cd /home/pi/ws_vibsin/libiec61850 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/ws_vibsin/libiec61850 /home/pi/ws_vibsin/libiec61850/pyiec61850 /home/pi/ws_vibsin/libiec61850 /home/pi/ws_vibsin/libiec61850/pyiec61850 /home/pi/ws_vibsin/libiec61850/pyiec61850/CMakeFiles/_iec61850.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : pyiec61850/CMakeFiles/_iec61850.dir/depend

