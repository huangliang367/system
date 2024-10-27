#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void myfun(int sig)
{
    if (sig == SIGINT) {
        printf("get sigint\n");
    }
}

int main(void)
{
    signal(SIGINT, myfun);
    while (1) {
        sleep(1);
        printf("wait signal\n");
    }

    return 0;
}
