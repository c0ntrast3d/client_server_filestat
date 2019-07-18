#include "search_user_group.h"

FileInfoList get_user_files (PreviousOutputs previous, uid_t userId)
{
  if (previous->next == NULL)
    {
      printf ("USER :: CAN'T SEARCH ON VOID DATABASE\n");
      return NULL;
    }
  FileInfoList userFiles = create_file_infos ();
  PreviousOutputs currentOutput = previous->next;
  print_previous_stats (currentOutput);
  while (currentOutput != NULL)
    {
      FileInfoList currentFile = currentOutput->info->next;
      while (currentFile != NULL)
        {
          if (currentFile->userId == userId)
            {
              add_file_info (userFiles, *currentFile);
            }
          currentFile = currentFile->next;
        }
      currentOutput = currentOutput->next;
    }
  return userFiles;
}

FileInfoList get_group_files (PreviousOutputs previous, gid_t groupId)
{
  if (previous->next == NULL)
    {
      printf ("GROUP :: CAN'T SEARCH ON VOID DATABASE\n");
      return NULL;
    }
  FileInfoList groupFiles = create_file_infos ();
  PreviousOutputs currentOutput = previous->next;
  print_previous_stats (currentOutput);
  while (currentOutput != NULL)
    {
      FileInfoList currentFile = currentOutput->info->next;
      while (currentFile != NULL)
        {
          if (currentFile->userId == groupId)
            {
              add_file_info (groupFiles, *currentFile);
            }
          currentFile = currentFile->next;
        }
      currentOutput = currentOutput->next;
    }
  return groupFiles;
}

void print_user_files (FileInfoList userFiles, uid_t userId)
{
  if (userFiles != NULL)
    {
      printf ("USER ID %u\n", userId);
      print_infos (userFiles);
    }
  else
    {
      printf ("USER :: NOTHING FOUND\n");
    }
}

void print_group_files (FileInfoList groupFiles, uid_t groupId)
{
  if (groupFiles != NULL)
    {
      printf ("GROUP ID %u\n", groupId);
      print_infos (groupFiles);
    }
  else
    {
      printf ("GROUP :: NOTHING FOUND\n");
    }
}
