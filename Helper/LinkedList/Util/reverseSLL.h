#include "sllNode.h"
#include <stdio.h>
#ifndef REVERSE_SLL
#define REVERSE_SLL

struct SLLIntNode * reverseIntSLLItr(struct SLLIntNode * head) {
    struct SLLIntNode *prev = NULL;
    struct SLLIntNode *curr = head;
    struct SLLIntNode *next = head;

    while (NULL != next) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

#endif