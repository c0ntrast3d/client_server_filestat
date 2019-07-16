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
  char *historyTarget;
  int user;
  char *userId;
  int group;
  char *groupId;
  int length;
  int lengthMin;
  int lengthMax;
  int noscan;
  char *inputFileName;
  char *outputFileName;
  int optionsCount;
} AppConfig;

AppConfig init_app_config ();

#endif //FILESTAT_APP_CONFIG_H
