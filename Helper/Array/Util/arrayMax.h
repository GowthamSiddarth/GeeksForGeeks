#include <limits.h>

int maxIntArr(int *arr, int len) {
    if (len > 0) {
        int maxVal = arr[0];
        int maxIdx = 0;

        for (int i = 1; i < len; i++) {
           if (arr[i] > maxVal) {
               maxIdx = i;
               maxVal = arr[i];
           }
        }

        return maxIdx;
    }

    return -1;
}

int maxIntRecHelper(int *arr, int len, int maxVal, int index, int maxIdx) {
    if (index == len) {
        return maxVal;
    } else {
        if (arr[index] < maxVal) {
            maxVal = arr[index];
            maxIdx = index;
        }

        return maxIntRecHelper(arr, len, maxVal, index + 1, maxIdx);
    }
}

int maxIntRec(int *arr, int len) {
    return maxIntRecHelper(arr, len, INT_MIN, 0, -1);
}