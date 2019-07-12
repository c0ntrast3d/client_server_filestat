#include "output_reader.h"
#include "../utils/file_utils.h"
#include "../entites/previous_output.h"
#include <string.h>
#include <zconf.h>

PreviousOutputs read_output (char *path)
{
  FILE *inputFile = try_open_or_create_file (path);
  if (inputFile == NULL)
    {
      exit (EXIT_FAILURE);
    }
  char *buffer = malloc (sizeof (char));
  size_t bufferSize = sizeof (buffer);

  if (buffer == NULL)
    {
      perror ("Unable to allocate buffer");
      exit (EXIT_FAILURE);
    }

  PreviousOutputs outputs = create_previous_outputs ();
  FileInfoList currentInfo = create_file_infos ();
  char *currentPath = malloc (sizeof (char[PATH_MAX]));
  while ((getline (&buffer, &bufferSize, inputFile) != -1))
    {
      //printf ("BUFFER : %s\n", buffer);
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
                  //printf ("IS_DELIMITER\n");
                  add_output (outputs, currentPath, currentInfo);
                  currentInfo = create_file_infos ();
                }
            }
        }
      else
        {
          //printf ("IS_INFO :: %s\n", buffer);
          struct FileInfo info = try_parse_info (buffer);
          add_file_info (currentInfo, info);
        }
    }
  return outputs;
}




