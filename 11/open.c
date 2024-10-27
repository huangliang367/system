#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int fd_src;
    int fd_obj;
    char buf[32] = { 0 };
    char file_path[32] = { 0 };
    char file_name[32] = { 0 };
    ssize_t ret;
    struct dirent *dir;
    DIR *dp;

    printf("Please enter the file path:\n");
    scanf("%s", file_path);

    dp = opendir(file_path);
    if (dp == NULL) {
        printf("opendir is error\n");
        return -1;
    }
    printf("opendir is ok\n");
    while (1) {
        dir = readdir(dp);
        if (dir != NULL) {
            printf("file name is %s\n", dir->d_name);
        } else
            break;
    }

    printf("Please enter the file name:\n");
    scanf("%s", file_name);

    fd_src = open(strcat(strcat(file_path, "/"), file_name), O_RDWR);
    if (fd_src < 0) {
        printf("open is error\n");
        return -1;
    }

    fd_obj = open(file_name, O_CREAT | O_RDWR, 0666);
    if (fd_obj < 0) {
        printf("open is error\n");
        return -2;
    }

    while ((ret = read(fd_src, buf, 32)) != 0) {
        write(fd_obj, buf, ret);
    }

    close(fd_src);
    close(fd_obj);
    closedir(dp);
    return 0;
}
