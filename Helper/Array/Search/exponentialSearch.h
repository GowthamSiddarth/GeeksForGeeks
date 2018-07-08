#include "binarySearch.h"

int exponentialSearchItr(int *arr, int len, int key) {
    if (len > 0 && arr[0] == key) {
        return 0;
    }

    int idx = 1;
    while (idx < len && key >= arr[idx]) {
        idx += idx;
    }

    int binarySearchRes = binarySearchItr(arr + idx / 2, len - idx / 2, key);
    return -1 == binarySearchRes ? -1 : idx / 2 + binarySearchRes;
}