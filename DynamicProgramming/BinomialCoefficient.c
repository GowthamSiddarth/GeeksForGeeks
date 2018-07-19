#include <stdio.h>
#include <malloc.h>
#include "../Helper/Math/min.h"

int binomialCoefficientRec(int n, int r) {
    if (n < r) {
        return 0;
    } else if (0 == r || n == r) {
        return 1;
    } else {
        return binomialCoefficientRec(n - 1, r - 1) + binomialCoefficientRec(n - 1, r);
    }
}

int binomialCoefficientWithDP(int n, int r) {
    int **coefficients = (int **)calloc(n + 1, sizeof(int *));
    for (int i = 0; i < (n + 1); i++) {
        coefficients[i] = (int *)calloc(r + 1, sizeof(int));
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= minInt(i, r); j++) {
            if (0 == j || i == j) {
                coefficients[i][j] = 1;
            } else {
                coefficients[i][j] = coefficients[i - 1][j - 1] + coefficients[i - 1][j];
            }
        }
    }

    return coefficients[n][r];
}

int main () {
    int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int r[] = {9, 1, 2, 0, 2, 4, 2, 3, 6};

    int numOfQueries = sizeof(n) / sizeof(n[0]);
    for (int i = 0; i < numOfQueries; i++) {
        int res1 = binomialCoefficientRec(n[i], r[i]);
        int res2 = binomialCoefficientWithDP(n[i], r[i]);

        printf("n = %d, r = %d, res1 = %d, res2 = %d\n", n[i], r[i], res1, res2);
    }

    return 0;
}