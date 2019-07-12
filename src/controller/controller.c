#include <stdio.h>
#include "../utils/app_config_producer.h"
#include "../utils/file_utils.h"
#include "../entites/input_parameters.h"
#include "../io/parameters_reader.h"
#include "../handlers/stats_producer.h"
#include "../entites/previous_output.h"
#include "../io/output_reader.h"

void start (int argc, char **argv)
{
  AppConfig config = app_config_from_args (argc, argv);
  InputParameters parametersList = read_input (config.inputFileName);
  PreviousOutputs previousOutputs = read_output (config.outputFileName);
  if (config.noscan == 1)
    {
      printf ("\nNOSCAN :: PRINTING PREVIOUS OUTPUT\n");
      print_previous_stats (previousOutputs->next);
    }
  if (config.verbose)
    {
      printf ("\nVERBOSE :: PRINTING STATS\n");
      get_stats (parametersList);
    }
}