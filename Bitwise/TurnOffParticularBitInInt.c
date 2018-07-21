#include <stdio.h>
#include <limits.h>

int unsetBitAt(int n, int k) {
    return n & (INT_MAX ^ (1 << (k - 1)));
}

int main () {
    int n[] = {1, 2, 3, 5, 8, 19, 78};
    int k[] = {1, 2, 1, 2, 5, 3, 11};

    int numOfQueries = sizeof(n) / sizeof(n[0]);
    for (int i = 0; i < numOfQueries; i++) {
        int res = unsetBitAt(n[i], k[i]);
        printf("n = %d, k = %d, res = %d\n", n[i], k[i], res);
    }

    return 0;
}