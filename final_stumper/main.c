/*
** EPITECH PROJECT, 2021
** Final_stumper
** File description:
** Final stumper
*/

#include "include/my.h"
#include <unistd.h>

int main(void)
{
    char buff[10001];
    int offset = 0;
    int len = 0;
    
    while ((len = read(0, buff + offset, 10000 - offset)) > 0)
        offset = offset + len;
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    if (buff[0] == '\0' || buff[0] == '\n') {
        write(1, "none\n", 5);
        return (84);
    }
    return (rush3(buff));
}
