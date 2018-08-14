#include "../../../Helper/Util/swap.h"
#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"

void rearrangeNegToBegAndPosToEnd(int *arr, int len) {
    int left = 0, right = len - 1;

    while (left < right) {
        while (left < right && arr[left] > 0) {
            left++;
        }

        while (left < right && arr[right] < 0) {
            right--;
        }

        if (left < right) {
            swapInt(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

int main () {
    int arr[] = {9, 8, -34, 12, -12, 8341, 492, -435, 534, 8834, -421};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    rearrangeNegToBegAndPosToEnd(arr, len);
    printIntArray(arr, len);

    return 0;
}