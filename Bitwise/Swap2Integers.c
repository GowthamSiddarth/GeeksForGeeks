#include <stdio.h>

void swap(int *x, int *y) {
    if (*x == *y) {
        return;
    }

    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main () {
    int x[] = {2, 4, 5, 12, 57, 98};
    int y[] = {5, 34, 634, 234,57, 98};
    int numOfQueries = sizeof(x) / sizeof(x[0]);

    for (int i = 0; i < numOfQueries; i++) {
        printf("x = %d, y = %d\n", x[i], y[i]);
        swap(&x[i], &y[i]);
        printf("x = %d, y = %d\n\n", x[i], y[i]);        
    }

    return 0;
}