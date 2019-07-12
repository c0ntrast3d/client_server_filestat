#ifndef FILESTAT_PREVIOUS_OUTPUT_H
#define FILESTAT_PREVIOUS_OUTPUT_H

#include "file_info.h"

struct PreviousOutput {
  char *path;
  FileInfoList info;
  struct PreviousOutput *next;
};

typedef struct PreviousOutput *PreviousOutputs;

PreviousOutputs create_previous_outputs ();

void add_output (PreviousOutputs head, char *path, FileInfoList node);

void print_previous_stats (PreviousOutputs head);

#endif //FILESTAT_PREVIOUS_OUTPUT_H
