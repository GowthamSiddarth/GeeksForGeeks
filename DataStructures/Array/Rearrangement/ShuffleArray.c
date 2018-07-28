#include "../../../Helper/Array/Sort/randomSort.h"
#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    randomSort(arr, len);
    printIntArray(arr, len);

    return 0;
}
