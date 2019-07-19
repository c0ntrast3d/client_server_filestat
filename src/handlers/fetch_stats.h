#include "../entites/file_info.h"
#ifndef _FETCH_STATS_H_
#define _FETCH_STATS_H_

#include "../entites/previous_output.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>

#define BUFFER_SIZE 8096

ProcessedFileInfoList receive_processed (int port, char *host);

#endif //_FETCH_STATS_H_
