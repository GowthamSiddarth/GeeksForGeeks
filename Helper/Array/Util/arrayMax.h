int maxIntArr(int *arr, int len) {
    if (len > 0) {
        int maxVal = arr[0];
        int maxIdx = 0;

        for (int i = 1; i < len; i++) {
           if (arr[i] > maxVal) {
               maxIdx = i;
               maxVal = arr[i];
           }
        }

        return maxIdx;
    }

    return -1;
}