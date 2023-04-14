/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include "../include/palindrome.h"

int check_valid_argument(int ac, char **av)
{
    int i = 1;

    for (i = 1; i < ac; i++) {
        if (i % 2 != 0 && strcmp(av[i], "-b") != 0 && strcmp(av[i], "-imin")!=0
            && strcmp(av[i], "-imax") != 0 && strcmp(av[i], "-n") != 0
            && strcmp(av[i], "-p") != 0) {
            printf("invalid argument\n");
            return (1);
        }
    }
    return (2);
}

int check_isnum(int ac, char **av)
{
    int i = 2;

    for (i = 2; i < ac; i++)
        if (i % 2 == 0 && my_str_isnum(av[i]) == 0) return (84);
    return (2);
}
