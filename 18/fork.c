#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
    pid_t pid;

    pid = fork();

    if (pid > 0) {
        exit(0);
    }

    if (pid == 0) {
        setsid();
        chdir("/");
        umask(0);
        close(1);
        close(2);
        close(3);
        while (1) {
        }
    }

    return 0;
}