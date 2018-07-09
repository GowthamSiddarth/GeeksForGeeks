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

int main () {
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    waveSortWithSorting(arr, len);
    printIntArray(arr, len);

    return 0;
}