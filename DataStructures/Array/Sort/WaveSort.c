#include "../../../Helper/Array/Sort/quickSort.h"
#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>
//#include "../../../Helper/Util/swap.h"

void waveSortWithSorting(int *arr, int len) {
    quickSort(arr, len);

    for (int i = 0; i < len; i += 2) {
        swapInt(&arr[i], &arr[i + 1]);
    }
}

void waveSortByTraversal(int *arr, int len) {
    for (int i = 0; i < len; i += 2) {
        if (i > 0 && arr[i] < arr[i - 1]) {
            swapInt(&arr[i], &arr[i - 1]);
        }

        if (i < len - 1 && arr[i] < arr[i + 1]) {
            swapInt(&arr[i], &arr[i + 1]);
        }
    }
}

int main () {
    int arr[] = {2, 3, 5, 6, 10, 20, 80, 100};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    //waveSortWithSorting(arr, len);
    waveSortByTraversal(arr, len);
    printIntArray(arr, len);

    return 0;
}