#include "sllNode.h"
#include <stdio.h>

void printIntList(struct SLLIntNode* head) {
    struct SLLIntNode *temp = head;

    while (NULL != temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }

    printf("\n");
}