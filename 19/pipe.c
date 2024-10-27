#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
    char buf[32] = { 0 };
    pid_t pid;

    int fd[2];

    pipe(fd);
    printf("fd[0] is %d\n", fd[0]);
    printf("fd[1] is %d\n", fd[1]);

    pid = fork();
    if (pid < 0) {
        printf("error\n");
    }

    if (pid > 0) {
        int status;
        close(fd[0]);
        write(fd[1], "hello", 5);
        close(fd[1]);
        wait(&status);
        exit(0);
    }

    if (pid == 0) {
        close(fd[1]);
        read(fd[0], buf, 32);
        printf("buf is %s\n", buf);
        close(fd[0]);
        exit(0);
    }

    return 0;
}