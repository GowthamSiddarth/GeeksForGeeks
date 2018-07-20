#include <stdio.h>

int countSetBitsWithItr(int n) {
    int count = 0;

    while (n > 0) {
        count = count + (n & 1);
        n = n >> 1;
    }

    return count;
}

int main () {
    int queries[] = {2, 4, 5, 12, 57, 98};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        int res1 = countSetBitsWithItr(queries[i]);
        printf("num = %d, res1 = %d\n", queries[i], res1);
    }

    return 0;
}