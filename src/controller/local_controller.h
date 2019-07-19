#ifndef _LOCAL_CONTROLLER_H_
#define _LOCAL_CONTROLLER_H_

#include <stdio.h>
#include "../entites/app_config.h"
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

void start_local_filestat (AppConfig config, clock_t start);

#endif //_LOCAL_CONTROLLER_H_
