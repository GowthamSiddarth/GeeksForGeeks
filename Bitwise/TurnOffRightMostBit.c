#include <stdio.h>
#include <limits.h>

int unsetRightMostSetBit(int n) {
    int pos = 0;

    while (n > 0 && 0 == (n & 1)) {
        n = n >> 1;
        pos++;
    }

    n = n & (INT_MAX - 1);
    return n << pos;
}

int main () {
    int queries[] = {2, 4, 5, 12, 57, 98};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int res = unsetRightMostSetBit(queries[i]);
        printf("num = %d, res = %d\n", queries[i], res);
    }

    return 0;
}