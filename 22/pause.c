#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("pause before\n");
    pause();
    printf("pause after\n");
    return 0;
}