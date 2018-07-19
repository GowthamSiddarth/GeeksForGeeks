int lenOfStrItr(char *s) {
    int i = 0;
    while ('\0' != s[i]) {
        i++;
    }

    return i;
}

int lenOfStrRec(char *s) {
    char *_s = s;
    if ('\0' == *_s) {
        return _s - s;
    } else {
        return 1 + lenOfStrRec(++_s);
    }
}