#include "file_info.h"

FileInfoList create_file_infos() {
    FileInfoList temp;
    temp = (FileInfoList) malloc(sizeof(struct FileInfo));
    temp->next = NULL;
    return temp;
}

void add_file_info(FileInfoList head, struct FileInfo node) {
    FileInfoList temp, p;
    temp = create_file_infos();
    temp->date = node.date;
    temp->fileSize = node.fileSize;
    temp->modes = node.modes;
    temp->lastAccessed = node.lastAccessed;
    temp->lastModified = node.lastModified;
    temp->lastModesModified = node.lastModesModified;
    temp->linksToFile = node.linksToFile;
    temp->userId = node.userId;
    temp->groupId = node.groupId;

    if (head == NULL) {
        head = temp;
    } else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }
}

static long int fileModes[10] = {
        S_IRUSR,
        S_IWUSR,
        S_IXUSR,
        S_IRGRP,
        S_IWGRP,
        S_IXGRP,
        S_IROTH,
        S_IWOTH,
        S_IXOTH
};

static char *stringify_modes(mode_t modes) {
    char *template = malloc(10 * sizeof(char));
    sprintf(template, "%s", "rwxrwxrwx");
    char unspecified = '-';
    for (int i = 0; i < 9; i++) {
        if ((modes & fileModes[i]) != fileModes[i]) {
            template[i] = unspecified;
        }
    }
    return template;
}

void print_info(struct FileInfo *info) {
    puts("");
    //printf("Info Produced:           %s", ctime(&info->date));
    printf("File Size:               %lld \n", info->fileSize);
    printf("File Modes:              %s \n", stringify_modes(info->modes));
    printf("Last Access Time:        %s", ctime(&info->lastAccessed));
    printf("Last Modified Time:      %s", ctime(&info->lastModified));
    printf("Last Status Change Time: %s", ctime(&info->lastModesModified));
    printf("Links To File:           %hu \n", info->linksToFile);
    printf("User ID:                 %d \n", info->userId);
    printf("Group ID:                %d \n", info->groupId);
}


void print_infos(FileInfoList head) {
    if (head == NULL) {
        puts("LIST IS EMPTY");
    }
    FileInfoList current = head;
    while (current != NULL) {
        print_info(current);
        current = current->next;
    }
}


struct FileInfo copy_info(struct stat *stats) {
    struct FileInfo temp;
    time_t now;
    time(&now);
    temp.date = now;
    temp.fileSize = stats->st_size;
    temp.modes = stats->st_mode;
    temp.lastAccessed = stats->st_atime;
    temp.lastModified = stats->st_ctime;
    temp.lastModesModified = stats->st_mtime;
    temp.linksToFile = stats->st_nlink;
    temp.userId = stats->st_uid;
    temp.groupId = stats->st_gid;
    temp.next = NULL;

    return temp;
}

struct FileInfo try_parse_info(char *line) {
    struct FileInfo tmp = {};
    if (sscanf(line, "%ld %d %d %ld %hu %ld %ld %ld %hu\n",
               &tmp.date,
               &tmp.userId,
               &tmp.groupId,
               &tmp.fileSize,
               &tmp.modes,
               &tmp.lastAccessed,
               &tmp.lastModified,
               &tmp.lastModesModified,
               &tmp.linksToFile
    ) <= 0) {
        return tmp;
    }
/*    printf("\nOUTPUT_READER :: \n");
    print_info(&tmp);*/
    return tmp;
}