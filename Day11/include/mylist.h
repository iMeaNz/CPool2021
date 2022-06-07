/*
** EPITECH PROJECT, 2021
** MYLIST
** File description:
** Struct for the day11
*/
#ifndef MYLIST_H
    #define MYLIST_H

typedef struct linked_list
{
    char *data;
    struct linked_list *next;
} linked_list_t;
#endif