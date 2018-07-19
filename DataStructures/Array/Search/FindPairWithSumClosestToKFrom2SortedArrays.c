#include <stdio.h>
#include <limits.h>
#include "../../../Helper/Math/abs.h"
#include "../../../Helper/Array/Util/printArray.h"

void findPairWithSumClosestToK(int *arr1, int len1, int *arr2, int len2, int key, int *res1, int *res2) {
    int idx1 = 0, idx2 = len2 - 1;
    int minDistance = INT_MAX;
    
    while (idx1 != len1 && 0 != idx2) {
        int sum = arr1[idx1] + arr2[idx2];
        int distance = abs(sum - key);

        if (distance < minDistance) {
            minDistance = distance;
            *res1 = idx1;
            *res2 = idx2;
        }

        if (sum < key) {
            idx1++;
        } else if (sum > key) {
            idx2--;
        }
    }
}

int main () {
    int arr1[] = {1, 4, 5, 7};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    printIntArray(arr1, len1);

    int arr2[] = {10, 20, 30, 40};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    printIntArray(arr2, len2);

    int queries[] = {32, 50, 38};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);
    
    for (int i = 0; i < numOfQueries; i++) {
        int res1, res2;
        int key = queries[i];

        findPairWithSumClosestToK(arr1, len1, arr2, len2, key, &res1, &res2);
        printf("key = %d, res1 = %d, res2 = %d\n", key, res1, res2);
    }

    return 0;
}