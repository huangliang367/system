#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t pid;

    pid = fork();
    if (pid < 0) {
        printf("fork is error \n");
        return -1;
    }

    if (pid > 0) {
        printf("This is parent, parent pid is %d.\n", getpid());
    }

    if (pid == 0) {
        printf("This is child, child pid is %d, parent pid is %d.\n", getpid(), getppid());
    }

    return 0;
}