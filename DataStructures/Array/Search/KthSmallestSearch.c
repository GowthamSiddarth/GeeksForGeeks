#include "../../../Helper/Array/Sort/quickSort.h"
#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>

int getKthSmallestBySort(int *arr, int len, int k) {
    quickSort(arr, len);

    return arr[k - 1];
}

int main () {
    int arr[] = {12, 3, 5, 7, 19};
    int len = sizeof(arr) / sizeof(arr[0]);
    printIntArray(arr, len);

    int queries[] = {1, 2, 3, 5, 4};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);
    for (int i = 0; i < numOfQueries; i++) {
        int k = queries[i];
        int res = getKthSmallestBySort(arr, len, k);

        printf("k = %d, res = %d\n", k, res);
    }

    return 0;
}