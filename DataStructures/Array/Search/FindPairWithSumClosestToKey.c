#include <stdio.h>
#include <limits.h>
#include "../../../Helper/Math/abs.h"
#include "../../../Helper/Array/Util/printArray.h"

void findPairWithSumClosestToKey(int *arr, int len, int key, int *res1, int *res2) {
    int left = 0, right = len - 1;
    int minDistance = INT_MAX;

    while (left < right) {
        int sum = arr[left] + arr[right];
        int distance = abs(sum - key);

        if (distance < minDistance) {
            *res1 = left;
            *res2 = right;
        }
        
        if (sum < key) {
            left++;
        } else if (sum > key) {
            right--;
        }
    }
}

int main () {
    int arr[] =  {10, 22, 28, 29, 30, 40};
    int len = sizeof(arr) / sizeof(arr[0]);
    printIntArray(arr, len);

    int queries[] = {54, 0, -12, 21, 45, 98, 78, 989, 56};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);
    for (int i = 0; i < numOfQueries; i++) {
        int res1, res2;
        int key = queries[i];

        findPairWithSumClosestToKey(arr, len, key, &res1, &res2);
        printf("key = %d, res1 = %d, res2 = %d\n", key, res1, res2);
    }

    return 0;
}