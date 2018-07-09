int ternarySearchItr(int *arr, int len, int key) {
    int low = 0, high = len - 1;

    while (low <= high) {
        int mid1 = low + (high - low) / 3;
        int mid2 = mid1 + (high - low) / 3;

        if (key < arr[mid1]) {
            high = mid1 - 1;
        } else if (key > arr[mid1] && key < arr[mid2]) {
            low = mid1 + 1;
            high = mid2 - 1;
        } else if (key > arr[mid2]) {
            low = mid2 + 1;
        } else if (key == arr[mid1]) {
            return mid1;
        } else if (key == arr[mid2]) {
            return mid2;
        } else {
            return -1;
        }
    }

    return -1;
}

int ternarySearchHelper(int *arr, int low, int high, int key) {
    if (low <= high) {
        int mid1 = low + (high - low) / 3;
        int mid2 = mid1 + (high - low) / 3;

        if (key < arr[mid1]) {
            return ternarySearchHelper(arr, low, mid1 - 1, key);
        } else if (key > arr[mid1] && key < arr[mid2]) {
            return ternarySearchHelper(arr, mid1 + 1, mid2 - 1, key);
        } else if (key > arr[mid2]) {
            return ternarySearchHelper(arr, mid2 + 1, high, key);
        } else if (key == arr[mid1]) {
            return mid1;
        } else if (key == arr[mid2]) {
            return mid2;
        } else {
            return -1;
        }
    }

    return -1;
}

int ternarySearchRec(int *arr, int len, int key) {
    return ternarySearchHelper(arr, 0, len - 1, key);
}