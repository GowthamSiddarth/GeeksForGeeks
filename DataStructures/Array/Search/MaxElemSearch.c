#include <stdio.h>
#include "../../../Helper/Array/Util/arrayMax.h"
#include "../../../Helper/Array/Util/printArray.h"

int main () {
    int arr[] = {2, 43, 12, -12, 43, 6506, -123, 2323};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    int maxIdx = maxIntArr(arr, len);

    if (-1 != maxIdx) {
        printf("max val: %d, idx: %d\n", arr[maxIdx], maxIdx);
    } else {
        printf("max idx: %d\n", maxIdx);
    }   
    
    return 0;
}