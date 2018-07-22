#include "../Util/createSLL.h"
#include "../Util/appendSLLNode.h"
#include "../Util/prependSLLNode.h"
#include "../Util/sllLength.h"
#include "../Util/nodeAt.h"
#include <stdio.h>
#include "../Util/printList.h"

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int listLen;

    struct SLLIntNode* list = createIntSLL(arr, len);
    listLen = lengthOfIntSLL(list);
    printIntList(list);
    printf("listLen = %d\n", listLen);

    appendIntNode(&list, 10);
    listLen = lengthOfIntSLL(list);
    printIntList(list);
    printf("listLen = %d\n", listLen);

    prependIntNode(&list, 0);
    listLen = lengthOfIntSLL(list);
    printIntList(list);
    printf("listLen = %d\n", listLen);

    int pos[] = {-99, -1, 0, 12, 3, 5, 9, 11, 123, 92983, 10};
    int numOfPos = sizeof(pos) / sizeof(pos[0]);
    for (int i = 0; i< numOfPos; i++) {
        int currPos = pos[i];
        struct SLLIntNode* currNode = sllIntNodeAt(list, currPos);        

        if (NULL == currNode) {
            printf("currPos = %d, currNodeVal = %s\n", currPos, "NULL");
        } else {
            printf("currPos = %d, currNodeVal = %d\n", currPos, currNode->value);
        }        
    }

    return 0;
}