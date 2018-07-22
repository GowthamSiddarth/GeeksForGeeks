#include "sllNode.h"
#include <stdio.h>
#ifndef SLL_LENGTH
#define SLL_LENGTH

int lengthOfIntSLL(struct SLLIntNode *head) {
    int length = 0;
    struct SLLIntNode *temp = head;

    while (NULL != temp) {
        length++;
        temp = temp->next;
    }

    return length;
}

#endif