# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /cygdrive/c/Users/pcdar/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/pcdar/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/PL11_J.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PL11_J.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PL11_J.dir/flags.make

CMakeFiles/PL11_J.dir/main.cpp.o: CMakeFiles/PL11_J.dir/flags.make
CMakeFiles/PL11_J.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PL11_J.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PL11_J.dir/main.cpp.o -c "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/main.cpp"

CMakeFiles/PL11_J.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PL11_J.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/main.cpp" > CMakeFiles/PL11_J.dir/main.cpp.i

CMakeFiles/PL11_J.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PL11_J.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/main.cpp" -o CMakeFiles/PL11_J.dir/main.cpp.s

# Object files for target PL11_J
PL11_J_OBJECTS = \
"CMakeFiles/PL11_J.dir/main.cpp.o"

# External object files for target PL11_J
PL11_J_EXTERNAL_OBJECTS =

PL11_J.exe: CMakeFiles/PL11_J.dir/main.cpp.o
PL11_J.exe: CMakeFiles/PL11_J.dir/build.make
PL11_J.exe: CMakeFiles/PL11_J.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PL11_J.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PL11_J.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PL11_J.dir/build: PL11_J.exe

.PHONY : CMakeFiles/PL11_J.dir/build

CMakeFiles/PL11_J.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PL11_J.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PL11_J.dir/clean

CMakeFiles/PL11_J.dir/depend:
	cd "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/cmake-build-debug" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/cmake-build-debug" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL11 J/cmake-build-debug/CMakeFiles/PL11_J.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/PL11_J.dir/depend

