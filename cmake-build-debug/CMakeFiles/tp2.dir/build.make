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
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kevin/DATA/Univ/semestre5/info505/tp2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tp2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tp2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp2.dir/flags.make

CMakeFiles/tp2.dir/main.cpp.o: CMakeFiles/tp2.dir/flags.make
CMakeFiles/tp2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp2.dir/main.cpp.o -c /home/kevin/DATA/Univ/semestre5/info505/tp2/main.cpp

CMakeFiles/tp2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kevin/DATA/Univ/semestre5/info505/tp2/main.cpp > CMakeFiles/tp2.dir/main.cpp.i

CMakeFiles/tp2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kevin/DATA/Univ/semestre5/info505/tp2/main.cpp -o CMakeFiles/tp2.dir/main.cpp.s

CMakeFiles/tp2.dir/Ville.cpp.o: CMakeFiles/tp2.dir/flags.make
CMakeFiles/tp2.dir/Ville.cpp.o: ../Ville.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tp2.dir/Ville.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp2.dir/Ville.cpp.o -c /home/kevin/DATA/Univ/semestre5/info505/tp2/Ville.cpp

CMakeFiles/tp2.dir/Ville.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2.dir/Ville.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kevin/DATA/Univ/semestre5/info505/tp2/Ville.cpp > CMakeFiles/tp2.dir/Ville.cpp.i

CMakeFiles/tp2.dir/Ville.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2.dir/Ville.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kevin/DATA/Univ/semestre5/info505/tp2/Ville.cpp -o CMakeFiles/tp2.dir/Ville.cpp.s

CMakeFiles/tp2.dir/Arrete.cpp.o: CMakeFiles/tp2.dir/flags.make
CMakeFiles/tp2.dir/Arrete.cpp.o: ../Arrete.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tp2.dir/Arrete.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp2.dir/Arrete.cpp.o -c /home/kevin/DATA/Univ/semestre5/info505/tp2/Arrete.cpp

CMakeFiles/tp2.dir/Arrete.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2.dir/Arrete.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kevin/DATA/Univ/semestre5/info505/tp2/Arrete.cpp > CMakeFiles/tp2.dir/Arrete.cpp.i

CMakeFiles/tp2.dir/Arrete.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2.dir/Arrete.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kevin/DATA/Univ/semestre5/info505/tp2/Arrete.cpp -o CMakeFiles/tp2.dir/Arrete.cpp.s

CMakeFiles/tp2.dir/Fourmi.cpp.o: CMakeFiles/tp2.dir/flags.make
CMakeFiles/tp2.dir/Fourmi.cpp.o: ../Fourmi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tp2.dir/Fourmi.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp2.dir/Fourmi.cpp.o -c /home/kevin/DATA/Univ/semestre5/info505/tp2/Fourmi.cpp

CMakeFiles/tp2.dir/Fourmi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2.dir/Fourmi.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kevin/DATA/Univ/semestre5/info505/tp2/Fourmi.cpp > CMakeFiles/tp2.dir/Fourmi.cpp.i

CMakeFiles/tp2.dir/Fourmi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2.dir/Fourmi.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kevin/DATA/Univ/semestre5/info505/tp2/Fourmi.cpp -o CMakeFiles/tp2.dir/Fourmi.cpp.s

CMakeFiles/tp2.dir/utils.cpp.o: CMakeFiles/tp2.dir/flags.make
CMakeFiles/tp2.dir/utils.cpp.o: ../utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/tp2.dir/utils.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp2.dir/utils.cpp.o -c /home/kevin/DATA/Univ/semestre5/info505/tp2/utils.cpp

CMakeFiles/tp2.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2.dir/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kevin/DATA/Univ/semestre5/info505/tp2/utils.cpp > CMakeFiles/tp2.dir/utils.cpp.i

CMakeFiles/tp2.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2.dir/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kevin/DATA/Univ/semestre5/info505/tp2/utils.cpp -o CMakeFiles/tp2.dir/utils.cpp.s

CMakeFiles/tp2.dir/Settings.cpp.o: CMakeFiles/tp2.dir/flags.make
CMakeFiles/tp2.dir/Settings.cpp.o: ../Settings.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/tp2.dir/Settings.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp2.dir/Settings.cpp.o -c /home/kevin/DATA/Univ/semestre5/info505/tp2/Settings.cpp

