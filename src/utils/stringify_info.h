#ifndef _STRINGIFY_INFO_H_
#define _STRINGIFY_INFO_H_

#include "../entites/file_info.h"
#include <string.h>
#include "../entites/previous_output.h"
#include <zconf.h>

char *stringify_file_info (ProcessedFileInfoList processed);
ProcessedFileInfoList destringify_info (char *stringified);

#endif //_STRINGIFY_INFO_H_
