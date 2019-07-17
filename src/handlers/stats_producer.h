#ifndef FILESTAT_STATS_PRODUCER_H
#define FILESTAT_STATS_PRODUCER_H

#include "../entites/input_parameters.h"
#include "../entites/file_info.h"
#include <stdio.h>
#include <sys/stat.h>
#include "../entites/previous_output.h"
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

ProcessedFileInfoList get_stats (InputParameters inputParameters);

#endif //FILESTAT_STATS_PRODUCER_H
