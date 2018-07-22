#include "sllNode.h"
#include <stdio.h>
#ifndef NODE_AT
#define NODE_AT

struct SLLIntNode* sllIntNodeAt(struct SLLIntNode *head, int pos) {
    if (pos < 0) {
        return NULL;
    } else {
        struct SLLIntNode *temp = head;
        while (pos > 0 && NULL != temp) {
            temp = temp->next;
            pos--;
        }

        return temp;
    }
}

#endif