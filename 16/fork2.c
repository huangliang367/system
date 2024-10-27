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
        while (1)
            ;
    }

    if (pid == 0) {
        printf("This is child.\n");
        exit(0);
    }

    return 0;
}