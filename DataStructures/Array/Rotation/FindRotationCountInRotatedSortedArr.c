#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>
#include "../../../Helper/Array/Search/pivotSearch.h"

int getRotationCountInRotatedSortedArr(int *arr, int len) {
    int pivot = getPivotInRotatedSortedIntArr(arr, len);

    return len - pivot;
}

int main () {
    int arr[] = {8, 9, 10, 1, 2, 3, 5, 6, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    int res = getRotationCountInRotatedSortedArr(arr, len);
    printIntArray(arr, len);
    printf("res = %d", res);

    return 0;
}