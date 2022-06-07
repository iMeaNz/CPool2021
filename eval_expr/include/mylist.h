/*
** EPITECH PROJECT, 2021
** MYLIST
** File description:
** Struct for the day11
*/

#ifndef MYLIST_H
    #define MYLIST_H

typedef struct operator {
    char sign;
    int prio;
    int (*fct)(int, int);
} operator_t;

typedef struct operators {
    operator_t op;
    struct operators *next;
} operators_t;

typedef struct stack {
    char ope;
    struct stack *next;
} stack_t;

typedef struct stack_nb {
    int nb;
    struct stack_nb *next;
} stack_nb_t;

#endif
