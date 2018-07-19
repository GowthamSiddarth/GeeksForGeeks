#include <stdio.h>
#include "../Helper/Math/fibonacci.h"

int getNumOfWaysToReachNthStairWithRec(int n) {
    return fibonacci(n + 1);
}

int main () {
    int queries[] = {1, 2, 4};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int n = queries[i];
        int res = getNumOfWaysToReachNthStairWithRec(n);

        printf("n = %d, res = %d\n", n, res);
    }

    return 0;
}