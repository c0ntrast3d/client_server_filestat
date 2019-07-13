#ifndef _EXECUTION_STATS_H_
#define _EXECUTION_STATS_H_

#include <zconf.h>
typedef struct ExecutionStats_t {
  unsigned long monitoredFiles;
  unsigned long linksCount;
  unsigned long dirsCount;
  unsigned long totalSize;
  unsigned long averageSize;
  unsigned long maximumSize;
  unsigned long minimumSize;
} ExecutionStats;

ExecutionStats init_execution_stats ();

#endif //_EXECUTION_STATS_H_
