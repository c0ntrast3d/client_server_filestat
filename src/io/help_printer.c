#include <stdio.h>

void print_help() {
    puts(
            "Usage :: "
            "filestat <options> <inputFile> <outputFile> <host> <port>\n\n"
            "Where <options> are: \n"
            "-v | --verbose\n"
            "-s | --stat\n"
            "-r | --report\n"
            "-h | --history <filepath>\n"
            "-u | --user <userId>\n"
            "-g | --group <groupId>\n"
            "-l | --length <min>:<max>\n"
            "-n | --noscan\n\n"
            "filestat.in is used when <inputFile> is omitted\n"
            "filestat.db is used when <outputFile> is omitted\n"
            "<host> & <port> are optional"
    );
}