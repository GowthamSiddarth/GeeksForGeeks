#include <stdio.h>

int countSetBits(int n) {
    int count = 0;

    while (n > 0) {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int isPowerOf2(int n) {
    return 1 == countSetBits(n);
}

int main () {
    int queries[] = {2, 3, 4, 32, 31, 45, 65, 128};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int res = isPowerOf2(queries[i]);
        printf("n = %d, res = %d\n", queries[i], res);
    }

    return 0;
}