/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include <stdio.h>
#include <stdlib.h>

int  my_factrec_synthesis(int nb)
{
    int resultat = nb;
    int k = nb - 1;

    if (nb < 0) {
        resultat = 0;
    } else if (nb == 0) {
        resultat = 1;
    } else if (nb > 0 && nb < 13) {
        for (; k >= 1; k--) {
            resultat = resultat * k;
        }
    } else if (nb >= 13) {
        return (0);
    }
    return (resultat);
}

int  my_squareroot_synthesis(int nb)
{
    int carre = 0;

    for (carre = 0; carre <= nb; carre++) {
        if (carre*carre == nb)
            return (carre);
    }
    return (-1);
}
