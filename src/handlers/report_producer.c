#include "report_producer.h"

void print_report (clock_t startTime, ProcessedFileInfoList processed)
{
  if (processed == NULL)
    {
      return;
    }
  ProcessedFileInfoList current = processed->next;
  long int maximumFileSize = 0;
  long int totalCount = 0;
  while (current != NULL)
    {
      FileInfoList currentFile = current->info->next;
      while (currentFile != NULL)
        {
          ++totalCount;
          if (currentFile->fileSize > maximumFileSize)
            {
              maximumFileSize = currentFile->fileSize;
            }
          currentFile = currentFile->next;
        }
      current = current->next;
    }
  printf ("Processed Files    :    %lu\n", totalCount);
  printf ("Maximum Size       :    %lu\n", maximumFileSize);
  clock_t endTime = clock () - startTime;
  printf ("Time Elapsed       :    %f\n", (((double) endTime) / CLOCKS_PER_SEC) * 1000.0);
}