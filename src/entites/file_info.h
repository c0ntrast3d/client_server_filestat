#ifndef FILESTAT_FILE_INFO_H
#define FILESTAT_FILE_INFO_H

#include <sys/types.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

struct FileInfo {
  time_t date;
  long int fileSize;
  mode_t modes;
  time_t lastAccessed;
  time_t lastModified;
  time_t lastModesModified;
  nlink_t linksToFile;
  uid_t userId;
  gid_t groupId;
  struct FileInfo *next;
};

typedef struct FileInfo *FileInfoList;

struct ProcessedFileInfo {
  char *path;
  FileInfoList info;
  struct ProcessedFileInfo *next;
};

typedef struct ProcessedFileInfo *ProcessedFileInfoList;

FileInfoList create_file_infos ();

void add_file_info (FileInfoList head, struct FileInfo node);
ProcessedFileInfoList create_processed_file_infos ();

void add_processed_file_info (ProcessedFileInfoList head, char *path, FileInfoList list);
void print_processed_infos (ProcessedFileInfoList head);

void print_infos (FileInfoList head);

void print_info (struct FileInfo *info);

struct FileInfo try_parse_info (char *line);

struct FileInfo info_from_stat (struct stat *stats);

#endif //FILESTAT_FILE_INFO_H
