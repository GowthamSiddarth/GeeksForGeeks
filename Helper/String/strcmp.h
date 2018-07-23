int cmpStr(char *s1, char *s2) {
    int i = 0;
    while ('\0' != s1[i] && '\0' != s2[i] && s1[i] == s2[i]) {
        i++;
    }

    return s1[i] - s2[i];
}