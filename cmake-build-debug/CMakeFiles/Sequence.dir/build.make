# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "D:\software\Clion\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\software\Clion\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\408\data_structure\Linear\Sequence

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\408\data_structure\Linear\Sequence\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sequence.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Sequence.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sequence.dir/flags.make

CMakeFiles/Sequence.dir/main.cpp.obj: CMakeFiles/Sequence.dir/flags.make
CMakeFiles/Sequence.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\408\data_structure\Linear\Sequence\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sequence.dir/main.cpp.obj"
	D:\software\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Sequence.dir\main.cpp.obj -c E:\408\data_structure\Linear\Sequence\main.cpp

CMakeFiles/Sequence.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sequence.dir/main.cpp.i"
	D:\software\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\408\data_structure\Linear\Sequence\main.cpp > CMakeFiles\Sequence.dir\main.cpp.i

CMakeFiles/Sequence.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sequence.dir/main.cpp.s"
	D:\software\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\408\data_structure\Linear\Sequence\main.cpp -o CMakeFiles\Sequence.dir\main.cpp.s

# Object files for target Sequence
Sequence_OBJECTS = \
"CMakeFiles/Sequence.dir/main.cpp.obj"

# External object files for target Sequence
Sequence_EXTERNAL_OBJECTS =

Sequence.exe: CMakeFiles/Sequence.dir/main.cpp.obj
Sequence.exe: CMakeFiles/Sequence.dir/build.make
Sequence.exe: CMakeFiles/Sequence.dir/linklibs.rsp
Sequence.exe: CMakeFiles/Sequence.dir/objects1.rsp
Sequence.exe: CMakeFiles/Sequence.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\408\data_structure\Linear\Sequence\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sequence.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sequence.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sequence.dir/build: Sequence.exe
.PHONY : CMakeFiles/Sequence.dir/build

CMakeFiles/Sequence.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sequence.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sequence.dir/clean

CMakeFiles/Sequence.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\408\data_structure\Linear\Sequence E:\408\data_structure\Linear\Sequence E:\408\data_structure\Linear\Sequence\cmake-build-debug E:\408\data_structure\Linear\Sequence\cmake-build-debug E:\408\data_structure\Linear\Sequence\cmake-build-debug\CMakeFiles\Sequence.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sequence.dir/depend

