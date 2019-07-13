#include "execution_stats.h"

ExecutionStats init_execution_stats ()
{
  ExecutionStats cleanStats;
  cleanStats.averageSize = 0;
  cleanStats.dirsCount = 0;
  cleanStats.linksCount = 0;
  cleanStats.maximumSize = 0;
  cleanStats.minimumSize = 0;
  cleanStats.totalSize = 0;
  cleanStats.monitoredFiles = 0;
  return cleanStats;
}
