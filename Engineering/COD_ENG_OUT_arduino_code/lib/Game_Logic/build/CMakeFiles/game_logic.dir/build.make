# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/build

# Include any dependencies generated for this target.
include CMakeFiles/game_logic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/game_logic.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/game_logic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game_logic.dir/flags.make

CMakeFiles/game_logic.dir/main.cpp.o: CMakeFiles/game_logic.dir/flags.make
CMakeFiles/game_logic.dir/main.cpp.o: /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/main.cpp
CMakeFiles/game_logic.dir/main.cpp.o: CMakeFiles/game_logic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game_logic.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game_logic.dir/main.cpp.o -MF CMakeFiles/game_logic.dir/main.cpp.o.d -o CMakeFiles/game_logic.dir/main.cpp.o -c /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/main.cpp

CMakeFiles/game_logic.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/game_logic.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/main.cpp > CMakeFiles/game_logic.dir/main.cpp.i

CMakeFiles/game_logic.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/game_logic.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/main.cpp -o CMakeFiles/game_logic.dir/main.cpp.s

# Object files for target game_logic
game_logic_OBJECTS = \
"CMakeFiles/game_logic.dir/main.cpp.o"

# External object files for target game_logic
game_logic_EXTERNAL_OBJECTS =

game_logic: CMakeFiles/game_logic.dir/main.cpp.o
game_logic: CMakeFiles/game_logic.dir/build.make
game_logic: libuni_library.a
game_logic: CMakeFiles/game_logic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable game_logic"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game_logic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game_logic.dir/build: game_logic
.PHONY : CMakeFiles/game_logic.dir/build

CMakeFiles/game_logic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game_logic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game_logic.dir/clean

CMakeFiles/game_logic.dir/depend:
	cd /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/build /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/build /workspaces/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/build/CMakeFiles/game_logic.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/game_logic.dir/depend

