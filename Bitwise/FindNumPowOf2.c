#include <stdio.h>
#include <math.h>

int countSetBits(int n) {
    int count = 0;

    while (n > 0) {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int isPowerOf2WithSetBitsCount(int n) {
    return 1 == countSetBits(n);
}

int isPowerOf2WithLog2(int n) {
    return ceil(log2(n)) == floor(log2(n));
}

int isPowerOf2WithRightShift(int n) {
    while (1 != n) {
        if (1 == (n % 2)) {
            return 0;
        }
        n = n >> 1;
    }

    return 1;
}

int isPowerOf2WithANDPrevNum(int n) {
    return n && !(n & (n - 1));
}

int main () {
    int queries[] = {2, 3, 4, 32, 31, 45, 65, 128};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int res1 = isPowerOf2WithSetBitsCount(queries[i]);
        int res2 = isPowerOf2WithLog2(queries[i]);
        int res3 = isPowerOf2WithRightShift(queries[i]);
        int res4 = isPowerOf2WithANDPrevNum(queries[i]);

        printf("n = %d, res1 = %d, res2 = %d, res3 = %d, res4 = %d\n", queries[i], res1, res2, res3, res4);
    }

    return 0;
}