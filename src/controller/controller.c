#include <stdio.h>
#include "../handlers/app_config_producer.h"
#include "../utils/file_utils.h"
#include "../entites/input_parameters.h"
#include "../io/parameters_reader.h"
#include "../handlers/stats_producer.h"
#include "../handlers/execution_stats_producer.h"
#include "../entites/previous_output.h"
#include "../io/output_reader.h"
#include "../io/output_writer.h"

void start (int argc, char **argv)
{
  //clock_t startTime = clock ();
  AppConfig config = app_config_from_args (argc, argv);
  InputParameters parametersList = read_input (config.inputFileName);
  PreviousOutputs previousOutputs = read_output (config.outputFileName);
  if (config.noscan == 1)
    {
      printf ("\nNOSCAN :: PRINTING PREVIOUS OUTPUT\n");
      printf ("NOSCAN :: %s\n", previousOutputs->next->path);
      print_previous_stats (previousOutputs);
    }
  if (config.verbose == 1)
    {
      printf ("\nVERBOSE :: PRINTING PROCESSED STATS\n");
      FileInfoList processed = get_stats (parametersList);
      write_output (config.outputFileName, processed);
      print_infos (processed);
    }
  if (config.stat == 1)
    {
      printf ("\nSTAT :: PRINTING EXECUTION STATS\n");
      get_execution_stats (parametersList);
    }
  if (config.report == 1)
    {
      printf ("\nREPORT :: PRINTING REPORT\n");
      /*
       * # processed files
       * execution time,
       * maximum file size
       * */
      get_execution_stats (parametersList);
    }
}