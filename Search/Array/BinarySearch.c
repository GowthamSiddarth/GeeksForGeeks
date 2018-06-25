#include <stdio.h>
#include "../../Helper/Array/printArray.h"

int binarySearchItr(int *arr, int len, int key) {
    int low = 0, high = len - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (key > arr[mid]) {
            low = mid + 1;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int binarySearchRecHelper(int *arr, int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (key < arr[mid]) {
            return binarySearchRecHelper(arr, low, mid - 1, key);
        } else if (key > arr[mid]) {
            return binarySearchRecHelper(arr, mid + 1, high, key);
        } else {
            return mid;
        }
    }

    return -1;
}

int binarySearchRec(int *arr, int len, int key) {
    return binarySearchRecHelper(arr, 0, len - 1, key);
}

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