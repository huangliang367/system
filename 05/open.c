#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int fd;
    char buf[32] = { 0 };
    ssize_t ret;
    fd = open("a.c", O_CREAT | O_RDWR, 0666);
    if (fd < 0) {
        printf("open is error\n");
        return -1;
    }
    write(fd, "hello\n", 6);
    close(fd);
    return 0;
}
