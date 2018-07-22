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
        struct SLLIntNode * res1 = linearSearchItr(list, queries[i]);
        struct SLLIntNode * res2 = linearSearchRec(list, queries[i]);

        printf("key = %d, ", queries[i]);
        if (NULL == res1) {
            printf("res1 = NULL, ", queries[i]);
        } else {
            printf("res1 = %d, ", queries[i], res1->value);
        }

        
        if (NULL == res2) {
            printf("res2 = NULL\n", queries[i]);
        } else {
            printf("res2 = %d\n", queries[i], res2->value);
        }
    }

    return 0;
}