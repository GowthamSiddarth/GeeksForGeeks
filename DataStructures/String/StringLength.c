#include <stdio.h>
#include "../../Helper/String/strlen.h"

int main () {
    char strings[5][10] = {"", "abc", "a", "akjwndk", NULL};

    for (int i = 0; i < 5; i++) {
        int lenItr = lenOfStrItr(strings[i]);
        int lenRec = lenOfStrRec(strings[i]);

        printf("str = %s, lenItr = %d, lenRec = %d\n", strings[i], lenItr, lenRec);
    }

    return 0;
}