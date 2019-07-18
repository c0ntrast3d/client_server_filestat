#ifndef _SEARCH_USER_GROUP_H_
#define _SEARCH_USER_GROUP_H_

#include "../entites/file_info.h"
#include "../entites/previous_output.h"
#include <string.h>

FileInfoList get_user_files (PreviousOutputs previous, uid_t userId);
void print_user_files (FileInfoList userFiles, uid_t userId);
FileInfoList get_group_files (PreviousOutputs previous, gid_t groupId);
void print_group_files (FileInfoList groupFiles, uid_t groupId);

#endif //_SEARCH_USER_GROUP_H_
