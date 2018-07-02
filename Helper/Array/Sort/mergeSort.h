#include <malloc.h>
#include "../Util/arrayCopy.h"

void merge(int *arr, int left, int mid, int right) {    
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int *leftArr = (int *)malloc(sizeof(int) * leftSize);
    int *rightArr = (int *)malloc(sizeof(int) * rightSize);

    //copyIntArr(arr, leftSize, leftArr, leftSize, leftSize, left, 0);
    //copyIntArr(arr, rightSize, rightArr, rightSize, rightSize, mid + 1, 0);
    int i, j, k;    
    for (i = 0; i < leftSize; i++) {
        leftArr[i] = arr[left + i];
    }
    for (j = 0; j < rightSize; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    i = 0, j = 0, k = left;
    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }

        k++;
    }

    while (i < leftSize) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSortHelper(int *arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSortHelper(arr, left, mid);
        mergeSortHelper(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void mergeSort(int *arr, int len) {
    mergeSortHelper(arr, 0, len - 1);
}