/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include "../include/palindrome.h"

int my_putnbr_base(int nb, int n)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 0 && nb <= n-1)
        my_putchar(nb + 48);
    if (nb >= n) {
        my_putnbr_base(nb / n, n);
        my_putchar(nb % n + 48);
    }
}

char *conv_base(int nb, int base)
{
    char *str = malloc(sizeof(char) * 100);
    int i = 0, j = 0, k = 0;

    if (nb < 0 || base <= 0 || base > 10)
        exit(84);
    if (nb >= 0 && nb <= base - 1) {
        nb = nb;
        str[0] = nb + 48;
        str[1] = '\0';
    }
    if (nb >= base) {
        for (i = 0; nb / base != 0; i++, k++) {
            str[k] = nb % base + 48;
            nb = nb / base;
            if (nb / base == 0)
                str[k+1] = nb + 48;
        }
        str[k+1] = '\0';
    }
    return (my_revstr(str));
}

int find_nb_conv(int nb, int base)
{
    int i = 0;

    for (i = 0; atoi(conv_base(i, base)) != nb; i = i + 1) {
        free(conv_base(i, base));
        free(conv_base(nb, base));
    }
    return (i);
}
