#ifndef FILESTAT_STATS_PRODUCER_H
#define FILESTAT_STATS_PRODUCER_H

#include "../entites/input_parameters.h"
#include "../entites/file_info.h"
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

FileInfoList get_stats (InputParameters inputParameters);

#endif //FILESTAT_STATS_PRODUCER_H
