#include <stdio.h>
#include <malloc.h>
#include "sllNode.h"
#include "createSLLNode.h"

#ifndef APPEND_NODE
#define APPEND_NODE

void appendIntNode(struct SLLIntNode** head, int data) {
    struct SLLIntNode *temp = *head;

    while (NULL != temp && NULL != temp->next) {
        temp = temp->next;
    }

    if (NULL == temp) {
        *head = createSLLIntNode(data);
    } else {
        temp->next = createSLLIntNode(data);
    }    
}

#endif