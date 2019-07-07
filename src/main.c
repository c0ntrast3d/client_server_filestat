#include <stdio.h>
#include "io/help_printer.h"
#include "controller/controller.h"

/*
 * print usage info if no arguments provided -> fail fast
 * otherwise start the controller passing args to it
 * */

int main(int argc, char **argv) {
    if (argc <= 1) {
        puts("No parameters specified!\n");
        print_help();
    } else {
        start(argc, argv);
    }
    return 0;
}