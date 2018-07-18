int ceilSearchItr(int *arr, int len, int key) {
    int low = 0, high = len - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (key == arr[mid]) {
            return mid - 1;
        } else if (mid < len - 1 && key > arr[mid] && key <= arr[mid + 1]) {
            return mid + 1;
        } else if (key > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1 == high ? 0 : -1;
}