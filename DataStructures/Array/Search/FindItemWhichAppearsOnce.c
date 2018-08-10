#include "../../../Helper/Array/Util/printArray.h"
#include <stdio.h>

int getItemWhichAppearsOnce(int *arr, int len) {
    int item = 0;
    for (int i = 0; i < len; i++) {
        item ^= arr[i];
    }

    return item;
}

int main () {
    int arr[] = {2, 3, 2, 4, 5, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    int res = getItemWhichAppearsOnce(arr, len);
    printf("res = %d", res);

    return 0;
}