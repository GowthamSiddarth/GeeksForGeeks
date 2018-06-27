#include <stdio.h>
#include <malloc.h>
#include "../../../Helper/Array/Util/printArray.h"
#include "../../../Helper/Array/Util/arrayCopy.h"

void resetArray(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        arr[i] = i + 1;
    }
}

void leftRotateWithTempArr(int *arr, int len, int numOfRotations) {
    if (numOfRotations > 0) {
        numOfRotations = numOfRotations % len;

        int *temp = (int *)malloc(sizeof(int) * numOfRotations);
        copyIntArr(arr, len, temp, numOfRotations, numOfRotations, 0, 0);
        copyIntArr(arr + numOfRotations, len - numOfRotations, arr, len - numOfRotations, len - numOfRotations, 0, 0);
        copyIntArr(temp, numOfRotations, arr + len - numOfRotations,  numOfRotations, numOfRotations, 0, 0);

        free(temp);
    }
}

void leftRotateOneByOne(int *arr, int len, int numOfRotations) {
    if (numOfRotations > 0) {
        numOfRotations = numOfRotations % len;

        for (int i = 0; i < numOfRotations; i++) {
            int temp = arr[0];
            copyIntArr(arr + 1, len - 1, arr, len - 1, len - 1, 0, 0);
            arr[len - 1] = temp;
        }
    }
}

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(arr) / sizeof(arr[0]);

    int queries[] = {-1, 0, -91, 2, 4, 7, 9, 13};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);
    for (int i = 0; i < numOfQueries; i++) {
        printIntArray(arr, len);
        printf("num of rotations: %d\n", queries[i]);
        leftRotateOneByOne(arr, len, queries[i]);
        printIntArray(arr, len);

        // reset array state to test array rotations for next query.
        resetArray(arr, len);
        printf("\n");
    }
    
    return 0;
}