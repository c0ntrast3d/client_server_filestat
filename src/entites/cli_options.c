#include <getopt.h>
#include <stddef.h>

const char *shortOptions = ":vsrh:u:g:ln:?";
const struct option LongOptions[] = {
    {"verbose", no_argument, NULL, 'v'},
    {"stat", no_argument, NULL, 's'},
    {"report", no_argument, NULL, 'r'},
    {"history", required_argument, NULL, 'h'},
    {"user", required_argument, NULL, 'u'},
    {"group", required_argument, NULL, 'g'},
    {"length", required_argument, NULL, 'l'},
    {"noscan", no_argument, NULL, 'n'},
    {"host", required_argument, NULL},
    {"port", required_argument, NULL},
    {NULL, 0, NULL, 0}
};
