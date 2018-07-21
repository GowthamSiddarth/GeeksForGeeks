#include <stdio.h>
#include <malloc.h>
#include "sllNode.h"
#include "createSLLNode.h"

#ifndef APPEND_NODE
#define APPEND_NODE

void appendIntNode(struct SLLNode** head, int data) {
    struct SLLNode *temp = *head;

    while (NULL != temp && NULL != temp->next) {
        temp = temp->next;
    }

    if (NULL == temp) {
        *head = createSLLNode(data);
    } else {
        temp->next = createSLLNode(data);
    }    
}

#endif