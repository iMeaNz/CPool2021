/*
** EPITECH PROJECT, 2021
** MY_STRNCMP
** File description:
** Test for the strncmp function
*/
#include <criterion/criterion.h>

Test (my_strncmp, equal_strings)
{
    char src1[] = "HelloWorld";
    char src2[] = "HelloWorld";

    int result = my_strncmp(src1, src2, 10);
    cr_assert_eq(result, 0);
}

Test (my_strncmp, first_inferior)
{
    char src1[] = "HelloAorld";
    char src2[] = "HelloWorld";

    int result = my_strncmp(src1, src2, 10);
    cr_assert_lt(result, 0);
}

Test (my_strncmp, second_inferior)
{
    char src1[] = "HelloWorld";
    char src2[] = "HelloAorld";

    int result = my_strncmp(src1, src2, 10);
    cr_assert_gt(result, 0);
}

Test (my_strncmp, equal_but_size_diff)
{
    char src1[] = "HelloWorld";
    char src2[] = "Hello";

    int result = my_strncmp(src1, src2, 5);
    cr_assert_eq(result, 0);
}

Test (my_strncmp, first_inferior_but_size_diff)
{
    char src1[] = "Hella";
    char src2[] = "HelloWorld";

    int result = my_strncmp(src1, src2, 5);
    cr_assert_lt(result, 0);
}

Test (my_strncmp, second_inferior_but_size_diff)
{
    char src1[] = "Hellz";
    char src2[] = "HelloWorld";

    int result = my_strncmp(src1, src2, 5);
    cr_assert_gt(result, 0);
}

Test (my_strncmp, handle_empty_strings)
{
    char src1[] = "";
    char src2[] = "";

    int result = my_strncmp(src1, src2, 5);
    cr_assert_eq(result, 0);
}
