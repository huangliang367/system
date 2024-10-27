#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int shmid;
    shmid = shmget(IPC_PRIVATE, 1024, 0777);
    if (shmid < 0) {
        printf("shmget is error\n");
        return -1;
    }
    printf("shmget is ok and shmid is %d\n", shmid);

    return 0;
}
