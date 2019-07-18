#include "history_producer.h"

void print_history (FileInfoList history, char *path);

FileInfoList get_history (PreviousOutputs previous, char *searchTerm)
{
  if (previous->next == NULL)
    {
      printf ("HISTORY :: CAN'T SEARCH ON VOID DATABASE\n");
      return NULL;
    }
  PreviousOutputs currentOutput = previous->next;
  while (currentOutput != NULL)
    {
      if (strcmp (currentOutput->path, searchTerm) == 0)
        {
          return currentOutput->info;
        }
      currentOutput = currentOutput->next;
    }
  return NULL;
}

void print_history (FileInfoList history, char *path)
{
  if (history != NULL)
    {
      printf ("%s\n", path);
      print_infos (history);
    }
  else
    {
      printf ("HISTORY :: NOTHING FOUND\n");
    }
}
