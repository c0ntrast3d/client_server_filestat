#include "execution_stats_producer.h"
#include "stats_producer.h"
#include "../entites/execution_stats.h"

void print_execution_stats (ExecutionStats stats);

void get_execution_stats (InputParameters parameters)
{
  ExecutionStats stats = init_execution_stats ();
  FileInfoList processed = get_stats (parameters);
  if (processed == NULL)
    {
      puts ("LIST IS EMPTY");
      return;
    }
  FileInfoList current = processed->next;
  int counter = 0;
  while (current != NULL)
    {
      ++counter;
      if (S_ISREG (current->modes))
        {
          stats.monitoredFiles++;
        }
      else if (S_ISLNK (current->modes))
        {
          stats.linksCount++;
        }
      else if (S_ISDIR (current->modes))
        {
          stats.dirsCount++;
        }
      stats.totalSize += current->fileSize;
      stats.averageSize = stats.totalSize / counter;
      if (stats.minimumSize == 0)
        {
          stats.minimumSize = current->fileSize;
        }
      if (stats.minimumSize > current->fileSize)
        {
          stats.minimumSize = current->fileSize;
        }
      if (stats.maximumSize < current->fileSize)
        {
          stats.maximumSize = current->fileSize;
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