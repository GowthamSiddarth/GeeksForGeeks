#include <stdio.h>
#include <dirent.h>

int main () {
    struct dirent *de;
    DIR *dr = opendir(".");

    if (NULL == dr) {
        printf("Could not open dir");
        return 0;
    }

    while (NULL != (de = readdir(dr))) {
        printf("%s\n", de->d_name);
    }

    closedir(dr);
    return 0;
}