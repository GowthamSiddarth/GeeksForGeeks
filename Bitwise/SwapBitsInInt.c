#include <stdio.h>

int swapBits(int x, int p1, int p2, int n) {
    int set1 = (x >> p1) & ((1 << n) - 1);
    int set2 = (x >> p2) & ((1 << n) - 1);

    int xor = set1 ^ set2;
    xor = (xor << p1) | (xor << p2);

    return x ^ xor;    
}

int main () {
    int numbers[] = {47, 28};
    int pos1[] = {1, 0};
    int pos2[] = {5, 3};
    int numOfBits[] = {3, 2};
    int numOfNums = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < numOfNums; i++) {
        int afterBitsSwap = swapBits(numbers[i], pos1[i], pos2[i], numOfBits[i]);
        printf("num = %d, afterSwap = %d\n", numbers[i], afterBitsSwap);
    } 

    return 0;
}