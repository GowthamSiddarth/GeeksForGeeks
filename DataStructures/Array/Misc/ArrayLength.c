#include "../../../Helper/Array/Util/arrayLen.h"
#include "../../../Helper/Array/Util/printArray.h"

int main () {
    int arr[] = {1, 2, 3};
    int len = arrayLength(arr);

    printIntArray(arr, len);
    printf("len = %d", len);

    return 0;
}