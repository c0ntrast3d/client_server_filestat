#ifndef FILESTAT_APP_CONFIG_H
#define FILESTAT_APP_CONFIG_H

#include <stddef.h>
#include "app_config.h"
#include "constants.h"

typedef struct AppConfig_t {
    int verbose;
    int stat;
    int report;
    int history;
    const char *historyTarget;
    int user;
    const char *userId;
    int group;
    const char *groupId;
    int length;
    int lengthMin;
    int lengthMax;
    int noscan;
    char *inputFileName;
    const char *outputFileName;
    int optionsCount;
} AppConfig;

AppConfig init_app_config();

#endif //FILESTAT_APP_CONFIG_H
