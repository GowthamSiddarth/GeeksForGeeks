#include "createSLLNode.h"
#include "sllNode.h"

struct SLLNode* createIntSLL(int *arr, int len) {
    struct SLLNode *head = NULL;
    struct SLLNode *temp = head;

    for (int i = 0; i < len; i++) {
        if (NULL == head) {
            head = temp = createSLLNode(arr[i]);
        } else {
            temp->next = createSLLNode(arr[i]);
            temp = temp->next;
        }        
    }

    return head;
}