#include <stdio.h>
#include "../../../Helper/Array/Util/arrayMax.h"
#include "../../../Helper/Array/Util/printArray.h"

int main () {
    int arr[] = {2, 43, 12, -12, 43, 6506, -123, 2323};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    int maxIdxItr = maxIntArr(arr, len);
    int maxIdxRec = maxIntRec(arr, len);

    if (-1 != maxIdxItr) {
        printf("max val: %d, idx: %d\n", arr[maxIdxItr], maxIdxItr);
        printf("max val: %d, idx: %d\n", arr[maxIdxRec], maxIdxRec);
    } else {
        printf("max idx: %d\n", maxIdxItr);
        printf("max idx: %d\n", maxIdxRec);
    }   
    
    return 0;
}