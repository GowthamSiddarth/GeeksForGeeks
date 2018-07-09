#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"
#include "../../../Helper/Array/Search/binarySearch.h"

int main() { 
    int arr[] = {2, 3, 4, 10, 40};
    int len = sizeof(arr) / sizeof(arr[0]);
    printIntArray(arr, len);

    int queries[] = {1, 2, 4, 5, 11, 10, 40, 45, 50};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);
    for (int i = 0; i < numOfQueries; i++) {
        int key = queries[i];
        int resItr = binarySearchItr(arr, len, key);
        int resRec = binarySearchRec(arr, len, key);

        printf("key = %d, resItr = %d, resRec = %d\n", key, resItr, resRec);
    }

    return 0;
}