#include "../../../Helper/Array/Search/exponentialSearch.h"
#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"

int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int len = sizeof(arr) / sizeof(arr[0]);
  int key, res;
  printIntArray(arr, len);

  key = 2;
  res = exponentialSearchItr(arr, len, key);
  printf("key = %d, res = %d\n", key, res);

  key = -1213;
  res = exponentialSearchItr(arr, len, key);
  printf("key = %d, res = %d\n", key, res);

  key = 3;
  res = exponentialSearchItr(arr, len, key);
  printf("key = %d, res = %d\n", key, res);

  key = 45324;
  res = exponentialSearchItr(arr, len, key);
  printf("key = %d, res = %d\n", key, res);

  key = 40;
  res = exponentialSearchItr(arr, len, key);
  printf("key = %d, res = %d\n", key, res);

  return 0;
}