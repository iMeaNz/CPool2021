/*
** EPITECH PROJECT, 2021
** MAIN
** File description:
** Main for the cat function
*/


int main(int argc, char **argv)
{
    int error;
    int i = 1;

    if(argc == 1)
        i = 0;

    for (i; i < argc; i++) {
        error = cat(argc, argv[i]);
        if (error == 84)
            return 84;
    }
    return 0;
}
