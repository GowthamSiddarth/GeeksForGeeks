#include <stdio.h>
#include "../../../Helper/Array/Util/arrayMin.h"
#include "../../../Helper/Array/Util/printArray.h"

int main () {
    int arr[] = {2, 43, 12, -12, 43, 6506, -123, 2323};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    int minIdx =  minIntArr(arr, len);

    if (-1 != minIdx) {
        printf("min val: %d, idx: %d\n", arr[minIdx], minIdx);
    } else {
        printf("min idx: %d\n", minIdx);
    }   
    
    return 0;
}