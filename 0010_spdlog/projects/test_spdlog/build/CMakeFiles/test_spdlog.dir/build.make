# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/build

# Include any dependencies generated for this target.
include CMakeFiles/test_spdlog.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_spdlog.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_spdlog.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_spdlog.dir/flags.make

CMakeFiles/test_spdlog.dir/main.cpp.o: CMakeFiles/test_spdlog.dir/flags.make
CMakeFiles/test_spdlog.dir/main.cpp.o: /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/main.cpp
CMakeFiles/test_spdlog.dir/main.cpp.o: CMakeFiles/test_spdlog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_spdlog.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_spdlog.dir/main.cpp.o -MF CMakeFiles/test_spdlog.dir/main.cpp.o.d -o CMakeFiles/test_spdlog.dir/main.cpp.o -c /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/main.cpp

CMakeFiles/test_spdlog.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_spdlog.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/main.cpp > CMakeFiles/test_spdlog.dir/main.cpp.i

CMakeFiles/test_spdlog.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_spdlog.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/main.cpp -o CMakeFiles/test_spdlog.dir/main.cpp.s

# Object files for target test_spdlog
test_spdlog_OBJECTS = \
"CMakeFiles/test_spdlog.dir/main.cpp.o"

# External object files for target test_spdlog
test_spdlog_EXTERNAL_OBJECTS =

test_spdlog: CMakeFiles/test_spdlog.dir/main.cpp.o
test_spdlog: CMakeFiles/test_spdlog.dir/build.make
test_spdlog: /usr/lib/x86_64-linux-gnu/libspdlog.so.1.10.0
test_spdlog: /usr/lib/x86_64-linux-gnu/libfmt.so.9.1.0
test_spdlog: CMakeFiles/test_spdlog.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_spdlog"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_spdlog.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_spdlog.dir/build: test_spdlog
.PHONY : CMakeFiles/test_spdlog.dir/build

CMakeFiles/test_spdlog.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_spdlog.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_spdlog.dir/clean

CMakeFiles/test_spdlog.dir/depend:
	cd /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/build /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/build /home/kirillzalomov/projects/cpp_guides/0010_spdlog/projects/test_spdlog/build/CMakeFiles/test_spdlog.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_spdlog.dir/depend

