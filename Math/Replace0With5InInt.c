#include <stdio.h>

int replaceZeroWithFive(int num) {
    if (0 == num) {
        return 0;
    }

    int lastDigit = num % 10;
    if (0 == lastDigit) {
        lastDigit = 5;
    }

    return replaceZeroWithFive(num / 10) * 10 + lastDigit;
}

int main () {
    int queries[] = {13, 109, 1023, 89, 780, 90800, 2002};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int res = replaceZeroWithFive(queries[i]);

        printf("num = %d, res = %d\n", queries[i], res);
    }

    return 0;
}