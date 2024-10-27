
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
        printf("This is parent, parent pid is %d\n", getpid());
    }

    if (pid == 0) {
        printf("This is child, child pid is %d\n", getpid());
        execl("./hello", "hello", NULL);
        exit(0);
    }

    i++;
    printf("pid: %d, i is %d\n", getpid(), i);
    return 0;
}