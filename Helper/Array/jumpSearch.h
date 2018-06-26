#include <math.h>
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
  return (blockSize > len 
  || -1 == (linearSearchRes = linearSearchItr(arr + start, blockSize - start + 1, key)))
            ? -1 : start + linearSearchRes;
}