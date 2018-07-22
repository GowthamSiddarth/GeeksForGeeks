#include "../Util/createSLL.h"
#include "../Util/appendSLLNode.h"
#include "../Util/prependSLLNode.h"
#include "../Util/sllLength.h"
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
    return 0;
}