#include <stdio.h>
#include "../../../Helper/LinkedList/Util/sllNode.h"
#include "../../../Helper/LinkedList/Util/printList.h"
#include "../../../Helper/LinkedList/Util/createSLL.h"
#include "../../../Helper/LinkedList/Search/linearSearch.h"

int main () {
    int queries[] = {-9, -1, 0, 92, -882, 93, 9123, 8873, -912, 73, 1, 9};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    int arr[] = {-912, 1, 2, 393, 123, 73, 9, 12, 3213, 939};
    int len = sizeof(arr) / sizeof(arr[0]);

    struct SLLIntNode * list = createIntSLL(arr, len);
    printIntList(list);

    for (int i = 0; i < numOfQueries; i++) {
        struct SLLIntNode * res = linearSearchItr(list, queries[i]);
        if (NULL == res) {
            printf("key = %d, res = NULL\n", queries[i]);
        } else {
            printf("key = %d, res = %d\n", queries[i], res->value);
        }
    }

    return 0;
}