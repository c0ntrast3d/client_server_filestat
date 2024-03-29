#ifndef FILESTAT_FILE_UTILS_H
#define FILESTAT_FILE_UTILS_H

char *get_working_directory ();

FILE *try_open_file (char *path);

FILE *try_open_or_create_file (char *path);

int is_file (char *path);

#endif //FILESTAT_FILE_UTILS_H
