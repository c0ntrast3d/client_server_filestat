#include "previous_output.h"
#include "file_info.h"

PreviousOutputs create_previous_outputs() {
    PreviousOutputs temp;
    temp = (PreviousOutputs) malloc(sizeof(struct PreviousOutput));
    temp->next = NULL;
    return temp;
}

void add_output(PreviousOutputs head, char *path, FileInfoList list) {
    PreviousOutputs temp, p;
    temp = create_previous_outputs();
    temp->path = path;
    temp->info = list;

    if (head == NULL) {
        head = temp;
    } else {
        p = head;
        while (p != NULL) {
            p = p->next;
        }
        p->next = temp;
    }
}

void print_previous_stats(PreviousOutputs head) {
    if (head == NULL) {
        puts("LIST IS EMPTY");
    }
    PreviousOutputs current = head;
    while (current != NULL) {
        if (current->info != NULL || current->info->next != NULL) {
            print_infos(current->info);

        }
        current = current->next;
    }
}