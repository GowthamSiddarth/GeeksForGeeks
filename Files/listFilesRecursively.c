#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

void listFilesRecursively(char *path) {
  struct dirent *de;
  DIR *dr = opendir(path);

  if (NULL == dr) {
    printf("could not read current dir");
    return;
  }

  while (NULL != (de = readdir(dr))) {
    if (0 == strcmp(de->d_name, ".") || 0 == strcmp(de->d_name, "..")) {
      continue;
    }
    printf("d_name = %s\n", de->d_name);

    struct stat s;
    stat(strcat(strcat(path, "/"), de->d_name), &s);
    printf("is_dir = %d\n", S_ISDIR(s.st_mode));
    if (S_ISDIR(s.st_mode)) {
      printf("%s is a dir\n", de->d_name);
      listFilesRecursively(de->d_name);
    }
  }

  closedir(dr);
}

int main() {
  listFilesRecursively("./testDir");
  return 0;
}