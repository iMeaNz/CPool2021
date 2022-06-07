/*
** EPITECH PROJECT, 2021
** HEADER
** File description:
** Header File
*/
#ifndef MY_H
    #define MY_H

void my_putchar(char c);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *rush_1(int x, int y);
char *rush_2(int x, int y);
char *rush_3(int x, int y);
char *rush_4(int x, int y);
char *rush_5(int x, int y);
int rush3(char *buffer);
int get_length(char *buffer);
int get_height(char *buffer);
#endif
