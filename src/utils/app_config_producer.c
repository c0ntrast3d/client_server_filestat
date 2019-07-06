#include <getopt.h>
#include "app_config_producer.h"
#include "../entites/app_config.h"
#include "../entites/options.h"
#include "../io/help_printer.h"

struct AppConfig app_config_from_args(int argc, char **argv) {
    struct AppConfig currentConfiguration = init_app_config();
    int optionIndex = 0;
    int currentOption = getopt_long(argc, argv, shortOptions, LongOptions, &optionIndex);
    while (currentOption != -1) {
        switch (currentOption) {
            case 'v':
                currentConfiguration.verbose = 1;
                break;
            case '?':
                break;
            default:
                break;
        }
        currentOption = getopt_long(argc, argv, shortOptions, LongOptions, &optionIndex);
    }
    return currentConfiguration;
}