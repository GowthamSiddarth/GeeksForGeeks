#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"

int searchInAlmostSortedArr(int *arr, int len, int key) {
    int low = 0, high = len - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (key == arr[mid]) {
            return mid;
        } else if (key == arr[mid + 1]) {
            return mid + 1;
        } else if (key == arr[mid - 1]) {
            return mid - 1;
        } else if (key > arr[mid + 1]) {
            low = mid + 2;
        } else if (key < arr[mid - 1]) {
            high = mid - 2;
        } else {
            return -1;
        }
    }

    return -1;
}

int main () {
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int len = sizeof(arr) / sizeof(arr[0]);
    printIntArray(arr, len);

    int queries[] = {4, 40, 30, 51, 90, 10, 70, 20, 79};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);
    for (int i = 0; i < numOfQueries; i++) {
        int query = queries[i];
        int res = searchInAlmostSortedArr(arr, len, query);
        printf("key = %d, res = %d\n", query, res);
    }

    return 0;
}