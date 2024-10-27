#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "fifo.h"

int main(int argc, char *argv[])
{
    int ret;
    int fd;
    int count = 0;
    char str_cnt[LINE_SIZE] = {0};

    if (argc < 2) {
        printf("Usage:%s <fifo name> \n", argv[0]);
        return -1;
    }

    if (access(argv[1], F_OK) == 1) {
        ret = mkfifo(argv[1], 0666);
        if (ret == -1) {
            printf("mkfifo is error \n");
            return -2;
        }
        printf("mkfifo is ok \n");
    }

    fd = open(argv[1], O_WRONLY);
    while (1) {
        sleep(1);
        sprintf(str_cnt, "%d", count);
        write(fd, str_cnt, LINE_SIZE);
        count += 1;
    }
    close(fd);
    return 0;
}