#ifndef FILESTAT_APP_CONFIG_H
#define FILESTAT_APP_CONFIG_H

#include <stddef.h>
#include <zconf.h>
#include "app_config.h"
#include "constants.h"

typedef struct AppConfig_t {
  int verbose;
  int stat;
  int report;
  int history;
  char *historyTarget;
  int user;
  uid_t userId;
  int group;
  gid_t groupId;
  int length;
  long int lengthMin;
  long int lengthMax;
  int noscan;
  char *inputFileName;
  char *outputFileName;
  int optionsCount;
  char *host;
  int port;
} AppConfig;

AppConfig init_app_config ();

#endif //FILESTAT_APP_CONFIG_H
