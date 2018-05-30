#include <stdio.h>

void printArray(int * arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

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

    printArray(arr, len);
    reverse(arr, len);
    printArray(arr, len);

    return 0;
}