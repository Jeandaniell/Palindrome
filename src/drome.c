/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include "../include/palindrome.h"

int palindrome_1(int ac, char **av)
{
    if (ac > 9) return (84);
    if (ac == 3 && strcmp(av[1], "-n") == 0 && my_str_isnum(av[2]) == 1)
        palin_n(av[2], 10, 0, "ras");
    if (ac == 5 && strcmp(av[1], "-n") == 0 && strcmp(av[3], "-imin") == 0)
        if (atoi(av[4]) < 0) return (84);
        else
            palin_n(av[2], 10, atoi(av[4]), "imin");
    if (ac == 5 && strcmp(av[1], "-n") == 0 && strcmp(av[3], "-imax") == 0)
        if (atoi(av[4]) < 0) return (84);
        else
            palin_n(av[2], 10, atoi(av[4]), "imax");
    if (ac == 5 && strcmp(av[1], "-n") == 0 && strcmp(av[3], "-b") == 0)
        if (atoi(av[4]) <= 0) return (84);
        else
            palin_n(av[2], atoi(av[4]), 0, "ras");
    return (0);
}

int palindrome_11(int ac, char **av)
{
    if (ac == 3 || ac == 5 || ac > 9)
        return (palindrome_1(ac, av));
    if (ac > 9) return (84);
    if (ac == 7 && strcmp(av[1], "-n") == 0 && strcmp(av[3], "-b") == 0
        && strcmp(av[5], "-imin") == 0 )
        if (atoi(av[4]) <= 0) return (84);
        else
            palin_n(av[2], atoi(av[4]), atoi(av[6]), "imin");
    if (ac == 7 && strcmp(av[1], "-n") == 0 && strcmp(av[3], "-b") == 0
        && strcmp(av[5], "-imax") == 0)
        if (atoi(av[4]) <= 0) return (84);
        else
            palin_n(av[2], atoi(av[4]), atoi(av[6]), "imax");
    return (0);
}

int palindrome_2(int ac, char **av)
{
    if (ac > 9) return (84);
    if (check_isnum(ac, av) == 84) return (84);
        if (ac == 5 && strcmp(av[1], "-p") == 0 && strcmp(av[3], "-imin") == 0)
            if (atoi(av[4]) < 0) return (84);
        else
            palin_p(av[2], 10, atoi(av[4]), "imin");
        if (ac == 5 && strcmp(av[1], "-p") == 0 && strcmp(av[3], "-imax") == 0)
            if (atoi(av[4]) < 0) return (84);
        else
            palin_p(av[2], 10, atoi(av[4]), "imax");
        if (ac == 7 && strcmp(av[1], "-p") == 0 && strcmp(av[3], "-b") == 0
            && strcmp(av[5], "-imin") == 0)
            if (atoi(av[4]) <= 0) return (84);
        else
            palin_p(av[2], atoi(av[4]), atoi(av[6]), "imin");
        if (ac == 7 && strcmp(av[1], "-p") == 0 && strcmp(av[3], "-b") == 0
            && strcmp(av[5], "-imax") == 0)
            if (atoi(av[4]) <= 0) return (84);
        else
            palin_p(av[2], atoi(av[4]), atoi(av[6]), "imax");
        return (0);
}

int palindrome_22(int ac, char **av)
{
    if (ac == 5 && strcmp(av[1], "-p") == 0 && strcmp(av[3], "-b") == 0)
        if (atoi(av[4]) <= 0) return (84);
        else
            palin_p(av[2], atoi(av[4]), 0, "ras");
     if (ac == 5 || ac == 7 || ac > 9)
        return (palindrome_2(ac, av));
    if (ac == 3 && strcmp(av[1], "-p") == 0 && my_str_isnum(av[2]) == 1)
        palin_p(av[2], 10, 0, "ras");
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 1) return (84);
    if (check_isnum(ac, av) == 84) return (84);
    if (check_valid_argument(ac, av) == 1) return (84);
    if (check_valid_argument(ac, av) == 2 && check_isnum(ac, av) == 2) {
        if (strcmp(av[1], "-n") == 0) return (palindrome_11(ac, av));
        if (strcmp(av[1], "-p") == 0) return (palindrome_22(ac, av));
    }
    if (ac == 2 && strcmp(av[1], "-h") == 0) usage();
    return (0);
}
