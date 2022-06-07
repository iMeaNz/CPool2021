/*
** EPITECH PROJECT, 2021
** HEADER
** File description:
** Header File
*/

#include "mylist.h"
#include <stdlib.h>
#include <unistd.h>
#ifndef MY_H
    #define MY_H

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_putnbr_base(int nbr, char const *base);
int my_getnbr_base(char const *str, char const *base);
char **my_str_to_word_array(char const *str);
int my_show_word_array(char * const *tab);
int my_swap_char(char *a, char *b);
int my_add(int a, int b);
int my_sub(int a, int b);
int my_mul(int a, int b);
int my_div(int a, int b);
int my_mod(int a, int b);
void create_linked_list(operators_t **list);
void my_add_in_operators(operators_t **list, operator_t data);
int find_prio(operators_t *begin, char data_ref);
char **create_rpn(char *expr, operators_t *list);
void my_add_in_stack(stack_t **list, char data);
stack_t *my_find_par(stack_t *begin, char **output, int *counter);
int list_size(stack_t *begin);
int is_op(char c);
void my_show_stack(stack_t *list);
int find_len_expr(char *expr);
void my_show_string_array(char **output);
int find_op_and_compute(operators_t *list, char op, int a, int b);
int read_rpn(char **output, operators_t *list);
void my_add_in_stack_nb(stack_nb_t **list, int nb);
int pick(stack_nb_t **st);
void my_show_stack_nb(stack_nb_t *list);
int eval_expr(char *av);
char *cleanup(char *str);
#endif
