#include "execution_stats_producer.h"
#include "stats_producer.h"
#include "../entites/execution_stats.h"

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

  printf ("EXECUTION STATS :: PROCESSED FILES:: # %lu\n", stats.monitoredFiles);
  printf ("EXECUTION STATS :: PROCESSED DIRS :: # %lu\n", stats.dirsCount);
  printf ("EXECUTION STATS :: PROCESSED LINKS :: # %lu\n", stats.linksCount);
  printf ("EXECUTION STATS :: AVERAGE SIZE :: # %lu\n", stats.averageSize);
  printf ("EXECUTION STATS :: TOTAl SIZE :: # %lu\n", stats.totalSize);
  printf ("EXECUTION STATS :: MINIMUM SIZE :: # %lu\n", stats.minimumSize);
  printf ("EXECUTION STATS :: MAXIMUM SIZE :: # %lu\n", stats.maximumSize);
}
