#include <stdio.h>
#include "../../../Helper/Array/Sort/bubbleSort.h"
#include "../../../Helper/Array/Util/printArray.h"

int main () {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    bubbleSort(arr, len);
    printIntArray(arr, len);

    return 0;
}