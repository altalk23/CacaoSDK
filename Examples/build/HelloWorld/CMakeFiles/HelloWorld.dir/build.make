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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.19.6/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.19.6/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build"

# Include any dependencies generated for this target.
include HelloWorld/CMakeFiles/HelloWorld.dir/depend.make

# Include the progress variables for this target.
include HelloWorld/CMakeFiles/HelloWorld.dir/progress.make

# Include the compile flags for this target's objects.
include HelloWorld/CMakeFiles/HelloWorld.dir/flags.make

HelloWorld/CMakeFiles/HelloWorld.dir/main.cpp.o: HelloWorld/CMakeFiles/HelloWorld.dir/flags.make
HelloWorld/CMakeFiles/HelloWorld.dir/main.cpp.o: ../HelloWorld/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object HelloWorld/CMakeFiles/HelloWorld.dir/main.cpp.o"
	cd "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HelloWorld.dir/main.cpp.o -c "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/HelloWorld/main.cpp"

HelloWorld/CMakeFiles/HelloWorld.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HelloWorld.dir/main.cpp.i"
	cd "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/HelloWorld/main.cpp" > CMakeFiles/HelloWorld.dir/main.cpp.i

HelloWorld/CMakeFiles/HelloWorld.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HelloWorld.dir/main.cpp.s"
	cd "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/HelloWorld/main.cpp" -o CMakeFiles/HelloWorld.dir/main.cpp.s

HelloWorld/CMakeFiles/HelloWorld.dir/custom-layer.cpp.o: HelloWorld/CMakeFiles/HelloWorld.dir/flags.make
HelloWorld/CMakeFiles/HelloWorld.dir/custom-layer.cpp.o: ../HelloWorld/custom-layer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object HelloWorld/CMakeFiles/HelloWorld.dir/custom-layer.cpp.o"
	cd "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HelloWorld.dir/custom-layer.cpp.o -c "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/HelloWorld/custom-layer.cpp"

HelloWorld/CMakeFiles/HelloWorld.dir/custom-layer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HelloWorld.dir/custom-layer.cpp.i"
	cd "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/HelloWorld/custom-layer.cpp" > CMakeFiles/HelloWorld.dir/custom-layer.cpp.i

HelloWorld/CMakeFiles/HelloWorld.dir/custom-layer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HelloWorld.dir/custom-layer.cpp.s"
	cd "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/HelloWorld/custom-layer.cpp" -o CMakeFiles/HelloWorld.dir/custom-layer.cpp.s

# Object files for target HelloWorld
HelloWorld_OBJECTS = \
"CMakeFiles/HelloWorld.dir/main.cpp.o" \
"CMakeFiles/HelloWorld.dir/custom-layer.cpp.o"

# External object files for target HelloWorld
HelloWorld_EXTERNAL_OBJECTS =

HelloWorld/libHelloWorld.dylib: HelloWorld/CMakeFiles/HelloWorld.dir/main.cpp.o
HelloWorld/libHelloWorld.dylib: HelloWorld/CMakeFiles/HelloWorld.dir/custom-layer.cpp.o
HelloWorld/libHelloWorld.dylib: HelloWorld/CMakeFiles/HelloWorld.dir/build.make
HelloWorld/libHelloWorld.dylib: HelloWorld/Cacao/libCacao.dylib
HelloWorld/libHelloWorld.dylib: HelloWorld/Cacao/hook/libCore.a
HelloWorld/libHelloWorld.dylib: HelloWorld/Cacao/hook/lilac-core/src/libLilacHook.a
HelloWorld/libHelloWorld.dylib: HelloWorld/CMakeFiles/HelloWorld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libHelloWorld.dylib"
	cd "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HelloWorld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
HelloWorld/CMakeFiles/HelloWorld.dir/build: HelloWorld/libHelloWorld.dylib

.PHONY : HelloWorld/CMakeFiles/HelloWorld.dir/build

HelloWorld/CMakeFiles/HelloWorld.dir/clean:
	cd "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld" && $(CMAKE_COMMAND) -P CMakeFiles/HelloWorld.dir/cmake_clean.cmake
.PHONY : HelloWorld/CMakeFiles/HelloWorld.dir/clean

HelloWorld/CMakeFiles/HelloWorld.dir/depend:
	cd "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples" "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/HelloWorld" "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build" "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld" "/Users/student/Desktop/Storage/Geometry Dash/CacaoSDK/Examples/build/HelloWorld/CMakeFiles/HelloWorld.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : HelloWorld/CMakeFiles/HelloWorld.dir/depend
