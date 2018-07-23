int cmpStr(char *s1, char *s2) {
    if (NULL == s1 && NULL == s2) {
        return -1;
    } else if (NULL == s1) {
        return -s2[0];
    } else if (NULL == s2) {
        return s1[0];
    }

    int i = 0;
    while ('\0' != s1[i] && '\0' != s2[i] && s1[i] == s2[i]) {
        i++;
    }

    return s1[i] - s2[i];
}