#ifndef FLOOR_SEARCH
#define FLOOR_SEARCH

int floorSearchItr(int *arr, int len, int key) {
    int low = 0, high = len - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (key == arr[mid]) {
            return mid;
        } else if (mid > 0 && key >= arr[mid - 1] && key < arr[mid]) {
            return mid - 1;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low == len ? len - 1 : -1;
}

#endif