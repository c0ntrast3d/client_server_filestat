#include "host_port_parser.h"

int is_host (char *arg)
{
  printf ("PARAMS PARSER IS HOST : : ARGS %s\n", arg);
  struct sockaddr_in serv_addr;
  if (inet_pton (AF_INET, arg, &serv_addr.sin_addr) != 1)
    {
      return 0;
    }
  return 1;
}

int parse_port (char *input)
{
  char *pointer;
  return strtol (input, &pointer, 10);
}

int is_port (char *arg)
{
  printf ("PARAMS PARSER IS PORT : : ARGS %s\n", arg);
  return 1;
}