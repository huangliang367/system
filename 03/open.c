#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "test.h"

int main(int argc, char *argv[])
{
    int fd = -1;

    printf("sum = %d\n", add(1, 2));

    fd = open("a.c", O_CREAT | O_RDWR, 0666);
    if (fd < 0) {
        printf("open error\n");
    }
    printf("fd is %d\n", fd);
    close(fd);
    return 0;
}
