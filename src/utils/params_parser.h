#ifndef FILESTAT_PARAMS_PARSER_H
#define FILESTAT_PARAMS_PARSER_H

#include "host_port_parser.h"
#include <stddef.h>
#include "../entites/app_config.h"

void parse_params (int argc, char **argv, int optionsCount, AppConfig *currentConfiguration);

#endif //FILESTAT_PARAMS_PARSER_H
