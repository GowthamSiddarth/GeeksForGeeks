#include "../../Util/swap.h"
#ifndef QUICK_SORT
#define QUICK_SORT

int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swapInt(&arr[i], &arr[j]);
        }
    }

    swapInt(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSortHelper(int *arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        quickSortHelper(arr, low, p - 1);
        quickSortHelper(arr, p + 1, high);
    }
}

void quickSort(int *arr, int len) {
    quickSortHelper(arr, 0, len - 1);
}

#endif