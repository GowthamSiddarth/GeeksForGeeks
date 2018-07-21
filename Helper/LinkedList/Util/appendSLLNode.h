#include <stdio.h>
#include <malloc.h>
#include "sllNode.h"

struct SLLNode* appendIntNode(struct SLLNode* head, int data) {
    struct SLLNode* temp = head;

    while (NULL != temp) {
        temp = temp->next;
    }

    struct SLLNode *tail = (struct SLLNode *)malloc(sizeof(struct SLLNode));
    tail->value = data;

    return tail;
}