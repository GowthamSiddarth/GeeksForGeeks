#ifndef ARRAY_LENGTH
#define ARRAY_LENGTH
#include <stdio.h>

int arrayLength(int arr[]) {    
    return NULL == arr ? 0 : sizeof(arr) / sizeof(arr[0]);
}

#endif