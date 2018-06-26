#include <math.h>
#include <stdio.h>
#include "../Math/min.h"
#include "linearSearch.h"

int jumpSearchItr(int *arr, int len, int key) {
  int blockSize = sqrt(len);
  int start = 0;

  while (start < len && key > arr[minInt(blockSize, len) - 1]) {
    start = blockSize;
    blockSize = blockSize * 2;
  }

  int linearSearchRes;
  return (start > len 
  || -1 == (linearSearchRes = linearSearchItr(arr + start, blockSize - start + 1, key)))
            ? -1 : start + linearSearchRes;
}

void jumpSearchRecHelper(int *arr, int len, int *start, int *blockSize, int key) {
  if (*start < len && key > arr[minInt(*blockSize, len) - 1]) {
    *start = *blockSize;
    *blockSize = *blockSize * 2;
    jumpSearchRecHelper(arr, len, start, blockSize, key);
  }
}

int jumpSearchRec(int *arr, int len, int key) {
  int start = 0, blockSize = sqrt(len);
  jumpSearchRecHelper(arr, len, &start, &blockSize, key);

  //printf("start = %d, blockSize = %d\n", start, blockSize);
  int linearSearchRes;
  return (start > len
    || -1 == (linearSearchRes = linearSearchRec(arr + start, blockSize - start + 1, key)))
      ? -1 : start + linearSearchRes;
}