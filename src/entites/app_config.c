#include <stddef.h>
#include "app_config.h"

struct AppConfig init_app_config() {
    struct AppConfig cleanArgs;
    cleanArgs.verbose = 0;
    cleanArgs.stat = 0;
    cleanArgs.report = 0;
    cleanArgs.history = 0;
    cleanArgs.historyTarget = NULL;
    cleanArgs.user = 0;
    cleanArgs.userId = NULL;
    cleanArgs.group = 0;
    cleanArgs.groupId = NULL;
    cleanArgs.length = 0;
    cleanArgs.lengthMin = 0;
    cleanArgs.lengthMax = 0;
    cleanArgs.noscan = 0;
    cleanArgs.inputFileName = NULL;
    cleanArgs.outputFileName = NULL;
    return cleanArgs;
}
