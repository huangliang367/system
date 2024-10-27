#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    int ret;
    DIR *dp;

    if (argc != 2) {
        printf("Usage:%s <name file>\n", argv[0]);
        return -1;
    }

    dp = opendir(argv[1]);
    if (dp != NULL) {
        printf("opendir is ok\n");
        return -1;
    }

    closedir(dp);
    return 0;
}
