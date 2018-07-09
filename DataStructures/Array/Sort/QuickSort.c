#include "../../../Helper/Array/Sort/quickSort.h"
#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int len = sizeof(arr) / sizeof(arr[0]);

  printIntArray(arr, len);
  quickSort(arr, len);
  printIntArray(arr, len);

  return 0;
}