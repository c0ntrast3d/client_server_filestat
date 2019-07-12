#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "file_utils.h"

char *get_working_directory() {
    char buffer[PATH_MAX];
    char *result = malloc(sizeof(buffer));
    if (getcwd(buffer, sizeof(buffer)) != NULL) {
        sprintf(result, "%s", buffer);
        return result;
    } else {
        perror("Unable to get current working directory.");
        return NULL;
    }
}

FILE *try_open_file(char *path) {
    FILE *file;
    file = fopen(path, "r");
    if (file != NULL) {
        return file;
    } else {
        perror(path);
        return NULL;
    }
}

FILE *try_open_or_create_file(char *path) {
    FILE *file;
    file = fopen(path, "rb+");
    if (file != NULL) {
        return file;
    } else {
        file = fopen(path, "wb");
        if (file == NULL) {
            perror(path);
            return NULL;
        }
    }
}