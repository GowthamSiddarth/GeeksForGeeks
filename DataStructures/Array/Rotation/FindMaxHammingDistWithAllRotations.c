#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>
#include <malloc.h>
#include "../../../Helper/Array/Util/arrayCopy.h"
#include "../../../Helper/Array/Util/hammingDistance.h"

int getMaxHammingDistanceWithAllRotations(int *arr, int len) {
    int *copy = (int *)malloc(sizeof(int) * (2 * len));
    copyIntArr(arr, len, copy, 2 * len, len, 0, 0);    
    copyIntArr(arr, len, copy, 2 * len, len, 0, len);    

    int maxHammingDistance = 0;
    for (int i = 1; i < len; i++) {
        int currHammingDistance = hammingDistance(arr, len, copy + i, len);

        if (currHammingDistance > maxHammingDistance) {
            maxHammingDistance = currHammingDistance;
        }
    }

    return maxHammingDistance;
}

int main () {
    int arr[] = {1, 4, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    printIntArray(arr, len);
    int res = getMaxHammingDistanceWithAllRotations(arr, len);
    printf("res = %d", res);

    return 0;
}