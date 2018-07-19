int lenOfStrItr(char *s) {
    int i = 0;
    while ('\0' != s[i]) {
        i++;
    }

    return i;
}