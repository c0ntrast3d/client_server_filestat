#include "output_reader.h"
#include "../utils/file_utils.h"
#include "../entites/previous_output.h"
#include <string.h>

PreviousOutputs read_output(char *path) {
    FILE *inputFile = try_open_or_create_file(path);
    if (inputFile == NULL) {
        exit(EXIT_FAILURE);
    }
    char *buffer = malloc(sizeof(char));
    size_t bufferSize = 0;

    if (buffer == NULL) {
        perror("Unable to allocate buffer");
        exit(EXIT_FAILURE);
    }
    PreviousOutputs entries = create_previous_outputs();

    FileInfoList current = create_file_infos();
    char *currentFilePath = NULL;
    struct FileInfo currentParameter = {};
    while (getline(&buffer, &bufferSize, inputFile) != -1) {
        if (buffer[0] == '#' && buffer[1] != '#') {
            currentFilePath = malloc(sizeof(buffer));
            sscanf(buffer, "# %s", currentFilePath);
            printf("\nCURRENT FP :: %s \n", currentFilePath);
            free(currentFilePath);
        } else if (buffer[1] == '#' && buffer[2] == '#') {
            add_output(entries, currentFilePath, current);
            continue;
        } else {
            currentParameter = try_parse_info(buffer);
            add_file_info(current, currentParameter);
        }
    }
    return entries;
}




