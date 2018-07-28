#ifndef SWAP
#define SWAP

void swapInt(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}

#endif