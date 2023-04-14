/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include "../include/palindrome.h"

int my_str_isnum(char const *str)
{
    int i = 0, n = 0;

    for (i = 0; str[i]; i++)
        if (str[i] >= '0' && str[i] <= '9') n++;
    if (n == my_strlen(str))
        return (1);
    else
        return (0);
}

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1, j = 0;
    char *restr = malloc(sizeof(char *) * i);
    while (i >= 0){
        restr[j] = str[i];
        i--;
        j++;
    }
    return (restr);
}

int my_strcmp(char const *first, char const *second)
{
    int i = 0, j = 0;

    for (i = 0 ;second[i]; i++)
        if (second[i] == first[i]) j++;
        if (j == my_strlen(first) - 1)
            return (1);
        else
            return (0);
}

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("      ./palindrome -n number -p palindrome ");
    my_putstr("[-b base] [-imin i] [-imax i]\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("       -n n      integer to be transformed (>=0)\n");
    my_putstr("       -p pal    palindromic number to be ");
    my_putstr("obtained (incompatible with the -n\n");
    my_putstr("       option) (>=0)\n");
    my_putstr("       if defined, all fitting values of n will be output\n");
    my_putstr("       -b base   base in which the procedure will ");
    my_putstr("be executed (1<b<=10) [def: 10]\n");
    my_putstr("       -imin i   minimum number of iterations, ");
    my_putstr("included (>=0) [def: 0]\n");
    my_putstr("       -imax i   maximum number of iterations, ");
    my_putstr("included (>=0) [def: 100]\n");
}
