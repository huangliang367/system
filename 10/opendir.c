#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

char prefix[256];
int pre_index = 0;

void print_prefix()
{
  for (int i = 0; i < pre_index; i++) {
    printf("%c", prefix[i]);
  }
}

int get_filename_index(char *path)
{
    int len = 0;
    if (NULL == path) {
        return -1;
    }

    len = strlen(path);
    for (int i = len - 1; i >= 0; i--) {
        if ((path[i] == '/') && (i == (len - 1))) {
            continue;
        } else if (path[i] == '/') {
            return (i + 1);
        }
    }

    return 0;
}

void list_file(char *path)
{
    DIR *dp;
    struct dirent *ent;
    char *lpath;
    int lpath_index = -1;
    int filename_index = -1;

    dp = opendir(path);
    if (NULL == dp) {
        printf("Cannot open dir %s\n", path);
        return;
    }

    lpath = malloc(256 * sizeof(char));
    memset(lpath, 0, 256 * sizeof(char));
    strcat(lpath, path);
    lpath_index = strlen(lpath);
#if 0
    print_prefix();
    filename_index = get_filename_index(path);
    if (-1 != filename_index) {
        printf("%s\n", &path[filename_index]);
    }
#endif
    ent = readdir(dp);
    while (ent != NULL) {
        if (ent->d_type == 4) {
            if ((0 == strcmp(ent->d_name, ".")) || (0 == strcmp(ent->d_name, ".."))) {
                ent = readdir(dp);
                continue;
            }
            strcat(lpath, "/");
            strcat(lpath, ent->d_name);
            print_prefix();
            printf("|---%s\n", ent->d_name);
            strcat(prefix, "|   ");
            pre_index += 4;
            list_file(lpath);
            memset(&lpath[lpath_index], 0x0, strlen(ent->d_name) + 1);
            pre_index -= 4;
        } else {
            print_prefix();
            printf("|---%s\n", ent->d_name);
        }
        ent = readdir(dp);
    }

    free(lpath);
}

int main(int argc, char *argv[])
{
    int ret;
    DIR *dp;
    struct dirent *dir;

    if (argc != 2) {
        printf("Usage:%s <name file>\n", argv[0]);
        return -1;
    }

    memset(prefix, 0, sizeof(prefix));
    list_file(argv[1]);

    return 0;
}
