/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include "../include/palindrome.h"

int *stock_variable(char *nombre, int stock, int iteration, int base)
{
    int *pointeur = malloc(sizeof(int) * 6);
    char *convertion = conv_base(atoi(nombre), base);
    int reverse_nb = atoi(my_revstr(conv_base(atoi(nombre), base)));
    int base_number = atoi(convertion);

    pointeur[0] = atoi(nombre);
    pointeur[1] = stock;
    pointeur[2] = iteration;
    pointeur[3] = base;
    pointeur[4] = reverse_nb;
    pointeur[5] = base_number;
    free(convertion);
    return (pointeur);
}

void print_message(int new_number, char *id_i, int i_value, int *pointeur)
{
    char *text = malloc(sizeof(char) * 100);
    pointeur[5] = find_nb_conv(pointeur[5], pointeur[3]);
    pointeur[4] = find_nb_conv(pointeur[4], pointeur[3]);
    for (pointeur[2] = 1; pointeur[2] < 30; pointeur[2]++) {
        new_number = pointeur[5] + pointeur[4];
        new_number = atoi(conv_base(new_number, pointeur[3]));
        sprintf(text, "%d", new_number);
        nfunc();
        pointeur[5] = find_nb_conv(new_number, pointeur[3]);
        pointeur[4] = find_nb_conv(atoi(my_revstr(text)), pointeur[3]);
    }
    free(text);
}
