#include "../../../Helper/Array/Search/pivotSearch.h"
#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"

int main () {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    int pivot = getPivotInRotatedSortedIntArr(arr, len);
    printf("pivot = %d\n", pivot);
    
    return 0;
}