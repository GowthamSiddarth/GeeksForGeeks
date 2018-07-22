#include "sllNode.h"
#include "createSLLNode.h"
#ifndef PREPEND_SLL_NODE
#define PREPEND_SLL_NODE

void prependIntNode(struct SLLIntNode **head, int data) {
    struct SLLIntNode* newHead = createSLLIntNode(data);
    newHead->next = *head;
    *head = newHead;
}

#endif