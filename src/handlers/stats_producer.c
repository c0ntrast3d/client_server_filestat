#include "stats_producer.h"

void get_stats(InputParameters inputParameters) {
    struct stat statsBuffer;
    FileInfoList fileInfoList = create_file_infos();
    if (fileInfoList == NULL) {
        perror("Unable to allocate buffer");
        exit(EXIT_FAILURE);
    }
    printf("GETTING STATS OF : %s", inputParameters->next->path);
    if (stat(inputParameters->next->path, &statsBuffer) == -1) {
        perror(inputParameters->next->path);
        exit(EXIT_FAILURE);
    }
    struct FileInfo copy = copy_info(&statsBuffer);
    printf("COPY SIZE : %llu", copy.fileSize);
    add_file_info(fileInfoList, copy_info(&statsBuffer));
    add_file_info(fileInfoList, copy_info(&statsBuffer));
    print_infos(fileInfoList->next);

}