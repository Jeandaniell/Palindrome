/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include "../include/palindrome.h"

void palin_n(char *nombre, int base, int i_value, char *id_i)
{
    int iteration = 0, new_number = 0, stock = 0;
    char *convertion = conv_base(atoi(nombre), base);
    int *pointeur = stock_variable(nombre, stock, iteration, base);

    if (strcmp(convertion, my_revstr(convertion)) == 0) {
        printf("%d leads to %d in 0 iteration(s) in base %d\n",
               atoi(nombre), atoi(nombre), base);
    } else {
        if (my_strcmp(id_i, "imax") == 0 && (i_value > 100 || i_value < 0))
            exit(84);
        if (my_strcmp(id_i, "imin") == 0 && i_value < 0) exit(84);
        print_message(new_number, id_i, i_value, pointeur);
    }
    free(convertion);
}

int *iterate(int nombre, int palin, int base)
{
    int counter = 0, new_number = 0;
    char *text = malloc(sizeof(char) * 100);
    int *composants = malloc(sizeof(int) * 2);

    if (nombre == palin) {
        composants[0] = 0;
        composants[1] = palin;
        return (composants);
    } else
        for (counter = 0; nombre < palin; counter++) {
            sprintf(text, "%d", nombre);
            new_number = nombre + atoi(my_revstr(text));
            nombre = new_number;
        }
    free(text);
    if (new_number == palin) {
        composants[0] = counter;
        composants[1] = new_number;
        return (composants);
    } else
        return (NULL);
}

void palin_p(char *nombre, int base, int i_value, char *id_i)
{
    int i = 1;
    int iteration = 0, *comp, j = 0, stock = 0;
    if (my_strcmp(id_i, "imax") == 0 && (i_value > 100 || i_value < 0))
        exit(84);
    if (my_strcmp(id_i, "imin") == 0 && i_value < 0) exit(84);
    for (i = 1; i <= atoi(conv_base(atoi(nombre), base)); i++) {
        if (iterate(atoi(conv_base(i, base)),
                    atoi(conv_base(atoi(nombre), base)), base) != NULL) {
            comp = iterate(atoi(conv_base(i, base)),
                           atoi(conv_base(atoi(nombre), base)), base);
            stock = i;
            pfunc();
        }
    }
    if (j == 0) printf("no solution\n");
}
