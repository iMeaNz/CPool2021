/*
** EPITECH PROJECT, 2021
** RPN_CREATION
** File description:
** Function used to translate expr to rpn
*/
#include "include/my.h"
#include <stdio.h>
#include <string.h>

int parse_number(char *expr, char **output, int *counter)
{
    int len_nb = 0;

    for (int i = 0; expr[i] >= '0' && expr[i] <= '9'; i++)
        len_nb++;
    char *number = malloc(sizeof(char) * len_nb);
    my_strncpy(number, expr, len_nb);
    output[*counter] = number;
    *counter = *counter + 1;
    return (len_nb);
}

static void check_prio(int diff, char **output, int *counter, stack_t **st)
{
    if (diff >= 0) {
        output[*counter] = malloc(sizeof(char) * 2);
        output[*counter][0] = (*st)->ope;
        output[*counter][1] = '\0';
        *counter = *counter + 1;
        (*st) = (*st)->next;
    }
}

static int fill_rpn(char **str, operators_t *list, stack_t **st, char *expr)
{
    int counter = 0;
    int prio;
    int oprio;

    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] >= '0' && expr[i] <= '9') {
            i += parse_number(&expr[i], str, &counter) - 1;
            continue;
        }
        expr[i] == ')' ? (*st) = my_find_par(*st, str, &counter) : NULL;
        if (expr[i] == ')')
            continue;
        if (expr[i] != '(') {
            prio = find_prio(list, expr[i]);
            oprio = (list_size(*st) != 0) ? find_prio(list, (*st)->ope) : -9;
            check_prio(oprio - prio, str, &counter, st);
        }
        my_add_in_stack(st, expr[i]);
    }
    return (counter);
}

char **create_rpn(char *expr, operators_t *list)
{
    stack_t *st = NULL;
    int len = find_len_expr(expr);
    char **output = malloc(sizeof(char *) * len + 1);
    int counter = fill_rpn(output, list, &st, expr);

    while (st != NULL) {
        output[counter] = malloc(sizeof(char) * 2);
        output[counter][0] = st->ope;
        output[counter++][1] = '\0';
        st = st->next;
    }
    return (output);
}
