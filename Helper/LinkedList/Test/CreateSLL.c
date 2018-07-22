#include "../Util/createSLL.h"
#include "../Util/appendSLLNode.h"
#include <stdio.h>
#include "../Util/printList.h"

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);

    struct SLLIntNode* list = createIntSLL(arr, len);
    printIntList(list);

    appendIntNode(&list, 10);
    printIntList(list);

    return 0;
}