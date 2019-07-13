#include "stats_producer.h"

FileInfoList get_stats (InputParameters inputParameters)
{
  struct stat statsBuffer;
  FileInfoList fileInfoList = create_file_infos ();
  if (fileInfoList == NULL)
    {
      perror ("Unable to allocate buffer");
      exit (EXIT_FAILURE);
    }
  if (stat (inputParameters->next->path, &statsBuffer) == -1)
    {
      perror (inputParameters->next->path);
      return NULL;
    }
  int counter = 1;
  while (inputParameters->next != NULL)
    {
      stat (inputParameters->next->path, &statsBuffer);
      /*printf ("STATS PRODUCER :: ADDING FILE INFO :: COUNT %d\n", counter);
      printf ("STATS PRODUCER :: CURRENT :: \n");
      struct FileInfo tmp = info_from_stat (&statsBuffer);
      print_info (&tmp);*/
      add_file_info (fileInfoList, info_from_stat (&statsBuffer));
      inputParameters = inputParameters->next;
      counter++;
    }
  return fileInfoList;
}