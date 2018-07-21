#include <stdio.h>

int isKthBitSet(int n, int k) {
    return (n & (1 << (k - 1))) > 0;
}

int main () {
    int n[] = {1, 2, 3, 5, 8, 19, 78};
    int k[] = {1, 2, 1, 2, 5, 3, 11};

    int numOfQueries = sizeof(n) / sizeof(n[0]);
    for (int i = 0; i < numOfQueries; i++) {
        int res = isKthBitSet(n[i], k[i]);
        printf("n = %d, k = %d, res = %d\n", n[i], k[i], res);
    }

    return 0;
}