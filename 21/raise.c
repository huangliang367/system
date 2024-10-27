#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>

int main(void)
{
    printf("raise before\n");
    raise(9);
    printf("raise after\n");
    return 0;
}
