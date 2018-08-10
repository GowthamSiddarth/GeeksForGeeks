#ifndef PIVOT_SEARCH
#define PIVOT_SEARCH

int getPivotInRotatedSortedIntArr(int *arr, int len) {
    int low = 0, high = len - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid < high && arr[mid] > arr[mid + 1]) {
            return mid + 1;
        } else if (mid > low && arr[mid] < arr[mid - 1]) {
            return mid;
        } else if (arr[low] >= arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

#endif