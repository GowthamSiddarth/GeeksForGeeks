#include "../../../Helper/Util/swap.h"
#include <stdio.h>
#include "../../../Helper/Array/Sort/randomSort.h"
#include "../../../Helper/Array/Util/printArray.h"

void moveZerosToEnd(int *arr, int len) {
    int left = 0, right = len - 1;

    while (left < right) {
        while (left < right && 0 != arr[left]) {
            left++;
        }

        while (left < right && 0 == arr[right]) {
            right--;
        }

        if (left < right) {
            swapInt(&arr[left], &arr[right]);
        }
    }
}

int main () {
    int arr[] = {0 , 12, 0, 2313, -112, -232, 9, 0, 100, 32, 3, 0};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    moveZerosToEnd(arr, len);
    printIntArray(arr, len);

    randomSort(arr, len);
    printIntArray(arr, len);
    moveZerosToEnd(arr, len);
    printIntArray(arr, len);

    randomSort(arr, len);
    printIntArray(arr, len);
    moveZerosToEnd(arr, len);
    printIntArray(arr, len);

    return 0;
}