#include "../../../Helper/Array/Search/interpolationSearch.h"
#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>

int main () {
    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key, res;
    printIntArray(arr, len);

    key = 18;
    res = interpolationSearchItr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 5;
    res = interpolationSearchItr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 46;
    res = interpolationSearchItr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 47;
    res = interpolationSearchItr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 10;
    res = interpolationSearchItr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 20;
    res = interpolationSearchItr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 24;
    res = interpolationSearchItr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);

    key = 13;
    res = interpolationSearchItr(arr, len, key);
    printf("key = %d, res = %d\n", key, res);
    return 0;
}