#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    int ret;

    if (argc != 2) {
        printf("Usage:%s <name file>\n", argv[0]);
        return -1;
    }

    ret = mkdir(argv[1], 0777);
    if (ret < 0) {
        printf("mkdir is error\n");
        return -1;
    }

    printf("mkdir is ok\n");
    return 0;
}
