#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>
#include <malloc.h>
#include "../../../Helper/Array/Search/floorSearch.h"

void getKNearestItems(int *arr, int len, int *res, int k, int key) {
    int crossOverPoint = floorSearchItr(arr, len, key);
    int left = crossOverPoint, right = crossOverPoint + 1;

    if (crossOverPoint > 0 && arr[crossOverPoint] == key) {
        left--;
    }

    int count = 0;
    while (left >= 0 && right < len && count < k) {
        if (key - arr[left] < arr[right] - key) {
            res[count] = left;
            left--;
        } else {
            res[count] = right;
            right++;
        }

        count++;
    }

    while (left >= 0 && count < k) {
        res[count] = left;
        left--;
        count++;
    }

    while (right < len && count < k) {
        res[count] = right;
        right++;
        count++;
    }
}

int main () {
    int arr[] = { 12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int key, k;
    int *res = (int *)malloc(sizeof(int) * len);
    printIntArray(arr, len);

    key = 35;
    k = 4;
    getKNearestItems(arr, len, res, k, key);
    printIntArray(res, k);
    
    return 0;
}