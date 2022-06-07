/*
** EPITECH PROJECT, 2021
** MY_PRINT_COMB
** File description:
** Function that prints all the numbers composed of 3 different digits
*/

int my_print_number(char number1, char number2, char number3)
{
    my_putchar(number1);
    my_putchar(number2);
    my_putchar(number3);
    if (number1 + number2 + number3 == 168) {
        return 0;
    }
    my_putchar(',');
    my_putchar(' ');
    return 0;
}

int my_third_number(char number1, char number2)
{
    for (char number3 = '0'; number3 <= '9'; number3++) {
        if (number2 >= number3) {
            continue;
        }else {
            my_print_number(number1, number2, number3);
        }
    }
    return 0;
}

int my_print_comb(void)
{
    for (char number1 = '0'; number1 <= '9'; number1++) {
        for (char number2 = '0'; number2 <= '9'; number2++) {
            if (number1 >= number2) {
                continue;
            } else {
                my_third_number(number1, number2);
            }
        }
    }
    return 0;
}
