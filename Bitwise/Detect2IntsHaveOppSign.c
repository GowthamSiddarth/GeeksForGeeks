#include <stdio.h>

int haveOppositeSigns(int x, int y) {
    return (x ^ y) >> (sizeof(int) * 8 - 1);
}

int main () {
    int x[] = {9, -5, 8, 0, 91, -31, -23, 1};
    int y[] = {8, -92, -23, 123, -132, 9, 8, -1};

    int numOfQueries = sizeof(x) / sizeof(x[0]);
    for (int i = 0; i < numOfQueries; i++) {
        int res = haveOppositeSigns(x[i], y[i]);
        printf("x = %d, y = %d, res = %d\n", x[i], y[i], res);
    }

    return 0;
}