CMakeFiles/tp2.dir/Settings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2.dir/Settings.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kevin/DATA/Univ/semestre5/info505/tp2/Settings.cpp > CMakeFiles/tp2.dir/Settings.cpp.i

CMakeFiles/tp2.dir/Settings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2.dir/Settings.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kevin/DATA/Univ/semestre5/info505/tp2/Settings.cpp -o CMakeFiles/tp2.dir/Settings.cpp.s

CMakeFiles/tp2.dir/Window.cpp.o: CMakeFiles/tp2.dir/flags.make
CMakeFiles/tp2.dir/Window.cpp.o: ../Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/tp2.dir/Window.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp2.dir/Window.cpp.o -c /home/kevin/DATA/Univ/semestre5/info505/tp2/Window.cpp

CMakeFiles/tp2.dir/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2.dir/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kevin/DATA/Univ/semestre5/info505/tp2/Window.cpp > CMakeFiles/tp2.dir/Window.cpp.i

CMakeFiles/tp2.dir/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2.dir/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kevin/DATA/Univ/semestre5/info505/tp2/Window.cpp -o CMakeFiles/tp2.dir/Window.cpp.s

# Object files for target tp2
tp2_OBJECTS = \
"CMakeFiles/tp2.dir/main.cpp.o" \
"CMakeFiles/tp2.dir/Ville.cpp.o" \
"CMakeFiles/tp2.dir/Arrete.cpp.o" \
"CMakeFiles/tp2.dir/Fourmi.cpp.o" \
"CMakeFiles/tp2.dir/utils.cpp.o" \
"CMakeFiles/tp2.dir/Settings.cpp.o" \
"CMakeFiles/tp2.dir/Window.cpp.o"

# External object files for target tp2
tp2_EXTERNAL_OBJECTS =

tp2: CMakeFiles/tp2.dir/main.cpp.o
tp2: CMakeFiles/tp2.dir/Ville.cpp.o
tp2: CMakeFiles/tp2.dir/Arrete.cpp.o
tp2: CMakeFiles/tp2.dir/Fourmi.cpp.o
tp2: CMakeFiles/tp2.dir/utils.cpp.o
tp2: CMakeFiles/tp2.dir/Settings.cpp.o
tp2: CMakeFiles/tp2.dir/Window.cpp.o
tp2: CMakeFiles/tp2.dir/build.make
tp2: /usr/lib/x86_64-linux-gnu/libglib-2.0.so
tp2: /usr/lib/x86_64-linux-gnu/libgobject-2.0.so
tp2: /usr/lib/x86_64-linux-gnu/libatk-1.0.so
tp2: /usr/lib/x86_64-linux-gnu/libgio-2.0.so
tp2: /usr/lib/x86_64-linux-gnu/libgthread-2.0.so
tp2: /usr/lib/x86_64-linux-gnu/libgmodule-2.0.so
tp2: /usr/lib/x86_64-linux-gnu/libgdk_pixbuf-2.0.so
tp2: /usr/lib/x86_64-linux-gnu/libcairo.so
tp2: /usr/lib/x86_64-linux-gnu/libharfbuzz.so
tp2: /usr/lib/x86_64-linux-gnu/libpango-1.0.so
tp2: /usr/lib/x86_64-linux-gnu/libpangocairo-1.0.so
tp2: /usr/lib/x86_64-linux-gnu/libpangoft2-1.0.so
tp2: /usr/lib/x86_64-linux-gnu/libpangoxft-1.0.so
tp2: /usr/lib/x86_64-linux-gnu/libgdk-x11-2.0.so
tp2: /usr/lib/x86_64-linux-gnu/libgtk-x11-2.0.so
tp2: CMakeFiles/tp2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable tp2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp2.dir/build: tp2

.PHONY : CMakeFiles/tp2.dir/build

CMakeFiles/tp2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp2.dir/clean

CMakeFiles/tp2.dir/depend:
	cd /home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kevin/DATA/Univ/semestre5/info505/tp2 /home/kevin/DATA/Univ/semestre5/info505/tp2 /home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug /home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug /home/kevin/DATA/Univ/semestre5/info505/tp2/cmake-build-debug/CMakeFiles/tp2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp2.dir/depend

