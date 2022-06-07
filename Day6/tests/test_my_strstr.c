/*
** EPITECH PROJECT, 2021
** MY_STRSTR
** File description:
** Test for the str_str function
*/
#include <criterion/criterion.h>

Test (my_strstr, find_full_strings)
{
    char *srct = strdup("HelloWorld");
    char *dest = my_strstr(srct, "HelloWorld");
    cr_assert_str_eq(dest, "HelloWorld");
}

Test (my_strstr, find_strings_end)
{
    char *srct = strdup("HelloWorld");
    char *dest = my_strstr(srct, "World");
    cr_assert_str_eq(dest, "World");
}

Test (my_strstr, find_strings_begin)
{
    char *srct = strdup("HelloWorld");
    char *dest = my_strstr(srct, "Hello");
    cr_assert_str_eq(dest, "HelloWorld");
}

Test (my_strstr, find_multiple)
{
    char *srct = strdup("mmarvin");
    char *dest = my_strstr(srct, "marv");
    cr_assert_str_eq(dest, "marvin");
}

Test (my_strstr, handle_empty)
{
    char *srct = strdup("Hello");
    char *dest = my_strstr(srct, "");
    cr_assert_str_eq(dest, "Hello");
}
