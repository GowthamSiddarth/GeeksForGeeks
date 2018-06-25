#include <stdio.h>
#include "../../Helper/Array/printArray.h"

int indexOf(int *arr, int len, int key) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {
  int arr[] = { 10, 20, 80, 30, 60, 50, 110, 100, 130, 170 };
  int len = sizeof(arr) / sizeof(arr[0]);
  int res, key;
  
  key = 5;
  res = indexOf(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, res = %d\n", key, res);

  key = 20;
  res = indexOf(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, res = %d\n", key, res);

  key = 110;
  res = indexOf(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, res = %d\n", key, res);

  key = 170;
  res = indexOf(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, res = %d\n", key, res);

  key = 180;
  res = indexOf(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, res = %d\n", key, res);

  return 0;
}