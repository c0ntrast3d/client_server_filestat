# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "/Users/c0ntrast3d/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.7479.33/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/c0ntrast3d/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.7479.33/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/c0ntrast3d/Documents/unicam/os_lab/filestat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/filestat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/filestat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/filestat.dir/flags.make

CMakeFiles/filestat.dir/src/main.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/main.c.o: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/filestat.dir/src/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/main.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/main.c

CMakeFiles/filestat.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/main.c > CMakeFiles/filestat.dir/src/main.c.i

CMakeFiles/filestat.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/main.c -o CMakeFiles/filestat.dir/src/main.c.s

CMakeFiles/filestat.dir/src/entites/cli_options.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/entites/cli_options.c.o: ../src/entites/cli_options.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/filestat.dir/src/entites/cli_options.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/entites/cli_options.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/cli_options.c

CMakeFiles/filestat.dir/src/entites/cli_options.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/entites/cli_options.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/cli_options.c > CMakeFiles/filestat.dir/src/entites/cli_options.c.i

CMakeFiles/filestat.dir/src/entites/cli_options.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/entites/cli_options.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/cli_options.c -o CMakeFiles/filestat.dir/src/entites/cli_options.c.s

CMakeFiles/filestat.dir/src/controller/controller.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/controller/controller.c.o: ../src/controller/controller.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/filestat.dir/src/controller/controller.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/controller/controller.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/controller/controller.c

CMakeFiles/filestat.dir/src/controller/controller.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/controller/controller.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/controller/controller.c > CMakeFiles/filestat.dir/src/controller/controller.c.i

CMakeFiles/filestat.dir/src/controller/controller.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/controller/controller.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/controller/controller.c -o CMakeFiles/filestat.dir/src/controller/controller.c.s

CMakeFiles/filestat.dir/src/utils/app_config_producer.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/utils/app_config_producer.c.o: ../src/utils/app_config_producer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/filestat.dir/src/utils/app_config_producer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/utils/app_config_producer.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/app_config_producer.c

CMakeFiles/filestat.dir/src/utils/app_config_producer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/utils/app_config_producer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/app_config_producer.c > CMakeFiles/filestat.dir/src/utils/app_config_producer.c.i

CMakeFiles/filestat.dir/src/utils/app_config_producer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/utils/app_config_producer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/app_config_producer.c -o CMakeFiles/filestat.dir/src/utils/app_config_producer.c.s

CMakeFiles/filestat.dir/src/io/help_printer.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/io/help_printer.c.o: ../src/io/help_printer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/filestat.dir/src/io/help_printer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/io/help_printer.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/io/help_printer.c

CMakeFiles/filestat.dir/src/io/help_printer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/io/help_printer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/io/help_printer.c > CMakeFiles/filestat.dir/src/io/help_printer.c.i

CMakeFiles/filestat.dir/src/io/help_printer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/io/help_printer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/io/help_printer.c -o CMakeFiles/filestat.dir/src/io/help_printer.c.s

CMakeFiles/filestat.dir/src/entites/app_config.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/entites/app_config.c.o: ../src/entites/app_config.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/filestat.dir/src/entites/app_config.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/entites/app_config.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/app_config.c

CMakeFiles/filestat.dir/src/entites/app_config.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/entites/app_config.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/app_config.c > CMakeFiles/filestat.dir/src/entites/app_config.c.i

CMakeFiles/filestat.dir/src/entites/app_config.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/entites/app_config.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/app_config.c -o CMakeFiles/filestat.dir/src/entites/app_config.c.s

CMakeFiles/filestat.dir/src/utils/options_parser.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/utils/options_parser.c.o: ../src/utils/options_parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/filestat.dir/src/utils/options_parser.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/utils/options_parser.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/options_parser.c

CMakeFiles/filestat.dir/src/utils/options_parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/utils/options_parser.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/options_parser.c > CMakeFiles/filestat.dir/src/utils/options_parser.c.i

CMakeFiles/filestat.dir/src/utils/options_parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/utils/options_parser.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/options_parser.c -o CMakeFiles/filestat.dir/src/utils/options_parser.c.s

