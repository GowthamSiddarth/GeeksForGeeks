#include <stdio.h>
#include "../../../Helper/Array/Search/ceilSearch.h"
#include "../../../Helper/Array/Util/printArray.h"

int main () {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int len = sizeof(arr) / sizeof(arr[0]);
    printIntArray(arr, len);

    int queries[] = {-9, 0, 1, 2, 3, -4, 10, 19, 20, 5345};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int key = queries[i];
        int res = ceilSearchItr(arr, len, key);

        printf("key = %d, res = %d\n", key, res);
    }
    
    return 0;
}