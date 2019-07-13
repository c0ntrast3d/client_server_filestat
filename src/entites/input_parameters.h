#ifndef FILESTAT_INPUT_PARAMETERS_H
#define FILESTAT_INPUT_PARAMETERS_H

struct InputParameter {
  char *path;
  int recursive;
  int followLink;
  struct InputParameter *next;
};

typedef struct InputParameter *InputParameters;

InputParameters create_parameter ();

InputParameters add_parameter (InputParameters head, char *path, int recursive, int followLink);

void print_parameters (InputParameters head);

#endif //FILESTAT_INPUT_PARAMETERS_H
