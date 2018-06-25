#include <stdio.h>
#include "../../Helper/Array/printArray.h"

int linearSearchItr(int *arr, int len, int key) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int linearSearchRec(int *arr, int len, int key) {
    if (0 == len) {
        return -1;
    } else if (key == arr[len - 1]) {
        return len - 1;
    } else {
        return linearSearchRec(arr, len - 1, key);
    }
}

int main() {
  int arr[] = { 10, 20, 80, 30, 60, 50, 110, 100, 130, 170 };
  int len = sizeof(arr) / sizeof(arr[0]);
  int resItr, resRec, key;
  
  key = 5;
  resItr = linearSearchItr(arr, len, key);
  resRec = linearSearchRec(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, resItr = %d, resRec = %d\n", key, resItr, resRec);

  key = 20;
  resItr = linearSearchItr(arr, len, key);
  resRec = linearSearchRec(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, resItr = %d, resRec = %d\n", key, resItr, resRec);

  key = 110;
  resItr = linearSearchItr(arr, len, key);
  resRec = linearSearchRec(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, resItr = %d, resRec = %d\n", key, resItr, resRec);

  key = 170;
  resItr = linearSearchItr(arr, len, key);
  resRec = linearSearchRec(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, resItr = %d, resRec = %d\n", key, resItr, resRec);

  key = 180;
  resItr = linearSearchItr(arr, len, key);
  resRec = linearSearchRec(arr, len, key);
  printIntArray(arr, len);
  printf("key = %d, resItr = %d, resRec = %d\n", key, resItr, resRec);

  return 0;
}