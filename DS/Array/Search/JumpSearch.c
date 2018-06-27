#include "../../../Helper/Array/Search/jumpSearch.h"
#include <stdio.h>
#include "../../../Helper/Array/Util/printArray.h"

int main() {
  int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
  int len = sizeof(arr) / sizeof(arr[0]);
  printIntArray(arr, len);

  int queries[] = {1, 2, 4, 5, 11, 13, 10, 40, 45, 50, 89, 144, 610, 377, 477, 1001};
  int numOfQueries = sizeof(queries) / sizeof(queries[0]);
  for (int i = 0; i < numOfQueries; i++) {
    int key = queries[i];
    int resItr = jumpSearchItr(arr, len, key);
    int resRec = jumpSearchRec(arr, len, key);

    printf("key = %d, resItr = %d, resRec = %d\n", key, resItr, resRec);
  }

  return 0;
}