#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main(void)
{
    signal(SIGINT, SIG_IGN);
    while (1) {
        printf("wait signal\n");
        sleep(1);
    }

    return 0;
}
