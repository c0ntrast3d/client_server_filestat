#ifndef _HOST_PORT_PARSER_H_
#define _HOST_PORT_PARSER_H_

#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>

int is_host (char *arg);

int parse_port (char *input);

int is_port (char *arg);

#endif //_HOST_PORT_PARSER_H_
