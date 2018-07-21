#include "appendSLLNode.h"
#include "sllNode.h"

struct SLLNode* createIntSLL(int *arr, int len) {
    struct SLLNode *head;
    struct SLLNode *tail = head;

    for (int i = 0; i < len; i++) {
        tail = appendIntNode(head, arr[i]);
        tail = tail->next;
    }

    return head;
}