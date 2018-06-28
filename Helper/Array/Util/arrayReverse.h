#include <stdio.h>
#include "swap.h"

void reverseIntArr(int *arr, int len, int start, int end) {
    if (start >= 0 && end < len) {
        for (int idx = start; idx < start + (end - start + 1) / 2; idx++) {            
            swapInt(&arr[idx], &arr[start + end - idx]);
        }
    }
}