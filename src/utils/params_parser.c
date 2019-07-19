#include "params_parser.h"

void parse_params (int argc, char **argv, int optionsCount, AppConfig *currentConfiguration)
{
  if (argc > optionsCount)
    {
      if (argv[optionsCount] != NULL)
        {
          currentConfiguration->inputFileName = argv[optionsCount];
        }
      if (argv[optionsCount + 1] != NULL)
        {
          currentConfiguration->outputFileName = argv[optionsCount + 1];
        }
      if ((currentConfiguration->port = (parse_port (argv[argc - 1]))) == 0)
        {
          perror ("INVALID PORT FORMAT");
          exit (EXIT_FAILURE);
        }
      if (is_host (argv[argc - 2]))
        {
          currentConfiguration->host = argv[optionsCount];
        }
      else
        {
          perror ("INVALID HOST FORMAT");
          exit (EXIT_FAILURE);
        }
    }
}



