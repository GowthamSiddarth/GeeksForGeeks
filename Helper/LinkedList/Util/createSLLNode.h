#include <malloc.h>
#include <stdio.h>
#include "sllNode.h"
#ifndef CREATE_SLL_NODE
#define CREATE_SLL_NODE

struct SLLIntNode * createSLLIntNode(int data) {
    struct SLLIntNode * node = (struct SLLIntNode *)malloc(sizeof(struct SLLIntNode));
    node->next = NULL;
    node->value = data;

    return node;
}

#endif