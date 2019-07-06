#include "io/help_printer.h"
#include "controller/controller.h"

/*
 * print usage info if no arguments provided -> fail fast
 * otherwise start the controller passing args to it
 * */

int main(int argc, char **argv) {
    if (argc <= 1) {
        print_help();
    } else {
        start(argc, argv);
    }
    return 0;
}