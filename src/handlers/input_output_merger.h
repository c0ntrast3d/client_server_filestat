#ifndef _INPUT_OUTPUT_MERGER_H_
#define _INPUT_OUTPUT_MERGER_H_

#include "../entites/file_info.h"
#include "../entites/previous_output.h"
#include <string.h>

ProcessedFileInfoList merge_current_with_previous (ProcessedFileInfoList processed, PreviousOutputs previous);

#endif //_INPUT_OUTPUT_MERGER_H_
