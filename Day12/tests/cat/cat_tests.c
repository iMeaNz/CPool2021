/*
** EPITECH PROJECT, 2021
** CAT_TESTS
** File description:
** Tests for the cat function
*/
#include <criterion/criterion.h>
#include <my.h>

Test (my_putchar, basic_cat_test)
{
    int nb = cat(2, "test1.txt");
    cr_assert_eq(0, 0);
}
Test (cat, empty_file)
{
    int nb = cat(2, "test2.txt");
    cr_assert_eq(nb, 0);
}
Test (cat, file_dont_exist)
{
    int nb = cat(2, "test4.txt");
    cr_assert_eq(nb, 84);
}
