# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Data\ClionProject\OOP\LessonFour\proj2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Data\ClionProject\OOP\LessonFour\proj2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\proj2.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\proj2.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\proj2.dir\flags.make

CMakeFiles\proj2.dir\main.cpp.obj: CMakeFiles\proj2.dir\flags.make
CMakeFiles\proj2.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Data\ClionProject\OOP\LessonFour\proj2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/proj2.dir/main.cpp.obj"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\proj2.dir\main.cpp.obj /FdCMakeFiles\proj2.dir\ /FS -c D:\Data\ClionProject\OOP\LessonFour\proj2\main.cpp
<<

CMakeFiles\proj2.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/main.cpp.i"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" > CMakeFiles\proj2.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Data\ClionProject\OOP\LessonFour\proj2\main.cpp
<<

CMakeFiles\proj2.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/main.cpp.s"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\proj2.dir\main.cpp.s /c D:\Data\ClionProject\OOP\LessonFour\proj2\main.cpp
<<

CMakeFiles\proj2.dir\A.cpp.obj: CMakeFiles\proj2.dir\flags.make
CMakeFiles\proj2.dir\A.cpp.obj: ..\A.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Data\ClionProject\OOP\LessonFour\proj2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/proj2.dir/A.cpp.obj"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\proj2.dir\A.cpp.obj /FdCMakeFiles\proj2.dir\ /FS -c D:\Data\ClionProject\OOP\LessonFour\proj2\A.cpp
<<

CMakeFiles\proj2.dir\A.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/A.cpp.i"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" > CMakeFiles\proj2.dir\A.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Data\ClionProject\OOP\LessonFour\proj2\A.cpp
<<

CMakeFiles\proj2.dir\A.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/A.cpp.s"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\proj2.dir\A.cpp.s /c D:\Data\ClionProject\OOP\LessonFour\proj2\A.cpp
<<

# Object files for target proj2
proj2_OBJECTS = \
"CMakeFiles\proj2.dir\main.cpp.obj" \
"CMakeFiles\proj2.dir\A.cpp.obj"

# External object files for target proj2
proj2_EXTERNAL_OBJECTS =

proj2.exe: CMakeFiles\proj2.dir\main.cpp.obj
proj2.exe: CMakeFiles\proj2.dir\A.cpp.obj
proj2.exe: CMakeFiles\proj2.dir\build.make
proj2.exe: CMakeFiles\proj2.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Data\ClionProject\OOP\LessonFour\proj2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable proj2.exe"
	"D:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\proj2.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- "D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\proj2.dir\objects1.rsp @<<
 /out:proj2.exe /implib:proj2.lib /pdb:D:\Data\ClionProject\OOP\LessonFour\proj2\cmake-build-debug\proj2.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\proj2.dir\build: proj2.exe
.PHONY : CMakeFiles\proj2.dir\build

CMakeFiles\proj2.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\proj2.dir\cmake_clean.cmake
.PHONY : CMakeFiles\proj2.dir\clean

CMakeFiles\proj2.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Data\ClionProject\OOP\LessonFour\proj2 D:\Data\ClionProject\OOP\LessonFour\proj2 D:\Data\ClionProject\OOP\LessonFour\proj2\cmake-build-debug D:\Data\ClionProject\OOP\LessonFour\proj2\cmake-build-debug D:\Data\ClionProject\OOP\LessonFour\proj2\cmake-build-debug\CMakeFiles\proj2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\proj2.dir\depend

