#include "input_parameters.h"
#include <stdlib.h>
#include <stdio.h>

InputParameters create_parameter ()
{
  InputParameters temp;
  temp = (InputParameters) malloc (sizeof (struct InputParameter));
  temp->next = NULL;
  return temp;
}

InputParameters add_parameter (InputParameters head, char *path, int recursive, int followLink)
{
  InputParameters temp, p;
  temp = create_parameter ();
  temp->path = path;
  temp->recursive = recursive;
  temp->followLink = followLink;
  if (head == NULL)
    {
      head = temp;
    }
  else
    {
      p = head;
      while (p->next != NULL)
        {
          p = p->next;
        }
      p->next = temp;
    }
  return head;
}

void print_parameters (InputParameters head)
{
  if (head == NULL)
    {
      puts ("LIST IS EMPTY");
      return;
    }
  InputParameters current = head;
  while (current != NULL)
    {
/*        printf("Printing parameter: \npath: %s\nrecursive : %d\nfollowLink : %d\n",
               current->path,
               current->recursive,
               current->followLink);*/
      current = current->next;
    }
}
