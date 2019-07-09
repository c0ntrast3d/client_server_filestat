cmake_minimum_required(VERSION 3.14)
project(filestat C)

set(CMAKE_C_STANDARD 11)

add_executable(filestat src/main.c src/entites/cli_options.c src/entites/cli_options.h src/controller/controller.c src/utils/app_config_producer.c src/utils/app_config_producer.h src/io/help_printer.c src/io/help_printer.h src/controller/controller.h src/entites/app_config.c src/entites/app_config.h src/entites/constants.h src/utils/options_parser.c src/utils/options_parser.h src/utils/params_parser.c src/utils/params_parser.h src/entites/input_parameters.c src/entites/input_parameters.h src/utils/file_utils.c src/utils/file_utils.h src/io/parameters_reader.c src/io/parameters_reader.h src/entites/file_info.c src/entites/file_info.h src/handlers/stats_producer.c src/handlers/stats_producer.h)