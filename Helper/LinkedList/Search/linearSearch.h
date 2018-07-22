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

struct SLLIntNode * linearSearchRec(struct SLLIntNode *head, int key) {
    if (NULL == head || head->value == key) {
        return head;
    } else {
        return linearSearchRec(head->next, key);
    }
}

#endif