#include "stats_producer.h"

void get_stats(InputParameters inputParameters) {
    struct stat statsBuffer;
    FileInfoList fileInfoList = create_file_infos();
    if (fileInfoList == NULL) {
        perror("Unable to allocate buffer");
        exit(EXIT_FAILURE);
    }
    if (stat(inputParameters->next->path, &statsBuffer) == -1) {
        perror(inputParameters->next->path);
        return;
    }
    while (inputParameters != NULL) {
        add_file_info (fileInfoList, info_from_stat (&statsBuffer));
        inputParameters = inputParameters->next;
    }
    print_infos(fileInfoList->next);
}