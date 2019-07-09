#include <stdio.h>
#include "app_config_producer.h"
#include "../entites/app_config.h"
#include "options_parser.h"
#include "params_parser.h"


AppConfig app_config_from_args(int argc, char **argv) {
    /* get clean app configuration initialized to default values */
    AppConfig currentConfiguration = init_app_config();
    /* mark all the options got as from cli inside the configuration */
    parse_options(argc, argv, &currentConfiguration);
    /* get the input/output files. if none -> defaults are used */
    int optionsCount = currentConfiguration.optionsCount;
    parse_params(argc, argv, optionsCount, &currentConfiguration);
    return currentConfiguration;
}

