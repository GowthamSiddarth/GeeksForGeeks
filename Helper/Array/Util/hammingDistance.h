#ifndef HAMMING_DISTANCE
#define HAMMING_DISTANCE

int hammingDistance(int *arr1, int len1, int *arr2, int len2) {
    if (len1 != len2) {
        return -1;
    }

    int count = 0;
    for (int i = 0; i < len1; i++) {
        count += (arr1[i] != arr2[i]);
    }

    return count;
}

#endif