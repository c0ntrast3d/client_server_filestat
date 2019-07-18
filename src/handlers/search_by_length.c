#include "search_by_length.h"

FileInfoList get_files_by_length (ProcessedFileInfoList processed, long int lengthMin, long int lengthMax)
{
  if (lengthMax == 0)
    {
      printf ("MAX LENGTH CAN'T BE 0\n");
      return NULL;
    }
  if (processed->next == NULL)
    {
      printf ("LENGTH :: CAN'T SEARCH ON VOID DATABASE\n");
      return NULL;
    }
  FileInfoList filesByLength = create_file_infos ();
  ProcessedFileInfoList currentOutput = processed->next;
  while (currentOutput != NULL)
    {
      FileInfoList currentFile = currentOutput->info->next;
      while (currentFile != NULL)
        {
          if (currentFile->fileSize > lengthMin && currentFile->fileSize < lengthMax)
            {
              add_file_info (filesByLength, *currentFile);
            }
          currentFile = currentFile->next;
        }
      currentOutput = currentOutput->next;
    }
  return filesByLength;
}

void print_files_by_length (FileInfoList filesByLength, long int lengthMin, long int lengthMax)
{
  if (filesByLength != NULL)
    {
      printf ("LENGTH :: Min : %ld | Max : %ld\n", lengthMin, lengthMax);
      print_infos (filesByLength);
    }
  else
    {
      printf ("LENGTH :: NOTHING FOUND\n");
    }
}
