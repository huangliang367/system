#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    pid_t pid;

    pid = fork();
    if (pid < 0) {
        printf("fork is error \n");
        return -1;
    }

    if (pid > 0) {
        printf("pid is %d.\n", getpid());
    }

    if (pid == 0) {
        sleep(2);
        printf("parent pid is %d.\n", getppid());
    }

    return 0;
}