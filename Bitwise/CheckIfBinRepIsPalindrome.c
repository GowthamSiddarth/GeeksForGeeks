#include <stdio.h>

int isKthBitSet(int n, int k) {
    return (n & (1 << (k - 1))) > 0;
}

int isBinaryRepresentationPalindrom(int n) {
    int left = 1, right = sizeof(n) * 8;

    while (left < right) {
        if (isKthBitSet(n, left) != isKthBitSet(n, right)) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main () {
    int queries[] = {213, 2143, 421, 12, 32, 4123, 5245, (1 << 15) + (1 << 16)};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int res = isBinaryRepresentationPalindrom(queries[i]);
        printf("n = %d, res = %d\n", queries[i], res);        
    }

    return 0;
}