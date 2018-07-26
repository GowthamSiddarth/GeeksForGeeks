#include "../../../Helper/LinkedList/Search/linearSearch.h"
#include <stdio.h>
#include "../../../Helper/LinkedList/Util/printList.h"
#include "../../../Helper/LinkedList/Util/createSLL.h"
#include "../../../Helper/LinkedList/Util/sllNode.h"
#include "../../../Helper/LinkedList/Util/reverseSLL.h"

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);

    struct SLLIntNode* list = createIntSLL(arr, len);
    printIntList(list);

    reverseIntSLLItr(&list);
    printIntList(list);
    
    return 0;
}