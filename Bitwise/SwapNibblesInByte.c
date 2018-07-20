#include <stdio.h>

unsigned char swapNibbles(unsigned char n) {
    return ((n & 0xF0) >> 4) | ((n & 0x0F) << 4);
}

int main () {
    unsigned char queries[] = {100, 34, 255, 67, 56, 121};
    int numOfQueries = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < numOfQueries; i++) {
        unsigned char res = swapNibbles(queries[i]);
        printf("n = %x, res = %x\n", queries[i], res);
    }

    return 0;
}