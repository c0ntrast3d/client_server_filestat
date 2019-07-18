#include "output_writer.h"

void write_output (char *fileName, ProcessedFileInfoList infoList)
{
  FILE *outputFile = try_open_or_create_file (fileName);
  if (outputFile == NULL)
    {
      perror (fileName);
      exit (EXIT_FAILURE);
    }
  ProcessedFileInfoList current = infoList->next;
  while (current != NULL)
    {
      fprintf (outputFile, "# %s\n", current->path);
      FileInfoList files = current->info->next;
      while (files != NULL)
        {
          fprintf (outputFile, "%ld %d %d %ld %o %ld %ld %ld %ld\n",
                   files->date,
                   files->userId,
                   files->groupId,
                   files->fileSize,
                   files->modes,
                   files->lastAccessed,
                   files->lastModified,
                   files->lastModesModified,
                   files->linksToFile);
          files = files->next;
        }

      fprintf (outputFile, "###\n");
      current = current->next;
    }
  fprintf (outputFile, "###\n");
}
