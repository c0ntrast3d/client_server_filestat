#include "options_parser.h"
#include <getopt.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "../entites/options.h"
#include "../io/help_printer.h"
#include <regex.h>


struct LengthMinMax {
    long long min;
    long long max;
};

static struct LengthMinMax try_get_length_min_max(char *inputString);

void parse_options(int argc, char **argv, struct AppConfig *currentConfiguration) {
    int optionIndex = 0;
    int currentOption = getopt_long(argc, argv, shortOptions, &LongOptions, &optionIndex);
    while (currentOption != -1) {
        switch (currentOption) {
            case 'v':
                currentConfiguration->verbose = 1;
                break;
            case 's':
                currentConfiguration->stat = 1;
                break;
            case 'r':
                currentConfiguration->report = 1;
                break;
            case 'h':
                currentConfiguration->history = 1;
                currentConfiguration->historyTarget = optarg;
                break;
            case 'u':
                currentConfiguration->user = 1;
                currentConfiguration->userId = optarg;
                break;
            case 'g':
                currentConfiguration->group = 1;
                currentConfiguration->groupId = optarg;
            case 'l':
                currentConfiguration->length = 1;
                struct LengthMinMax tmp = try_get_length_min_max(optarg);
                break;
            case 'n':
                currentConfiguration->noscan = 1;
                break;
            case ':':
                printf("Missing argument for option -%c\n\n", optopt);
                print_help();
                exit(EXIT_FAILURE);
            case '?':
                print_help();
                exit(EXIT_FAILURE);
                break;
            default:
                break;
        }
        currentOption = getopt_long(argc, argv, shortOptions, &LongOptions, &optionIndex);
    }
    currentConfiguration->optionsCount = optind;
}

static struct LengthMinMax try_get_length_min_max(char *inputString) {
    struct LengthMinMax result;
    long long min = 0;
    long long max = 0;
    /* if argument starts with : it means only max is specified */
    if (inputString[0] == ':') {
        for (int counter = 1; counter < strlen(inputString); counter++) {
            printf("%lu", strtoumax(&inputString[counter], NULL, 10));
        }
    }
    regex_t regex;
    puts((const char *) max);
    return result;
}

