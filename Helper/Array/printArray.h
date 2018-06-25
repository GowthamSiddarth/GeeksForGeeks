#include <stdio.h>

void printIntArray(int *arr, int len) {
  if (len > 0) {
    for (int i = 0; i < len; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  }
}