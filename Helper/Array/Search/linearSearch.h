int linearSearchItr(int *arr, int len, int key) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int linearSearchRecHelper(int *arr, int len, int curr, int key) {
    if (curr == len) {
        return -1;
    } else if (key == arr[curr]) {
        return curr;
    } else {
        return linearSearchRecHelper(arr, len, curr + 1, key);
    }
}

int linearSearchRec(int *arr, int len, int key) {
    return linearSearchRecHelper(arr, len, 0, key);
}