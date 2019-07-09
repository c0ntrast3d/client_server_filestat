#include "app_config.h"

AppConfig init_app_config() {
    AppConfig cleanArgs;
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
    cleanArgs.inputFileName = DEFAULT_INPUT_FILE_NAME;
    cleanArgs.outputFileName = DEFAULT_OUTPUT_FILE_NAME;
    cleanArgs.optionsCount = 0;
    return cleanArgs;
}
