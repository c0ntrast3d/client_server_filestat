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
          FileInfoList dirFiles = process_directory (currentParameter->path, currentParameter->followLink);
          add_processed_file_info (fileInfoList, currentParameter->path, dirFiles);
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

FileInfoList process_directory (char *path, int followLink)
{
  DIR *directory;
  struct dirent *dirStream;
  struct stat statsBuffer;
  char *filePath;
  FileInfoList currentFiles = create_file_infos ();
  directory = opendir (path);
  if (directory)
    {
      while ((dirStream = readdir (directory)) != NULL)
        {
          if (strcmp (dirStream->d_name, ".") == 0 || strcmp (dirStream->d_name, "..") == 0)
            {
              continue;
            }
          filePath = malloc (sizeof (char[PATH_MAX]));
          sprintf (filePath, "%s/%s", path, dirStream->d_name);
          if (followLink == 1)
            {
              lstat (filePath, &statsBuffer);
            }
          else
            {
              stat (filePath, &statsBuffer);
            }
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