CMakeFiles/filestat.dir/src/utils/params_parser.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/utils/params_parser.c.o: ../src/utils/params_parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/filestat.dir/src/utils/params_parser.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/utils/params_parser.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/params_parser.c

CMakeFiles/filestat.dir/src/utils/params_parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/utils/params_parser.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/params_parser.c > CMakeFiles/filestat.dir/src/utils/params_parser.c.i

CMakeFiles/filestat.dir/src/utils/params_parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/utils/params_parser.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/params_parser.c -o CMakeFiles/filestat.dir/src/utils/params_parser.c.s

CMakeFiles/filestat.dir/src/entites/input_parameters.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/entites/input_parameters.c.o: ../src/entites/input_parameters.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/filestat.dir/src/entites/input_parameters.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/entites/input_parameters.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/input_parameters.c

CMakeFiles/filestat.dir/src/entites/input_parameters.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/entites/input_parameters.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/input_parameters.c > CMakeFiles/filestat.dir/src/entites/input_parameters.c.i

CMakeFiles/filestat.dir/src/entites/input_parameters.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/entites/input_parameters.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/input_parameters.c -o CMakeFiles/filestat.dir/src/entites/input_parameters.c.s

CMakeFiles/filestat.dir/src/utils/file_utils.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/utils/file_utils.c.o: ../src/utils/file_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/filestat.dir/src/utils/file_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/utils/file_utils.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/file_utils.c

CMakeFiles/filestat.dir/src/utils/file_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/utils/file_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/file_utils.c > CMakeFiles/filestat.dir/src/utils/file_utils.c.i

CMakeFiles/filestat.dir/src/utils/file_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/utils/file_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/utils/file_utils.c -o CMakeFiles/filestat.dir/src/utils/file_utils.c.s

CMakeFiles/filestat.dir/src/io/parameters_reader.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/io/parameters_reader.c.o: ../src/io/parameters_reader.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/filestat.dir/src/io/parameters_reader.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/io/parameters_reader.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/io/parameters_reader.c

CMakeFiles/filestat.dir/src/io/parameters_reader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/io/parameters_reader.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/io/parameters_reader.c > CMakeFiles/filestat.dir/src/io/parameters_reader.c.i

CMakeFiles/filestat.dir/src/io/parameters_reader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/io/parameters_reader.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/io/parameters_reader.c -o CMakeFiles/filestat.dir/src/io/parameters_reader.c.s

CMakeFiles/filestat.dir/src/entites/file_info.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/entites/file_info.c.o: ../src/entites/file_info.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/filestat.dir/src/entites/file_info.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/entites/file_info.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/file_info.c

CMakeFiles/filestat.dir/src/entites/file_info.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/entites/file_info.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/file_info.c > CMakeFiles/filestat.dir/src/entites/file_info.c.i

CMakeFiles/filestat.dir/src/entites/file_info.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/entites/file_info.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/file_info.c -o CMakeFiles/filestat.dir/src/entites/file_info.c.s

CMakeFiles/filestat.dir/src/handlers/stats_producer.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/handlers/stats_producer.c.o: ../src/handlers/stats_producer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/filestat.dir/src/handlers/stats_producer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/handlers/stats_producer.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/handlers/stats_producer.c

CMakeFiles/filestat.dir/src/handlers/stats_producer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/handlers/stats_producer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/handlers/stats_producer.c > CMakeFiles/filestat.dir/src/handlers/stats_producer.c.i

CMakeFiles/filestat.dir/src/handlers/stats_producer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/handlers/stats_producer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/handlers/stats_producer.c -o CMakeFiles/filestat.dir/src/handlers/stats_producer.c.s

CMakeFiles/filestat.dir/src/io/output_reader.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/io/output_reader.c.o: ../src/io/output_reader.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/filestat.dir/src/io/output_reader.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/io/output_reader.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/io/output_reader.c

CMakeFiles/filestat.dir/src/io/output_reader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/io/output_reader.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/io/output_reader.c > CMakeFiles/filestat.dir/src/io/output_reader.c.i

