#include <stdio.h>
#include "../Helper/Math/fibonacci.h"

int getNthFibonacci(int n) {
    return fibonacci(n);
}

int main () {
    int queries[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int n = queries[i];
        int res = getNthFibonacci(n);

        printf("n = %d, res = %d\n", n, res);
    }

    return 0;
}