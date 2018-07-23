#include <stdio.h>
#include "../../Helper/String/strcmp.h"

int main () {
    char s1[7][10] = {"abc", "abc", "", "hello", "ajfbja", "a", ""};
    char s2[7][10] = {"ab", "abc", "", "hell", "ajfbjb", "a", "x"};

    for (int i = 0; i < 7; i++) {
        int res = cmpStr(s1[i], s2[i]);
        printf("s1 = %s, s2 = %s, res = %d\n", s1[i], s2[i], res);
    }

    return 0;
}