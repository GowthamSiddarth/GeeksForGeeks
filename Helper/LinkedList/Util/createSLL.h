#include "createSLLNode.h"
#include "sllNode.h"

struct SLLIntNode* createIntSLL(int *arr, int len) {
    struct SLLIntNode *head = NULL;
    struct SLLIntNode *temp = head;

    for (int i = 0; i < len; i++) {
        if (NULL == head) {
            head = temp = createSLLIntNode(arr[i]);
        } else {
            temp->next = createSLLIntNode(arr[i]);
            temp = temp->next;
        }        
    }

    return head;
}