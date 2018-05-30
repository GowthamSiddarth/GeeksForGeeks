#include <stdio.h>
#include "../Helper/printArray.h"

void swap(int *x, int *y) {
    *x = *x + *y - (*y = *x);
}

void reverse(int *arr, int len) {
    for (int i = 0; i < len / 2; i++) {
        swap(&arr[i], &arr[len - 1 - i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    reverse(arr, len);
    printIntArray(arr, len);

    return 0;
}