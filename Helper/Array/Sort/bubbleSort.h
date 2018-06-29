#include "../Util/swap.h"

void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swapInt(&arr[j], &arr[j + 1]);
            }
        }
    }
}