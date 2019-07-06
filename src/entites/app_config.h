#ifndef FILESTAT_APP_CONFIG_H
#define FILESTAT_APP_CONFIG_H

struct AppConfig {
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
    const char *inputFileName;
    const char *outputFileName;
};

struct AppConfig init_app_config();

#endif //FILESTAT_APP_CONFIG_H
