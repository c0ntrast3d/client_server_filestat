#include <stdio.h>

void print_help() {
    puts("No parameters specified!\n");
    puts(
            "Usage :: "
            "filestat <options> <inputFile> <outputFile>\n"
            "Where <options> are: \n"
            "-v | --verbose\n"
            "-s | --stat\n"
    );
}