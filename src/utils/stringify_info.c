#include "stringify_info.h"

char *stringify_file_info (ProcessedFileInfoList processed)
{
  if (processed->next == NULL)
    {
      return NULL;
    }

  ProcessedFileInfoList currentFile = processed->next;
  FILE *outStream;
  char *stringifyed;
  char *buffer = malloc (sizeof (char));
  size_t bufferSize = sizeof (buffer);
  outStream = open_memstream (&stringifyed, &bufferSize);
  while (currentFile != NULL)
    {
      fprintf (outStream, "# %s\n", currentFile->path);
      //printf ("CURRENT PATH : %s\n", currentFile->path);
      FileInfoList currentFileInfos = currentFile->info->next;
      while (currentFileInfos != NULL)
        {
          fprintf (outStream, "%ld %d %d %ld %o %ld %ld %ld %ld\n",
                   currentFileInfos->date,
                   currentFileInfos->userId,
                   currentFileInfos->groupId,
                   currentFileInfos->fileSize,
                   currentFileInfos->modes,
                   currentFileInfos->lastAccessed,
                   currentFileInfos->lastModified,
                   currentFileInfos->lastModesModified,
                   currentFileInfos->linksToFile);
          currentFileInfos = currentFileInfos->next;
        }
      fprintf (outStream, "###\n");
      currentFile = currentFile->next;
    }
  fprintf (outStream, "###\n");
  fclose (outStream);
  //puts (stringifyed);
  return stringifyed;
}

ProcessedFileInfoList destringify_info (char *stringified)
{
  printf ("DESTRINGIFY : INPUT :: %s", stringified);
  FILE *stream;
  char *buffer = malloc (sizeof (char));
  size_t bufferSize = sizeof (buffer);
  char *currentPath = malloc (sizeof (char[PATH_MAX]));
  stream = fmemopen (stringified, strlen (stringified), "r");
  ProcessedFileInfoList outputs = create_processed_file_infos ();
  FileInfoList currentInfo = create_file_infos ();
  while ((getline (&buffer, &bufferSize, stream) != -1))
    {
      {
        if (buffer[0] == '#')
          {
            if (buffer[1] != '#')
              {
                currentPath = malloc (sizeof (char[PATH_MAX]));
                //printf ("IS_PATH :: %s", buffer);
                sscanf (buffer, "# %s", currentPath);
              }
            else
              {
                if (strcmp (buffer, "###\n") == 0)
                  {
                    //printf ("IS_DELIMETER\n");
                    add_processed_file_info (outputs, currentPath, currentInfo);
                    currentInfo = create_file_infos ();
                  }
              }
          }
        else
          {
            struct FileInfo info = try_parse_info (buffer);
            add_file_info (currentInfo, info);
          }
      }
    }
  //print_processed_infos (outputs);
  return outputs;
}
