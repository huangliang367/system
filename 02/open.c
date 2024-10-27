#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int add(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{
    int fd = -1;
    int c = add(1, 2);

    printf("c = %d\n", c);

    fd = open("a.c", O_CREAT | O_RDWR, 0666);
    if (fd < 0) {
        printf("open is error\n");
    }
    printf("fd is %d\n", fd);
    return 0;
}
