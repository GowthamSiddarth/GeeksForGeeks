#include "../Util/sllNode.h"
#include <stdio.h>
#ifndef SLL_LINEAR_SEARCH
#define SLL_LINEAR_SEARCH

struct SLLIntNode * linearSearchItr(struct SLLIntNode *head, int key) {
    struct SLLIntNode *temp = head;
    while (NULL != temp && key != temp->value) {
        temp = temp->next;
    }

    return temp;
}

#endif