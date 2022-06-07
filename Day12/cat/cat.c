/*
** EPITECH PROJECT, 2021
** CAT
** File description:
** Read a file
*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include "../include/my.h"

int error_handling(char *av, int error)
{
    my_putstr("cat: ");
    my_putstr(av);
    if (error == 2) {
        my_putstr(": No such file or directory\n");
    }
    if (error == 21) {
        my_putstr(": Is a directory\n");
    }
    return 84;
}

int cat(int argc, char *fn)
{
    int fd;
    char buffer[30000];
    int nb;

    if (argc == 1) {
        nb = read(0, buffer, 30000);
        my_putstr(buffer);
        return 0;
    } else {
        fd = open(fn, O_RDONLY | 0, 0);
        
        if (errno != 0)
            return (error_handling(fn, errno));
        nb = read(fd, buffer, 30000);
    }
    if (errno != 0)
        return (error_handling(fn, errno));
    write(0, buffer, 30000);

    return 0;
}

int main(int argc, char **argv)
{
    int error;
    int i = 1;
    char buffer[30000];
    int fd;

    if (argc == 1)
        i = 0;

    for (i; i < argc; i++) {
        error = cat(argc, argv[i]);
        if (error == 84)
            return 84;
    }

    return 0;
}
