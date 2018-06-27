int binarySearchItr(int *arr, int len, int key) {
    int low = 0, high = len - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (key > arr[mid]) {
            low = mid + 1;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int binarySearchRecHelper(int *arr, int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (key < arr[mid]) {
            return binarySearchRecHelper(arr, low, mid - 1, key);
        } else if (key > arr[mid]) {
            return binarySearchRecHelper(arr, mid + 1, high, key);
        } else {
            return mid;
        }
    }

    return -1;
}

int binarySearchRec(int *arr, int len, int key) {
    return binarySearchRecHelper(arr, 0, len - 1, key);
}