#include <stdio.h>
#include "../Helper/Array/Util/printArray.h"

int getMaxNumOfActivities(int *start, int *finish, int numOfActivities) {
    int count = 1;
    int prev_finish = finish[0];
    for (int i = 1; i < numOfActivities; i++) {
        if (start[i] >= prev_finish) {
            count++;
            prev_finish = finish[i];
        }
    }

    return count;
}

int main() {
  int start[] = {1, 3, 0, 5, 8, 5};
  int finish[] = {2, 4, 6, 7, 9, 9};
  int numOfActivities = sizeof(start) / sizeof(start[0]);

  printIntArray(start, numOfActivities);
  printIntArray(finish, numOfActivities);

  int maxNumOfActivities = getMaxNumOfActivities(start, finish, numOfActivities);
  printf("maxNumOfActivities = %d\n", maxNumOfActivities);

  return 0;
}