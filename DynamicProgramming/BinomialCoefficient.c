#include <stdio.h>

int binomialCoefficientRec(int n, int r) {
    if (n < r) {
        return -1;
    } else if (0 == r || n == r) {
        return 1;
    } else {
        return binomialCoefficientRec(n - 1, r - 1) + binomialCoefficientRec(n - 1, r);
    }
}

int main () {
    int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int r[] = {9, 1, 2, 0, 2, 4, 2, 3, 6};

    int numOfQueries = sizeof(n) / sizeof(n[0]);
    for (int i = 0; i < numOfQueries; i++) {
        int res = binomialCoefficientRec(n[i], r[i]);

        printf("n = %d, r = %d, res = %d\n", n[i], r[i], res);
    }

    return 0;
}