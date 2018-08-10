#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>
#include "../../../Helper/Array/Search/pivotSearch.h"

int getMinInRotatedSortedArr(int *arr, int len) {
    int pivotIdx = getPivotInRotatedSortedIntArr(arr, len);

    return arr[pivotIdx];
}

int main () {
    int arr[] = {8, 9, 10, 2, 3, 5, 6, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    int res = getMinInRotatedSortedArr(arr, len);
    printIntArray(arr, len);
    printf("res = %d", res);

    return 0;
}