#include <dirent.h>
#include "stats_producer.h"

static FileInfoList process_directory (char *path, int followLink);

ProcessedFileInfoList get_stats (InputParameters inputParameters)
{
  struct stat statsBuffer;
  ProcessedFileInfoList fileInfoList = create_processed_file_infos ();
  if (fileInfoList == NULL)
    {
      perror ("Unable to allocate buffer");
      exit (EXIT_FAILURE);
    }

  InputParameters currentParameter = inputParameters->next;
  FileInfoList currentFiles = create_file_infos ();
  while (currentParameter != NULL)
    {
      if (currentParameter->recursive == 1)
        {
          //printf ("RECURSIVE :: %s\n", currentParameter->path);
          add_processed_file_info (fileInfoList, currentParameter->path, process_directory (currentParameter->path, currentParameter->followLink));
        }
      else if (currentParameter->followLink == 1)
        {
          lstat (currentParameter->path, &statsBuffer);
          //printf ("ELSE PROCESSING PATH :: %s\n", currentParameter->path);
          add_file_info (currentFiles, info_from_stat (&statsBuffer));
          add_processed_file_info (fileInfoList, currentParameter->path, currentFiles);
        }
      else
        {
          stat (currentParameter->path, &statsBuffer);
          //printf ("ELSE PROCESSING PATH :: %s\n", currentParameter->path);
          add_file_info (currentFiles, info_from_stat (&statsBuffer));
          add_processed_file_info (fileInfoList, currentParameter->path, currentFiles);
        }
      currentFiles = create_file_infos ();
      currentParameter = currentParameter->next;
    }
  return fileInfoList;
}

static FileInfoList process_directory (char *path, int followLink)
{
  DIR *directory;
  struct dirent *dir;
  struct stat statsBuffer;
  FileInfoList currentFiles = create_file_infos ();
  directory = opendir (path);
  if (directory)
    {
      while ((dir = readdir (directory)) != NULL)
        {
          if (strcmp (dir->d_name, ".") == 0 || strcmp (dir->d_name, "..") == 0)
            {
              continue;
            }
          //printf ("%s\n", dir->d_name);
          if (followLink == 1)
            {
              lstat (path, &statsBuffer);
            }
          else
            {
              stat (path, &statsBuffer);
            }
          //printf ("PROCESSING DIR PATH :: %s\n", path);
          add_file_info (currentFiles, info_from_stat (&statsBuffer));
        }
      closedir (directory);
    }
  else
    {
      perror (path);
    }
  return currentFiles;
}