#ifndef ARRAY_COPY
#define ARRAY_COPY

void copyIntArr(int *src, int srcLen, int *dest, int destLen, int numOfUnits, int srcStart, int destStart) {
    if (srcStart + numOfUnits <= srcLen && destStart + numOfUnits <= destLen) {
        for (int i = srcStart, j = destStart; i < numOfUnits; i++, j++) {
            dest[j] = src[i];
        }
    }
}

#endif