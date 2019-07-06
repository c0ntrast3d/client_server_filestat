cmake_minimum_required(VERSION 3.14)
project(filestat C)

set(CMAKE_C_STANDARD 11)

add_executable(filestat src/main.c src/entites/options.c src/entites/options.h src/controller/controller.c src/utils/app_config_producer.c src/utils/app_config_producer.h src/io/help_printer.c src/io/help_printer.h src/controller/controller.h src/entites/app_config.c src/entites/app_config.h src/entites/constants.h)