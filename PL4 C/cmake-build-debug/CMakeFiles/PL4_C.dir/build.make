# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /cygdrive/c/Users/pcdar/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/pcdar/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/PL4_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PL4_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PL4_C.dir/flags.make

CMakeFiles/PL4_C.dir/main.cpp.o: CMakeFiles/PL4_C.dir/flags.make
CMakeFiles/PL4_C.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PL4_C.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PL4_C.dir/main.cpp.o -c "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/main.cpp"

CMakeFiles/PL4_C.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PL4_C.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/main.cpp" > CMakeFiles/PL4_C.dir/main.cpp.i

CMakeFiles/PL4_C.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PL4_C.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/main.cpp" -o CMakeFiles/PL4_C.dir/main.cpp.s

# Object files for target PL4_C
PL4_C_OBJECTS = \
"CMakeFiles/PL4_C.dir/main.cpp.o"

# External object files for target PL4_C
PL4_C_EXTERNAL_OBJECTS =

PL4_C.exe: CMakeFiles/PL4_C.dir/main.cpp.o
PL4_C.exe: CMakeFiles/PL4_C.dir/build.make
PL4_C.exe: CMakeFiles/PL4_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PL4_C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PL4_C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PL4_C.dir/build: PL4_C.exe

.PHONY : CMakeFiles/PL4_C.dir/build

CMakeFiles/PL4_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PL4_C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PL4_C.dir/clean

CMakeFiles/PL4_C.dir/depend:
	cd "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/cmake-build-debug" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/cmake-build-debug" "/cygdrive/c/Users/pcdar/OneDrive/Documentos/GitHub/EA-PLs-2021/PL4 C/cmake-build-debug/CMakeFiles/PL4_C.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/PL4_C.dir/depend
