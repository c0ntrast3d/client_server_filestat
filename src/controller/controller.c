#include <stdio.h>
#include "../utils/app_config_producer.h"
#include "../utils/file_utils.h"
#include "../entites/input_parameters.h"
#include "../io/parameters_reader.h"
#include "../handlers/stats_producer.h"

void start(int argc, char **argv) {
    AppConfig config = app_config_from_args(argc, argv);
/*    printf("VALIDATING PARAMS ");
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
    printf("%s\n\n", get_working_directory());
    try_open_file("/Users/c0ntrast3d/Desktop/filestat.in");
    InputParameters parametersList = create_parameter();
    parametersList = add_parameter(parametersList, "npath", 0, 1);
    parametersList = add_parameter(parametersList, "npath2", 1, 1);
    parametersList = add_parameter(parametersList, "long_path", 0, 0);
    InputParameters p = parametersList;
    print_parameters(parametersList->next);*/
    InputParameters parametersList = read_input(config.inputFileName);
    get_stats(parametersList);
}