#include <stdio.h>
#include "../../Helper/Array/printArray.h"
#include "../../Helper/Array/linearSearch.h"

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