CMakeFiles/filestat.dir/src/io/output_reader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/io/output_reader.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/io/output_reader.c -o CMakeFiles/filestat.dir/src/io/output_reader.c.s

CMakeFiles/filestat.dir/src/entites/previous_output.c.o: CMakeFiles/filestat.dir/flags.make
CMakeFiles/filestat.dir/src/entites/previous_output.c.o: ../src/entites/previous_output.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/filestat.dir/src/entites/previous_output.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filestat.dir/src/entites/previous_output.c.o   -c /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/previous_output.c

CMakeFiles/filestat.dir/src/entites/previous_output.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filestat.dir/src/entites/previous_output.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/previous_output.c > CMakeFiles/filestat.dir/src/entites/previous_output.c.i

CMakeFiles/filestat.dir/src/entites/previous_output.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filestat.dir/src/entites/previous_output.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/src/entites/previous_output.c -o CMakeFiles/filestat.dir/src/entites/previous_output.c.s

# Object files for target filestat
filestat_OBJECTS = \
"CMakeFiles/filestat.dir/src/main.c.o" \
"CMakeFiles/filestat.dir/src/entites/cli_options.c.o" \
"CMakeFiles/filestat.dir/src/controller/controller.c.o" \
"CMakeFiles/filestat.dir/src/utils/app_config_producer.c.o" \
"CMakeFiles/filestat.dir/src/io/help_printer.c.o" \
"CMakeFiles/filestat.dir/src/entites/app_config.c.o" \
"CMakeFiles/filestat.dir/src/utils/options_parser.c.o" \
"CMakeFiles/filestat.dir/src/utils/params_parser.c.o" \
"CMakeFiles/filestat.dir/src/entites/input_parameters.c.o" \
"CMakeFiles/filestat.dir/src/utils/file_utils.c.o" \
"CMakeFiles/filestat.dir/src/io/parameters_reader.c.o" \
"CMakeFiles/filestat.dir/src/entites/file_info.c.o" \
"CMakeFiles/filestat.dir/src/handlers/stats_producer.c.o" \
"CMakeFiles/filestat.dir/src/io/output_reader.c.o" \
"CMakeFiles/filestat.dir/src/entites/previous_output.c.o"

# External object files for target filestat
filestat_EXTERNAL_OBJECTS =

filestat: CMakeFiles/filestat.dir/src/main.c.o
filestat: CMakeFiles/filestat.dir/src/entites/cli_options.c.o
filestat: CMakeFiles/filestat.dir/src/controller/controller.c.o
filestat: CMakeFiles/filestat.dir/src/utils/app_config_producer.c.o
filestat: CMakeFiles/filestat.dir/src/io/help_printer.c.o
filestat: CMakeFiles/filestat.dir/src/entites/app_config.c.o
filestat: CMakeFiles/filestat.dir/src/utils/options_parser.c.o
filestat: CMakeFiles/filestat.dir/src/utils/params_parser.c.o
filestat: CMakeFiles/filestat.dir/src/entites/input_parameters.c.o
filestat: CMakeFiles/filestat.dir/src/utils/file_utils.c.o
filestat: CMakeFiles/filestat.dir/src/io/parameters_reader.c.o
filestat: CMakeFiles/filestat.dir/src/entites/file_info.c.o
filestat: CMakeFiles/filestat.dir/src/handlers/stats_producer.c.o
filestat: CMakeFiles/filestat.dir/src/io/output_reader.c.o
filestat: CMakeFiles/filestat.dir/src/entites/previous_output.c.o
filestat: CMakeFiles/filestat.dir/build.make
filestat: CMakeFiles/filestat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking C executable filestat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/filestat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/filestat.dir/build: filestat

.PHONY : CMakeFiles/filestat.dir/build

CMakeFiles/filestat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/filestat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/filestat.dir/clean

CMakeFiles/filestat.dir/depend:
	cd /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/c0ntrast3d/Documents/unicam/os_lab/filestat /Users/c0ntrast3d/Documents/unicam/os_lab/filestat /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug /Users/c0ntrast3d/Documents/unicam/os_lab/filestat/cmake-build-debug/CMakeFiles/filestat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/filestat.dir/depend

