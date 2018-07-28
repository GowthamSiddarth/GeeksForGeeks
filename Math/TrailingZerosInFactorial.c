#include <stdio.h>

int getNumOfTrailingZeros(int n) {
    int i = 5, count = 0, temp;
    while ((temp = (n / i)) > 0) {
        count = count + temp;
        i = i * 5;
    }

    return count;
}

int main () {
    int queries[] = {1, 4, 5, 7, 23, 101, 1000, 4617};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int res = getNumOfTrailingZeros(queries[i]);
        printf("n = %d, res = %d\n", queries[i], res);
    }

    return 0;
}