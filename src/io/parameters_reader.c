#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "parameters_reader.h"
#include "../utils/file_utils.h"
#include "../entites/input_parameters.h"

struct InputParameter try_parse_parameter(char *line, size_t length);

InputParameters read_input(char *path) {
    InputParameters parametersList = NULL;
    FILE *inputFile = try_open_file(path);
    if (inputFile == NULL) {
        exit(EXIT_FAILURE);
    } else {
        char *buffer = malloc(sizeof(char));
        size_t bufferSize = 0;
        size_t lineLength = 0;

        if (buffer == NULL) {
            perror("Unable to allocate buffer");
            exit(EXIT_FAILURE);
        }
        parametersList = create_parameter();
        while ((lineLength = getline(&buffer, &bufferSize, inputFile)) != -1) {
            struct InputParameter currentParameter = try_parse_parameter(buffer, lineLength);
            add_parameter(parametersList, currentParameter.path, currentParameter.recursive,
                          currentParameter.followLink);
        }
        print_parameters(parametersList->next);
    }
    return parametersList;
}


struct InputParameter try_parse_parameter(char *line, size_t length) {
    char *pathParameter = malloc(length * sizeof(char));
    char *recursiveParameter = malloc(sizeof(char));
    char *followLinkParameter = malloc(sizeof(char));
    sscanf(line, "%s %c %c", pathParameter, recursiveParameter, followLinkParameter);
    struct InputParameter tmp = {.path = pathParameter, .recursive = 0, .followLink = 0};
    if (strcmp(recursiveParameter, "r") == 0) {
        tmp.recursive = 1;
    }
    if (strcmp(followLinkParameter, "l") == 0) {
        tmp.followLink = 1;
    }
    return tmp;
}