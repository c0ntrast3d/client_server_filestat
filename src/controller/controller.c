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
#include "../handlers/history_producer.h"
#include "../handlers/report_producer.h"

void start (int argc, char **argv)
{
  clock_t startTime = clock ();
  AppConfig config = app_config_from_args (argc, argv);
  InputParameters parametersList = read_input (config.inputFileName);
  PreviousOutputs previousOutputs = read_output (config.outputFileName);
  //print_parameters (parametersList->next);
  ProcessedFileInfoList pil = get_stats (parametersList);

  if (config.noscan == 1)
    {
      printf ("\nNOSCAN :: PRINTING PREVIOUS OUTPUT\n");
      print_previous_stats (previousOutputs);
    }
  if (config.verbose == 1)
    {
      printf ("\nVERBOSE :: PRINTING PROCESSED STATS\n");
      write_output (config.outputFileName, pil);
      print_processed_infos (pil);
    }
  if (config.stat == 1)
    {
      printf ("\nSTAT :: PRINTING EXECUTION STATS\n");
      get_execution_stats (pil);
    }
  if (config.report == 1)
    {
      printf ("\nREPORT :: PRINTING REPORT\n");
      print_report (startTime, pil);
    }
  if (config.history == 1)
    {
      printf ("\nHISTORY :: PRINTING HISTORY\n");
      print_history (get_history (previousOutputs, config.historyTarget), config.historyTarget);
    }
}