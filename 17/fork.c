#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

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
        int status;
        wait(&status);
        if (WIFEXITED(status) == 1) {
            printf("return value is %d\n", WEXITSTATUS(status));
        }
    }

    if (pid == 0) {
        sleep(2);
        printf("This is child\n");
        exit(5);
    }

    return 0;
}