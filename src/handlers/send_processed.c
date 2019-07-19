#include "send_processed.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>

void send_processed (char *stringified, int port, char *host)
{
  int socketDescriptor = socket (AF_INET, SOCK_STREAM, 0);
  struct sockaddr_in serverAddress;
  struct hostent *server;

  char buffer[BUFFER_SIZE];

  if (socketDescriptor < 0)
    perror ("ERROR opening socket");
  server = gethostbyname (host);
  if (server == NULL)
    {
      fprintf (stderr, "ERROR, no such host\n");
      exit (0);
    }
  bzero ((char *) &serverAddress, sizeof (serverAddress));
  serverAddress.sin_family = AF_INET;
  bcopy ((char *) server->h_addr,
         (char *) &serverAddress.sin_addr.s_addr,
         server->h_length);
  serverAddress.sin_port = htons (port);
  if (connect (socketDescriptor, (struct sockaddr *) &serverAddress, sizeof (serverAddress)) < 0)
    perror ("ERROR connecting");

  bzero (buffer, BUFFER_SIZE);
  strcpy (buffer, stringified);
  send (socketDescriptor, &buffer, strlen (buffer), 0);

  close (socketDescriptor);
}