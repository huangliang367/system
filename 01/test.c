#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 0;
    printf("argc is %d\n", argc);
    for (i = 0; i < argc; i++) {
        printf("argv[%d] is %s\n", i, argv[i]);
    }

    return 0;
}
