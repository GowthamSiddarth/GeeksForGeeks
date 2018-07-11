#include <stdio.h>
#include <math.h>

int getNumOfSetBits(unsigned int x) {
    int count = 0;

    while (x > 0) {
        count += (x & 1);
        x >>= 1;
    }

    return count;
}

int getNumOfSetBitsByCountingInEachItr(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        count += getNumOfSetBits(i);
    }

    return count;
}

int getNumOfSetBitsByVerticalCounting(int n) {
    int count = 0, blockSize = 1;

    while ((n + 1) / blockSize > 0) {
        blockSize *= 2;
        int bitsSetPerBlock = blockSize / 2;

        int numOfBlocks = (n + 1) / blockSize;
        int numOfBitsSet = numOfBlocks * bitsSetPerBlock;

        if (((n + 1) % blockSize) > (blockSize / 2)) {
            numOfBitsSet += ((n + 1) % blockSize) - (blockSize / 2);
        }

        count += numOfBitsSet;        
    }

    return count;
}

int main () {
    int n = 8;
    int res1 = getNumOfSetBitsByCountingInEachItr(n);
    int res2 = getNumOfSetBitsByVerticalCounting(n);
    printf("n = %d, res1 = %d, res2 = %d\n", n, res1, res2);

    return 0;
}