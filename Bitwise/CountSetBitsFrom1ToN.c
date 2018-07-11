#include <stdio.h>

unsigned int getNumOfSetBits(unsigned int x) {
    unsigned int count = 0;

    while (x > 0) {
        count += (x & 1);
        x >>= 1;
    }

    return count;
}

unsigned int getNumOfSetBitsByCountingInEachInt(unsigned int n) {
    unsigned int count = 0;
    for (unsigned int i = 1; i <= n; i++) {
        count += getNumOfSetBits(i);
    }

    return count;
}

int main () {
    unsigned int n = 5;
    unsigned int res = getNumOfSetBitsByCountingInEachInt(n);
    printf("n = %u, res = %u\n", n, res);

    return 0;
}