#include <stdio.h>
#include <limits.h>

int unsetRightMostSetBitWithBitsShift(int n) {
    int pos = 0;

    while (n > 0 && 0 == (n & 1)) {
        n = n >> 1;
        pos++;
    }

    n = n & (INT_MAX - 1);
    return n << pos;
}

int unsetRightMostSetBitWithPrevNum(int n) {
    return n & (n - 1);
}

int main () {
    int queries[] = {2, 4, 5, 12, 57, 98};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int res1 = unsetRightMostSetBitWithBitsShift(queries[i]);
        int res2 = unsetRightMostSetBitWithPrevNum(queries[i]);
        printf("num = %d, res1 = %d, res2 = %d\n", queries[i], res1, res2);
    }

    return 0;
}