#include <stdio.h>
#include "../Helper/String/strlen.h"

int naivePatterSearch(char *text, char *pattern) {
    int lenOfText = lenOfStrItr(text);
    int lenOfPattern = lenOfStrItr(pattern);

    for (int i = 0; i <= lenOfText - lenOfPattern; i++) {
        int j = 0;
        while (j < lenOfPattern) {
            if (text[i + j] != pattern[j]) {
                break;
            }

            j++;
        }

        if (j == lenOfPattern) {
            return i;
        }
    }

    return -1;
}

int main () {
    char texts[10][10] = {"", "abc", "shbvhjwc", "v", "", "asdhbd", "abc", "adad", "awde", NULL};
    char patterns[10][10] = {"da", "b", "hjw", "v", "", "add", "bc", "ad", "wdf", NULL};

    for (int i = 0; i < 10; i++) {
        int idx = naivePatterSearch(texts[i], patterns[i]);

        printf("text = %s, pattern = %s, idx = %d\n", texts[i], patterns[i], idx);
    }

    return 0;
}