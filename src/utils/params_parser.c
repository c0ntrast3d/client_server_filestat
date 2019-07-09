#include <stddef.h>
#include "params_parser.h"


void parse_params(int argc, char **argv, int optionsCount, AppConfig *currentConfiguration) {
    if (optionsCount < argc) {
        if (argv[optionsCount] != NULL) {
            currentConfiguration->inputFileName = argv[optionsCount];
        }
        if (argv[optionsCount + 1] != NULL) {
            currentConfiguration->outputFileName = argv[++optionsCount];
        }
    }
}

