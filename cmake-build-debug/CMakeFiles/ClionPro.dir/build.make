# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "/cygdrive/c/Users/zhao hong bo/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe"

# The command to remove a file.
RM = "/cygdrive/c/Users/zhao hong bo/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/m/ClionPro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/m/ClionPro/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClionPro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClionPro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClionPro.dir/flags.make

CMakeFiles/ClionPro.dir/1018.cpp.o: CMakeFiles/ClionPro.dir/flags.make
CMakeFiles/ClionPro.dir/1018.cpp.o: ../1018.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/m/ClionPro/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClionPro.dir/1018.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClionPro.dir/1018.cpp.o -c /cygdrive/m/ClionPro/1018.cpp

CMakeFiles/ClionPro.dir/1018.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClionPro.dir/1018.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/m/ClionPro/1018.cpp > CMakeFiles/ClionPro.dir/1018.cpp.i

CMakeFiles/ClionPro.dir/1018.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClionPro.dir/1018.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/m/ClionPro/1018.cpp -o CMakeFiles/ClionPro.dir/1018.cpp.s

CMakeFiles/ClionPro.dir/1018.cpp.o.requires:

.PHONY : CMakeFiles/ClionPro.dir/1018.cpp.o.requires

CMakeFiles/ClionPro.dir/1018.cpp.o.provides: CMakeFiles/ClionPro.dir/1018.cpp.o.requires
	$(MAKE) -f CMakeFiles/ClionPro.dir/build.make CMakeFiles/ClionPro.dir/1018.cpp.o.provides.build
.PHONY : CMakeFiles/ClionPro.dir/1018.cpp.o.provides

CMakeFiles/ClionPro.dir/1018.cpp.o.provides.build: CMakeFiles/ClionPro.dir/1018.cpp.o


# Object files for target ClionPro
ClionPro_OBJECTS = \
"CMakeFiles/ClionPro.dir/1018.cpp.o"

# External object files for target ClionPro
ClionPro_EXTERNAL_OBJECTS =

ClionPro.exe: CMakeFiles/ClionPro.dir/1018.cpp.o
ClionPro.exe: CMakeFiles/ClionPro.dir/build.make
ClionPro.exe: CMakeFiles/ClionPro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/m/ClionPro/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ClionPro.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClionPro.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClionPro.dir/build: ClionPro.exe

.PHONY : CMakeFiles/ClionPro.dir/build

CMakeFiles/ClionPro.dir/requires: CMakeFiles/ClionPro.dir/1018.cpp.o.requires

.PHONY : CMakeFiles/ClionPro.dir/requires

CMakeFiles/ClionPro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClionPro.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClionPro.dir/clean

CMakeFiles/ClionPro.dir/depend:
	cd /cygdrive/m/ClionPro/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/m/ClionPro /cygdrive/m/ClionPro /cygdrive/m/ClionPro/cmake-build-debug /cygdrive/m/ClionPro/cmake-build-debug /cygdrive/m/ClionPro/cmake-build-debug/CMakeFiles/ClionPro.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClionPro.dir/depend

