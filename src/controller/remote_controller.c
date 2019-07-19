#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include "remote_controller.h"
#include "../utils/stringify_info.h"
#include "../handlers/send_processed.h"
#include "../handlers/fetch_stats.h"

void start_remote_filestat (AppConfig config)
{
  InputParameters parametersList = read_input (config.inputFileName);
  if (config.noscan == 1)
    {
      printf ("\nNOSCAN :: FETCHING PREVIOUS OUTPUT\n");
      ProcessedFileInfoList previous = receive_processed (config.port, config.host);
      print_processed_infos (previous);
    }
  else
    {
      ProcessedFileInfoList processedInfos = get_stats (parametersList);
      char *stringified = stringify_file_info (processedInfos);
      send_processed (stringified, config.port, config.host);
    }
}

