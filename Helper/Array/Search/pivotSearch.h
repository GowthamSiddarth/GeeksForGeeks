#ifndef PIVOT_SEARCH
#define PIVOT_SEARCH

int getPivotInRotatedSortedIntArr(int *arr, int len) {
    int low = 0, high = len - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= arr[low] && arr[mid] <= arr[high]) {
            return mid;
        } else if (arr[mid] >= arr[low] && arr[mid] >= arr[high]) {
            return mid + 1;
        } else if (arr[mid] < arr[0]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;
}

#endif