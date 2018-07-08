#include "binarySearch.h"

int exponentialSearch(int *arr, int len, int key) {
    if (len > 0 && arr[0] == key) {
        return 0;
    }

    int idx = 1;
    while (idx < len && key >= arr[idx]) {
        idx += idx;
    }

    return binarySearchItr(arr + idx / 2, len - idx / 2, key);
}