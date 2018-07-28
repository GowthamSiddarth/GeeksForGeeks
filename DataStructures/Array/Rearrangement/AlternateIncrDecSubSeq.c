#include "../../../Helper/Array/Util/arrayCopy.h"
#include <malloc.h>
#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"
#include "../../../Helper/Array/Sort/quickSort.h"

void rearrangeAltIncrDecrSubSeq(int *arr, int len) {    
    quickSort(arr, len);

    int *temp = (int *)malloc(sizeof(int) * len);
    copyIntArr(arr, len, temp, len, len, 0, 0);
    
    int left = 0, right = len - 1, i = 0;
    while (i < len) {
        arr[i] = temp[left];
        left++;
        i++;

        arr[i] = temp[right];
        right--;
        i++;
    }

    free(temp); 
}

int main () {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    rearrangeAltIncrDecrSubSeq(arr, len);
    len = sizeof(arr) / sizeof(arr[0]);
    printIntArray(arr, len);

    return 0;
}