#include "execution_stats_producer.h"
#include "stats_producer.h"
#include "../entites/execution_stats.h"

static void print_execution_stats (ExecutionStats stats);

void get_execution_stats (ProcessedFileInfoList processed)
{
  ExecutionStats stats = init_execution_stats ();
  if (processed == NULL)
    {
      puts ("LIST IS EMPTY");
      return;
    }
  ProcessedFileInfoList current = processed->next;
  int totalCount = 0;
  while (current != NULL)
    {
      FileInfoList currentFile = current->info->next;
      while (currentFile != NULL)
        {
          ++totalCount;
          if (S_ISREG (currentFile->modes))
            {
              stats.monitoredFiles++;
            }
          else if (S_ISLNK (currentFile->modes))
            {
              stats.linksCount++;
            }
          else if (S_ISDIR (currentFile->modes))
            {
              stats.dirsCount++;
            }
          stats.totalSize += currentFile->fileSize;
          stats.averageSize = stats.totalSize / totalCount;
          if (stats.minimumSize == 0)
            {
              stats.minimumSize = currentFile->fileSize;
            }
          if (stats.minimumSize > currentFile->fileSize)
            {
              stats.minimumSize = currentFile->fileSize;
            }
          if (stats.maximumSize < currentFile->fileSize)
            {
              stats.maximumSize = currentFile->fileSize;
            }
          currentFile = currentFile->next;
        }
      current = current->next;
    }
  print_execution_stats (stats);
}

static void print_execution_stats (ExecutionStats stats)
{
  printf ("Processed Files    :    %lu\n", stats.monitoredFiles);
  printf ("Processed Dirs     :    %lu\n", stats.dirsCount);
  printf ("Processed Links    :    %lu\n", stats.linksCount);
  printf ("Total Size         :    %lu\n", stats.totalSize);
  printf ("Average Size       :    %lu\n", stats.averageSize);
  printf ("Minimum Size       :    %lu\n", stats.minimumSize);
  printf ("Maximum Size       :    %lu\n", stats.maximumSize);
}