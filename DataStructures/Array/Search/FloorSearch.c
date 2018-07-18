#include <stdio.h>
#include "../../../Helper/Array/Search/floorSearch.h"
#include "../../../Helper/Array/Util/printArray.h"

int main () {
    int arr[] = {1, 2, 4, 4, 6, 10, 12, 14};
    int len = sizeof(arr) / sizeof(arr[0]);
    printIntArray(arr, len);

    int queries[] = {0, 2, -9, 5, 11, 10, 14, 19, 10101};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int key = queries[i];
        int res = floorSearchItr(arr, len, key);

        printf("key = %d, res = %d\n", key, res);        
    }

    return 0;
}