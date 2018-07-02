#include "../../Util/swap.h"

void selectionSort(int *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        int currMin = arr[i], currMinIdx = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < currMin) {
                currMin = arr[j];
                currMinIdx = j;
            }
        }
        if (currMinIdx != i) {
            swapInt(&arr[currMinIdx], &arr[i]);
        }        
    }
}