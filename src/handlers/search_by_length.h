#ifndef _SEARCH_BY_LENGTH_H_
#define _SEARCH_BY_LENGTH_H_

#include "../entites/previous_output.h"

FileInfoList get_files_by_length (PreviousOutputs previous, long int lengthMin, long int lengthMax);
void print_files_by_length (FileInfoList filesByLength, long int lengthMin, long int lengthMax);

#endif //_SEARCH_BY_LENGTH_H_
