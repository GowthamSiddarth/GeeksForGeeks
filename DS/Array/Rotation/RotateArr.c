#include <stdio.h>
#include <malloc.h>
#include "../../../Helper/Array/Util/printArray.h"
#include "../../../Helper/Array/Util/arrayCopy.h"
#include "../../../Helper/Math/gcd.h"
#include "../../../Helper/Array/Util/arrayReverse.h"

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

void leftRotateWithJugglingAlgo(int *arr, int len, int numOfRotations) {
    int g = gcdInt(len, numOfRotations);
    for (int i = 0; i < g; i++) {
        int temp = arr[i];
        int j = i;

        while (1) {
            int k = (j + numOfRotations) % len;
            if (k == i) {
                break;
            }
            arr[j] = arr[k];
            j = k;
        }

        arr[j] = temp;
    }
}

void leftRotateWithArrRev(int *arr, int len, int numOfRotations) {
    if (numOfRotations > 0) {
        numOfRotations = numOfRotations % len;

        reverseIntArr(arr, len, 0, len - 1);
        reverseIntArr(arr, len, 0, len - numOfRotations - 1);
        reverseIntArr(arr, len, len - numOfRotations, len - 1);
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
        leftRotateWithArrRev(arr, len, queries[i]);
        printIntArray(arr, len);

        // reset array state to test array rotations for next query.
        resetArray(arr, len);
        printf("\n");
    }
    
    return 0;
}