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
#include "local_controller.h"
#include "remote_controller.h"

void start (int argc, char **argv)
{
  clock_t startTime = clock ();
  AppConfig config = app_config_from_args (argc, argv);

  if (config.port == 0 && config.host == NULL)
    {
      start_local_filestat (config, startTime);
    }
  else
    {
      printf ("HOST : %s\n", config.host);
      printf ("PORT : %d\n", config.port);
      start_remote_filestat (config);

    }
}