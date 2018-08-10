#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>

int getItemPosInRotatedSortedArr(int *arr, int len, int key) {
    int low = 0, high = len - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (key == arr[mid]) {
            return mid;
        } else if (key < arr[mid] && key >= arr[low]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;
}

int main () {
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key, res;    
    printIntArray(arr, len);

    key = 6;
    res = getItemPosInRotatedSortedArr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 9;
    res = getItemPosInRotatedSortedArr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 1;
    res = getItemPosInRotatedSortedArr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 2;
    res = getItemPosInRotatedSortedArr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 12;
    res = getItemPosInRotatedSortedArr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = -1;
    res = getItemPosInRotatedSortedArr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = -133;
    res = getItemPosInRotatedSortedArr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 3;
    res = getItemPosInRotatedSortedArr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 5;
    res = getItemPosInRotatedSortedArr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    return 0;
}