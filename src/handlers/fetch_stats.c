#include "fetch_stats.h"
#include "../utils/stringify_info.h"

ProcessedFileInfoList receive_processed (int port, char *host)
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
  bcopy ((char *) server->h_addr, (char *) &serverAddress.sin_addr.s_addr, server->h_length);
  serverAddress.sin_port = htons (port);
  if (connect (socketDescriptor, (struct sockaddr *) &serverAddress, sizeof (serverAddress)) < 0)
    perror ("ERROR connecting");

  bzero (buffer, BUFFER_SIZE);
  strcpy (buffer, "noscan");
  send (socketDescriptor, &buffer, strlen (buffer), 0);
  sleep (1);
  ssize_t receivedBytes = 0;

  while (1)
    {
      memset (buffer, 0, BUFFER_SIZE);
      if ((receivedBytes = recv (socketDescriptor, buffer, BUFFER_SIZE, 0)) == 0)
        {
          break;
        }
      else
        {
          printf ("%s", buffer);
        }
    }
  if (receivedBytes < 0)
    {
      perror ("ERROR RECEIVING STATS");
    }
  else
    {
      char *nbuf[BUFFER_SIZE];
      strcpy (buffer, nbuf);
      ProcessedFileInfoList destringified = destringify_info (nbuf);
      return destringified;
    }
  close (socketDescriptor);
  return NULL;
}