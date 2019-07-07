#include <stdio.h>
#include "../utils/app_config_producer.h"

void start(int argc, char **argv) {
    struct AppConfig config = app_config_from_args(argc, argv);
    printf("VALIDATING PARAMS ");
    puts(":");
    printf("--verbose = %d", config.verbose);
    puts(":");
    printf("--stat = %d", config.stat);
    puts(":");
    printf("--inputFile = %s", config.inputFileName);
    puts(":");
    printf("--history = %d", config.history);
    puts(":");
    printf("--historyArgument = %s", config.historyTarget);
    puts(":");
    puts(config.inputFileName);
    puts(config.outputFileName);
}