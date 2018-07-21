#include <malloc.h>
#include <stdio.h>
#include "sllNode.h"
#ifndef CREATE_SLL_NODE
#define CREATE_SLL_NODE

struct SLLNode * createSLLNode(int data) {
    struct SLLNode * node = (struct SLLNode *)malloc(sizeof(struct SLLNode));
    node->next = NULL;
    node->value = data;

    return node;
}

#endif