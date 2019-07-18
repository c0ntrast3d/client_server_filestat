#include "options_parser.h"
#include <getopt.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "../entites/cli_options.h"
#include "../io/help_printer.h"
#include <regex.h>

struct LengthMinMax {
  long int min;
  long int max;
};

static struct LengthMinMax try_get_length_min_max (char *inputString);

void parse_options (int argc, char **argv, AppConfig *currentConfiguration)
{
  int optionIndex = 0;
  int currentOption = getopt_long (argc, argv, shortOptions, &LongOptions, &optionIndex);
  while (currentOption != -1)
    {
      switch (currentOption)
        {
          case 'v':currentConfiguration->verbose = 1;
          break;
          case 's':currentConfiguration->stat = 1;
          break;
          case 'r':currentConfiguration->report = 1;
          break;
          case 'h':currentConfiguration->history = 1;
          currentConfiguration->historyTarget = optarg;
          break;
          case 'u':currentConfiguration->user = 1;
          char *pointer;
          if ((currentConfiguration->userId = strtol (optarg, &pointer, 10)) == 0)
            {
              printf ("INVALID USER ID FORMAT\n");
              exit (EXIT_FAILURE);
            }
          break;
          case 'g':currentConfiguration->group = 1;
          if ((currentConfiguration->groupId = strtol (optarg, &pointer, 10)) == 0)
            {
              printf ("INVALID GROUP ID FORMAT\n");
              exit (EXIT_FAILURE);
            }
          case 'l':currentConfiguration->length = 1;
          struct LengthMinMax lArgs = try_get_length_min_max (optarg);
          currentConfiguration->lengthMin = lArgs.min;
          currentConfiguration->lengthMax = lArgs.max;
          break;
          case 'n':currentConfiguration->noscan = 1;
          break;
          case ':':printf ("Missing argument for option -%c\n\n", optopt);
          print_help ();
          exit (EXIT_FAILURE);
          case '?':print_help ();
          exit (EXIT_FAILURE);
          default:break;
        }
      currentOption = getopt_long (argc, argv, shortOptions, &LongOptions, &optionIndex);
    }
  currentConfiguration->optionsCount = optind;
}

static struct LengthMinMax try_get_length_min_max (char *inputString)
{
  long int min = 0;
  long int max = 0;
  if (inputString[0] == ':')
    {
      sscanf (inputString, ":%ld", &max);
    }
  else
    {
      if (sscanf (inputString, "%ld:%ld", &min, &max) < 1)
        {
          printf ("INVALID LENGTH ARGUMENTS\n");
          print_help ();
          exit (EXIT_FAILURE);
        }
    }
  struct LengthMinMax result = {.min = min, .max = max};
  return result;
}

