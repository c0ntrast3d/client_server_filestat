#include "output_writer.h"

void write_output (char *fileName, FileInfoList infoList)
{
  FILE *outputFile = try_open_or_create_file (fileName);
  if (outputFile == NULL)
    {
      perror (fileName);
      exit (EXIT_FAILURE);
    }
  FileInfoList current = infoList->next;
  while (current != NULL)
    {
      fprintf (outputFile, "# %s\n", "");
      fprintf (outputFile, "%ld %d %d %ld %o %ld %ld %ld %lu\n",
               current->date,
               current->userId,
               current->groupId,
               current->fileSize,
               current->modes,
               current->lastAccessed,
               current->lastModified,
               current->lastModesModified,
               current->linksToFile);
      fprintf (outputFile, "###\n");
      current = current->next;
    }
  fprintf (outputFile, "###\n");
}
