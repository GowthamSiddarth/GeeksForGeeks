#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"
#include <malloc.h>

void get2RepeatingItems(int *arr, int len, int *res1, int *res2) {
    int *count = (int *)calloc(len - 2, sizeof(int));
    int i = 0, flag = 0;

    while (i < len) {
        count[arr[i] - 1]++;

        if (2 == count[arr[i] - 1]) {
            if (0 == flag) {
                *res1 = arr[i];
                flag++;
            } else {
                *res2 = arr[i];
                return;
            }
        }

        i++;
    }
}

int main () {
    int arr[] = {4, 2, 4, 5, 1, 3, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    printIntArray(arr, len);

    int res1 = 0, res2 = 0;
    get2RepeatingItems(arr, len, &res1, &res2);
    printf("res1 = %d, res2 = %d\n", res1, res2);
    
    return 0;
}