#include "execution_stats_producer.h"
#include "stats_producer.h"
#include "../entites/execution_stats.h"

void print_execution_stats (ExecutionStats stats);

void get_execution_stats (InputParameters parameters)
{
  ExecutionStats stats = init_execution_stats ();
  ProcessedFileInfoList processed = get_stats (parameters);
  if (processed == NULL)
    {
      puts ("LIST IS EMPTY");
      return;
    }
  ProcessedFileInfoList current = processed->next;
  int counter = 0;
  while (current != NULL)
    {
      ++counter;
      if (S_ISREG (current->info->modes))
        {
          stats.monitoredFiles++;
        }
      else if (S_ISLNK (current->info->modes))
        {
          stats.linksCount++;
        }
      else if (S_ISDIR (current->info->modes))
        {
          stats.dirsCount++;
        }
      stats.totalSize += current->info->fileSize;
      stats.averageSize = stats.totalSize / counter;
      if (stats.minimumSize == 0)
        {
          stats.minimumSize = current->info->fileSize;
        }
      if (stats.minimumSize > current->info->fileSize)
        {
          stats.minimumSize = current->info->fileSize;
        }
      if (stats.maximumSize < current->info->fileSize)
        {
          stats.maximumSize = current->info->fileSize;
        }
      current = current->next;
    }
  print_execution_stats (stats);
}

void print_report (clock_t startTime)
{

}

void print_execution_stats (ExecutionStats stats)
{
  printf ("Processed Files    :    %lu\n", stats.monitoredFiles);
  printf ("Processed Dirs     :    %lu\n", stats.dirsCount);
  printf ("Processed LLinks   :    %lu\n", stats.linksCount);
  printf ("Total Size         :    %lu\n", stats.totalSize);
  printf ("Average Size       :    %lu\n", stats.averageSize);
  printf ("Minimum Size       :    %lu\n", stats.minimumSize);
  printf ("Maximum Size       :    %lu\n", stats.maximumSize);
}