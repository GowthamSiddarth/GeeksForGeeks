#include <stdio.h>
#include <malloc.h>

int getNthFibonacci(int n) {
    int *memo = (int *)malloc(sizeof(int) * (n + 1));
    memo[0] = 0;
    memo[1] = 1;

    for (int i = 2; i <= n; i++) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }

    return memo[n];
}

int main () {
    int queries[] = {0, 3, 5, 7, 11, 1};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int nthFibonacci = getNthFibonacci(queries[i]);

        printf("n = %d, nthFibonacci = %d\n", queries[i], nthFibonacci);        
    }

    return 0;
}