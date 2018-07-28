#include <stdlib.h>
#include <time.h>
#include "../../Util/swap.h"
#ifndef RANDOM_SORT
#define RANDOM_SORT

void randomSort(int *arr, int len) {
    srand(time(NULL));
    for (int i = len - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        swapInt(&arr[i], &arr[j]);
    }
}

#endif