#include "input_output_merger.h"

ProcessedFileInfoList merge_current_with_previous (ProcessedFileInfoList processed, PreviousOutputs previous)
{
  if (processed == NULL)
    {
      return processed;
    }
  if (previous->next == NULL)
    {
      return processed;
    }
  PreviousOutputs previousInfo = previous->next;
  while (previousInfo != NULL)
    {
      ProcessedFileInfoList currentInfo = processed->next;
      while (currentInfo != NULL)
        {
          if (strcmp (previousInfo->path, currentInfo->path) == 0)
            {
              FileInfoList info = currentInfo->info;
              while (info->next != NULL)
                {
                  info = info->next;
                }
              info->next = previousInfo->info->next;
            }
          currentInfo = currentInfo->next;
        }
      previousInfo = previousInfo->next;
    }
  return processed;
}