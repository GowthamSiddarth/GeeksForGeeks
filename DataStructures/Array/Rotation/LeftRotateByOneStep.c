#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>

void leftRotateByOne(int *arr, int len) {
    int temp = arr[0];
    for (int i = 1; i < len; i++) {
        arr[i - 1] = arr[i];
    }

    arr[len - 1] = temp;
}

int main () {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);

    leftRotateByOne(arr, len);
    printIntArray(arr, len);

    leftRotateByOne(arr, len);
    printIntArray(arr, len);
    
    return 0;
}