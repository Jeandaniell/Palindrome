/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_putnbr(int nb);
int my_getnbr(char const *str);
int my_str_isnum(char const *str);
int my_strcmp(char const *first, char const *second);
void palin_n(char *nombre, int base, int i_value, char *id_i);
void palin_p(char *nombre, int base, int i_value, char *id_i);
char *my_revstr(char *str);
void usage(void);
int *iterate(int nombre, int palin, int base);
int my_putnbr_base(int nb, int n);
char *conv_base(int nb, int n);
int find_nb_conv(int nb, int base);
int check_valid_argument(int ac, char **av);
int *stock_variable(char *nombre, int stock, int iteration, int base);
void print_message(int new_number, char *id_i, int i_value, int *pointeur);
int check_isnum(int ac, char **av);
int palindrome_1(int ac, char **av);
int palindrome_11(int ac, char **av);
int palindrome_2(int ac, char **av);
int palindrome_22(int ac, char **av);

#define pfunc() if (strcmp(id_i, "imin") == 0 && comp[0] >= i_value) { \
                printf("%d leads to %d in %d iteration(s) in base %d\n", \
                       stock, atoi(nombre), comp[0], base);\
                j++; \
            } else if (strcmp(id_i, "imax") == 0 && comp[0] <= i_value) { \
                printf("%d leads to %d in %d iteration(s) in base %d\n", \
                       stock, atoi(nombre), comp[0], base); \
                j++; \
            } else if (strcmp(id_i, "ras") == 0) { \
                printf("%d leads to %d in %d iteration(s) in base %d\n", \
                    stock, atoi(nombre), comp[0], base);       \
                j++; \
            }

#define nfunc() if (pointeur[2] == 29 && strcmp(text, my_revstr(text)) != 0)\
            printf("no solution\n");\
        if (strcmp(text, my_revstr(text)) == 0) {\
            pointeur[1] = find_nb_conv(new_number, pointeur[3]);\
            if (strcmp(id_i, "imin") == 0 && i_value <= pointeur[2])\
                printf("%d leads to %d in %d iteration(s) in base %d\n",\
                       pointeur[0], pointeur[1], pointeur[2], pointeur[3]);\
            else if (strcmp(id_i, "imax") == 0 && i_value >= pointeur[2])\
                printf("%d leads to %d in %d iteration(s) in base %d\n",\
                       pointeur[0], pointeur[1], pointeur[2], pointeur[3]);\
            else if (strcmp(id_i, "ras") == 0)\
                printf("%d leads to %d in %d iteration(s) in base %d\n",\
                       pointeur[0], pointeur[1], pointeur[2], pointeur[3]);\
            else if (strcmp(id_i, "imin") == 0 && i_value > pointeur[2]) { \
                pointeur[5] = find_nb_conv(new_number, pointeur[3]); \
                pointeur[4] = find_nb_conv(new_number, pointeur[3]); \
                continue; \
            } else \
                printf("no solution\n"); \
            break; \
        }
