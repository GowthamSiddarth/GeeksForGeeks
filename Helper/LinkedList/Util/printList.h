#include "sllNode.h"
#include <stdio.h>

void printIntList(struct SLLNode* head) {
    struct SLLNode *temp = head;

    while (NULL != temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }

    printf("\n");
}