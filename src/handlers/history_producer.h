#ifndef _HISTORY_PRODUCER_H_
#define _HISTORY_PRODUCER_H_

#include "../entites/previous_output.h"
#include <string.h>

FileInfoList get_history (PreviousOutputs previous, char *searchTerm);
void print_history (FileInfoList history, char *path);

#endif //_HISTORY_PRODUCER_H_
