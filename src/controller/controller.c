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
#include "../handlers/search_user_group.h"
#include "../handlers/search_by_length.h"
#include "../handlers/input_output_merger.h"

void start (int argc, char **argv)
{
  clock_t startTime = clock ();
  AppConfig config = app_config_from_args (argc, argv);
  InputParameters parametersList = read_input (config.inputFileName);
  PreviousOutputs previousOutputs = read_output (config.outputFileName);
  ProcessedFileInfoList processedInfos;

  if (config.noscan == 1)
    {
      printf ("\nNOSCAN :: PRINTING PREVIOUS OUTPUT\n");
      print_previous_stats (previousOutputs);
    }
  else
    {
      processedInfos = get_stats (parametersList);
      ProcessedFileInfoList merged;
      if (config.verbose == 1)
        {
          printf ("\nVERBOSE :: PRINTING PROCESSED STATS\n");
          print_processed_infos (processedInfos);
        }
      if (config.stat == 1)
        {
          printf ("\nSTAT :: PRINTING EXECUTION STATS\n");
          get_execution_stats (processedInfos);
        }
      if (config.report == 1)
        {
          printf ("\nREPORT :: PRINTING REPORT\n");
          print_report (startTime, processedInfos);
        }
      if (config.history == 1)
        {
          printf ("\nHISTORY :: PRINTING HISTORY\n");
          print_history (get_history (previousOutputs, config.historyTarget), config.historyTarget);
        }
      if (config.user == 1)
        {
          printf ("\nUSER :: PRINTING USER FILES INFO\n");
          print_user_files (get_user_files (previousOutputs, config.userId), config.userId);
        }
      if (config.group == 1)
        {
          printf ("\nGROUP :: PRINTING GROUP FILES INFO\n");
          print_group_files (get_group_files (previousOutputs, config.groupId), config.groupId);
        }
      if (config.length == 1)
        {
          printf ("\nLENGTH :: PRINTING INFO BY LENGTH\n");
          FileInfoList byLength = get_files_by_length (processedInfos, config.lengthMin, config.lengthMax);
          print_files_by_length (byLength, config.lengthMin, config.lengthMax);
        }
      merged = merge_current_with_previous (processedInfos, previousOutputs);
      write_output (config.outputFileName, merged);
    }
}