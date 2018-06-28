#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"
#include "../../../Helper/Array/Util/arrayReverse.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    reverseIntArr(arr, len, 0, len - 1);
    printIntArray(arr, len);
    
    return 0;
}