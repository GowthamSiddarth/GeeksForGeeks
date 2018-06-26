int linearSearchItr(int *arr, int len, int key) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int linearSearchRec(int *arr, int len, int key) {
    if (0 == len) {
        return -1;
    } else if (key == arr[len - 1]) {
        return len - 1;
    } else {
        return linearSearchRec(arr, len - 1, key);
    }
}