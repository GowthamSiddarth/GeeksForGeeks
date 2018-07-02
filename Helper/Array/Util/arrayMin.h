int minItArr(int *arr, int len) {
    if (len > 0) {
        int minVal = arr[0];
        int minIdx = 0;

        for (int i = 1; i < len; i++) {
           if (arr[i] < minVal) {
               minIdx = i;
               minVal = arr[i];
           }
        }

        return minIdx;
    }

    return -1;
}