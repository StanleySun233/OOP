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
CMAKE_SOURCE_DIR = D:\Data\ClionProject\OOP\temp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Data\ClionProject\OOP\temp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\temp.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\temp.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\temp.dir\flags.make

CMakeFiles\temp.dir\main.cpp.obj: CMakeFiles\temp.dir\flags.make
CMakeFiles\temp.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Data\ClionProject\OOP\temp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/temp.dir/main.cpp.obj"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\temp.dir\main.cpp.obj /FdCMakeFiles\temp.dir\ /FS -c D:\Data\ClionProject\OOP\temp\main.cpp
<<

CMakeFiles\temp.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/temp.dir/main.cpp.i"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" > CMakeFiles\temp.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Data\ClionProject\OOP\temp\main.cpp
<<

CMakeFiles\temp.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/temp.dir/main.cpp.s"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\temp.dir\main.cpp.s /c D:\Data\ClionProject\OOP\temp\main.cpp
<<

CMakeFiles\temp.dir\source\clothes.cpp.obj: CMakeFiles\temp.dir\flags.make
CMakeFiles\temp.dir\source\clothes.cpp.obj: ..\source\clothes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Data\ClionProject\OOP\temp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/temp.dir/source/clothes.cpp.obj"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\temp.dir\source\clothes.cpp.obj /FdCMakeFiles\temp.dir\ /FS -c D:\Data\ClionProject\OOP\temp\source\clothes.cpp
<<

CMakeFiles\temp.dir\source\clothes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/temp.dir/source/clothes.cpp.i"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" > CMakeFiles\temp.dir\source\clothes.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Data\ClionProject\OOP\temp\source\clothes.cpp
<<

CMakeFiles\temp.dir\source\clothes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/temp.dir/source/clothes.cpp.s"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\temp.dir\source\clothes.cpp.s /c D:\Data\ClionProject\OOP\temp\source\clothes.cpp
<<

CMakeFiles\temp.dir\source\page.cpp.obj: CMakeFiles\temp.dir\flags.make
CMakeFiles\temp.dir\source\page.cpp.obj: ..\source\page.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Data\ClionProject\OOP\temp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/temp.dir/source/page.cpp.obj"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\temp.dir\source\page.cpp.obj /FdCMakeFiles\temp.dir\ /FS -c D:\Data\ClionProject\OOP\temp\source\page.cpp
<<

CMakeFiles\temp.dir\source\page.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/temp.dir/source/page.cpp.i"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" > CMakeFiles\temp.dir\source\page.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Data\ClionProject\OOP\temp\source\page.cpp
<<

CMakeFiles\temp.dir\source\page.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/temp.dir/source/page.cpp.s"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\temp.dir\source\page.cpp.s /c D:\Data\ClionProject\OOP\temp\source\page.cpp
<<

CMakeFiles\temp.dir\source\account.cpp.obj: CMakeFiles\temp.dir\flags.make
CMakeFiles\temp.dir\source\account.cpp.obj: ..\source\account.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Data\ClionProject\OOP\temp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/temp.dir/source/account.cpp.obj"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\temp.dir\source\account.cpp.obj /FdCMakeFiles\temp.dir\ /FS -c D:\Data\ClionProject\OOP\temp\source\account.cpp
<<

CMakeFiles\temp.dir\source\account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/temp.dir/source/account.cpp.i"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" > CMakeFiles\temp.dir\source\account.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Data\ClionProject\OOP\temp\source\account.cpp
<<

CMakeFiles\temp.dir\source\account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/temp.dir/source/account.cpp.s"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\temp.dir\source\account.cpp.s /c D:\Data\ClionProject\OOP\temp\source\account.cpp
<<

CMakeFiles\temp.dir\source\library.cpp.obj: CMakeFiles\temp.dir\flags.make
CMakeFiles\temp.dir\source\library.cpp.obj: ..\source\library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Data\ClionProject\OOP\temp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/temp.dir/source/library.cpp.obj"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\temp.dir\source\library.cpp.obj /FdCMakeFiles\temp.dir\ /FS -c D:\Data\ClionProject\OOP\temp\source\library.cpp
<<

CMakeFiles\temp.dir\source\library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/temp.dir/source/library.cpp.i"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" > CMakeFiles\temp.dir\source\library.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Data\ClionProject\OOP\temp\source\library.cpp
<<

CMakeFiles\temp.dir\source\library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/temp.dir/source/library.cpp.s"
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\temp.dir\source\library.cpp.s /c D:\Data\ClionProject\OOP\temp\source\library.cpp
<<

# Object files for target temp
temp_OBJECTS = \
"CMakeFiles\temp.dir\main.cpp.obj" \
"CMakeFiles\temp.dir\source\clothes.cpp.obj" \
"CMakeFiles\temp.dir\source\page.cpp.obj" \
"CMakeFiles\temp.dir\source\account.cpp.obj" \
"CMakeFiles\temp.dir\source\library.cpp.obj"

# External object files for target temp
temp_EXTERNAL_OBJECTS =

temp.exe: CMakeFiles\temp.dir\main.cpp.obj
temp.exe: CMakeFiles\temp.dir\source\clothes.cpp.obj
temp.exe: CMakeFiles\temp.dir\source\page.cpp.obj
temp.exe: CMakeFiles\temp.dir\source\account.cpp.obj
temp.exe: CMakeFiles\temp.dir\source\library.cpp.obj
temp.exe: CMakeFiles\temp.dir\build.make
temp.exe: CMakeFiles\temp.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Data\ClionProject\OOP\temp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable temp.exe"
	"D:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\temp.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- "D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29910\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\temp.dir\objects1.rsp @<<
 /out:temp.exe /implib:temp.lib /pdb:D:\Data\ClionProject\OOP\temp\cmake-build-debug\temp.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\temp.dir\build: temp.exe
.PHONY : CMakeFiles\temp.dir\build

CMakeFiles\temp.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\temp.dir\cmake_clean.cmake
.PHONY : CMakeFiles\temp.dir\clean

CMakeFiles\temp.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Data\ClionProject\OOP\temp D:\Data\ClionProject\OOP\temp D:\Data\ClionProject\OOP\temp\cmake-build-debug D:\Data\ClionProject\OOP\temp\cmake-build-debug D:\Data\ClionProject\OOP\temp\cmake-build-debug\CMakeFiles\temp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\temp.dir\depend

