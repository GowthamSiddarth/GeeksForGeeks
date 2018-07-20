#include <stdio.h>

char swapNibbles(char n) {
    return ((n & 0xF0) >> 4) | ((n & 0x0F) << 4);
}

int main () {
    char queries[] = {100, 34, 255, 67, 56, 121};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        char res = swapNibbles(queries[i]);
        printf("n = %u, res = %u\n", queries[i], res);
    }

    return 0;
}